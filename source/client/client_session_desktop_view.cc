//
// PROJECT:         Aspia
// FILE:            client/client_session_desktop_view.cc
// LICENSE:         GNU General Public License 3
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#include "client/client_session_desktop_view.h"

#include "base/message_serialization.h"
#include "client/ui/desktop_window.h"

namespace aspia {

namespace {

enum MessageId { ConfigMessageId };

const quint32 kSupportedVideoEncodings =
    proto::desktop::VIDEO_ENCODING_ZLIB |
    proto::desktop::VIDEO_ENCODING_VP8 |
    proto::desktop::VIDEO_ENCODING_VP9;

const quint32 kSupportedFeatures = 0;

} // namespace

ClientSessionDesktopView::ClientSessionDesktopView(
    ConnectData* connect_data, QObject* parent)
    : ClientSession(parent),
      connect_data_(connect_data)
{
    desktop_window_ = new DesktopWindow(connect_data_);

    connect(desktop_window_, &DesktopWindow::sendConfig,
            this, &ClientSessionDesktopView::onSendConfig);

    // When the window is closed, we close the session.
    connect(desktop_window_, &DesktopWindow::windowClose,
            this, &ClientSessionDesktopView::closedByUser);
}

ClientSessionDesktopView::~ClientSessionDesktopView()
{
    delete desktop_window_;
}

// static
quint32 ClientSessionDesktopView::supportedVideoEncodings()
{
    return kSupportedVideoEncodings;
}

// static
quint32 ClientSessionDesktopView::supportedFeatures()
{
    return kSupportedFeatures;
}

void ClientSessionDesktopView::messageReceived(const QByteArray& buffer)
{
    proto::desktop::HostToClient message;

    if (!parseMessage(buffer, message))
    {
        emit errorOccurred(tr("Session error: Invalid message from host."));
        return;
    }

    if (message.has_video_packet())
    {
        readVideoPacket(message.video_packet());
    }
    else if (message.has_config_request())
    {
        readConfigRequest(message.config_request());
    }
    else
    {
        // Unknown messages are ignored.
        qWarning("Unhandled message from host");
    }

    emit readMessage();
}

void ClientSessionDesktopView::messageWritten(int /* message_id */)
{
    // Nothing
}

void ClientSessionDesktopView::startSession()
{
    desktop_window_->show();
    desktop_window_->activateWindow();

    emit readMessage();
}

void ClientSessionDesktopView::closeSession()
{
    // If the end of the session is not initiated by the user, then we do not send the session
    // end signal.
    disconnect(desktop_window_, &DesktopWindow::windowClose,
               this, &ClientSessionDesktopView::closedByUser);
    desktop_window_->close();
}

void ClientSessionDesktopView::onSendConfig(const proto::desktop::Config& config)
{
    proto::desktop::ClientToHost message;
    message.mutable_config()->CopyFrom(config);
    emit writeMessage(ConfigMessageId, serializeMessage(message));
}

void ClientSessionDesktopView::readVideoPacket(const proto::desktop::VideoPacket& packet)
{
    if (video_encoding_ != packet.encoding())
    {
        video_decoder_ = VideoDecoder::create(packet.encoding());
        video_encoding_ = packet.encoding();
    }

    if (!video_decoder_)
    {
        emit errorOccurred(tr("Session error: Video decoder not initialized."));
        return;
    }

    if (packet.has_format())
    {
        const proto::desktop::Size& size = packet.format().screen_size();

        if (size.width() <= 0 || size.height() <= 0)
        {
            emit errorOccurred(tr("Session error: Wrong video frame size."));
            return;
        }

        desktop_window_->resizeDesktopFrame(QSize(size.width(), size.height()));
    }

    DesktopFrame* frame = desktop_window_->desktopFrame();
    if (!frame)
    {
        emit errorOccurred(tr("Session error: The desktop frame is not initialized."));
        return;
    }

    if (!video_decoder_->decode(packet, frame))
    {
        emit errorOccurred(tr("Session error: The video packet could not be decoded."));
        return;
    }

    desktop_window_->drawDesktopFrame();
}

void ClientSessionDesktopView::readConfigRequest(
    const proto::desktop::ConfigRequest& config_request)
{
    proto::desktop::Config config = connect_data_->desktopConfig();

    desktop_window_->setSupportedVideoEncodings(config_request.video_encodings());
    desktop_window_->setSupportedFeatures(config_request.features());

    // If current video encoding not supported.
    if (!(config_request.video_encodings() & config.video_encoding()))
    {
        if (!(config_request.video_encodings() & kSupportedVideoEncodings))
        {
            emit errorOccurred(tr("Session error: There are no supported video encodings."));
            return;
        }
        else
        {
            if (!desktop_window_->requireConfigChange(&config))
            {
                emit errorOccurred(tr("Session error: Canceled by the user."));
                return;
            }
        }
    }

    connect_data_->setDesktopConfig(config);
    onSendConfig(config);
}

} // namespace aspia
