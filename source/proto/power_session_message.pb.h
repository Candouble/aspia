// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: power_session_message.proto

#ifndef PROTOBUF_power_5fsession_5fmessage_2eproto__INCLUDED
#define PROTOBUF_power_5fsession_5fmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace protobuf_power_5fsession_5fmessage_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsPowerEventImpl();
void InitDefaultsPowerEvent();
inline void InitDefaults() {
  InitDefaultsPowerEvent();
}
}  // namespace protobuf_power_5fsession_5fmessage_2eproto
namespace aspia {
namespace proto {
class PowerEvent;
class PowerEventDefaultTypeInternal;
extern PowerEventDefaultTypeInternal _PowerEvent_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace aspia {
namespace proto {

enum PowerEvent_Action {
  PowerEvent_Action_UNKNOWN = 0,
  PowerEvent_Action_SHUTDOWN = 1,
  PowerEvent_Action_REBOOT = 2,
  PowerEvent_Action_HIBERNATE = 3,
  PowerEvent_Action_SUSPEND = 4,
  PowerEvent_Action_PowerEvent_Action_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  PowerEvent_Action_PowerEvent_Action_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool PowerEvent_Action_IsValid(int value);
const PowerEvent_Action PowerEvent_Action_Action_MIN = PowerEvent_Action_UNKNOWN;
const PowerEvent_Action PowerEvent_Action_Action_MAX = PowerEvent_Action_SUSPEND;
const int PowerEvent_Action_Action_ARRAYSIZE = PowerEvent_Action_Action_MAX + 1;

// ===================================================================

class PowerEvent : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.PowerEvent) */ {
 public:
  PowerEvent();
  virtual ~PowerEvent();

  PowerEvent(const PowerEvent& from);

  inline PowerEvent& operator=(const PowerEvent& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PowerEvent(PowerEvent&& from) noexcept
    : PowerEvent() {
    *this = ::std::move(from);
  }

  inline PowerEvent& operator=(PowerEvent&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const PowerEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PowerEvent* internal_default_instance() {
    return reinterpret_cast<const PowerEvent*>(
               &_PowerEvent_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(PowerEvent* other);
  friend void swap(PowerEvent& a, PowerEvent& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PowerEvent* New() const PROTOBUF_FINAL { return New(NULL); }

  PowerEvent* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const PowerEvent& from);
  void MergeFrom(const PowerEvent& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PowerEvent* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef PowerEvent_Action Action;
  static const Action UNKNOWN =
    PowerEvent_Action_UNKNOWN;
  static const Action SHUTDOWN =
    PowerEvent_Action_SHUTDOWN;
  static const Action REBOOT =
    PowerEvent_Action_REBOOT;
  static const Action HIBERNATE =
    PowerEvent_Action_HIBERNATE;
  static const Action SUSPEND =
    PowerEvent_Action_SUSPEND;
  static inline bool Action_IsValid(int value) {
    return PowerEvent_Action_IsValid(value);
  }
  static const Action Action_MIN =
    PowerEvent_Action_Action_MIN;
  static const Action Action_MAX =
    PowerEvent_Action_Action_MAX;
  static const int Action_ARRAYSIZE =
    PowerEvent_Action_Action_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // .aspia.proto.PowerEvent.Action action = 1;
  void clear_action();
  static const int kActionFieldNumber = 1;
  ::aspia::proto::PowerEvent_Action action() const;
  void set_action(::aspia::proto::PowerEvent_Action value);

  // @@protoc_insertion_point(class_scope:aspia.proto.PowerEvent)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  int action_;
  mutable int _cached_size_;
  friend struct ::protobuf_power_5fsession_5fmessage_2eproto::TableStruct;
  friend void ::protobuf_power_5fsession_5fmessage_2eproto::InitDefaultsPowerEventImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PowerEvent

// .aspia.proto.PowerEvent.Action action = 1;
inline void PowerEvent::clear_action() {
  action_ = 0;
}
inline ::aspia::proto::PowerEvent_Action PowerEvent::action() const {
  // @@protoc_insertion_point(field_get:aspia.proto.PowerEvent.action)
  return static_cast< ::aspia::proto::PowerEvent_Action >(action_);
}
inline void PowerEvent::set_action(::aspia::proto::PowerEvent_Action value) {
  
  action_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.PowerEvent.action)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace aspia

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::aspia::proto::PowerEvent_Action> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_power_5fsession_5fmessage_2eproto__INCLUDED
