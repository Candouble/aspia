// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_eventlog.proto

#ifndef PROTOBUF_category_5feventlog_2eproto__INCLUDED
#define PROTOBUF_category_5feventlog_2eproto__INCLUDED

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

namespace protobuf_category_5feventlog_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsEventLog_Log_ItemImpl();
void InitDefaultsEventLog_Log_Item();
void InitDefaultsEventLog_LogImpl();
void InitDefaultsEventLog_Log();
void InitDefaultsEventLogImpl();
void InitDefaultsEventLog();
inline void InitDefaults() {
  InitDefaultsEventLog_Log_Item();
  InitDefaultsEventLog_Log();
  InitDefaultsEventLog();
}
}  // namespace protobuf_category_5feventlog_2eproto
namespace aspia {
namespace proto {
class EventLog;
class EventLogDefaultTypeInternal;
extern EventLogDefaultTypeInternal _EventLog_default_instance_;
class EventLog_Log;
class EventLog_LogDefaultTypeInternal;
extern EventLog_LogDefaultTypeInternal _EventLog_Log_default_instance_;
class EventLog_Log_Item;
class EventLog_Log_ItemDefaultTypeInternal;
extern EventLog_Log_ItemDefaultTypeInternal _EventLog_Log_Item_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace aspia {
namespace proto {

enum EventLog_Log_Type {
  EventLog_Log_Type_TYPE_UNKNOWN = 0,
  EventLog_Log_Type_TYPE_APPLICATION = 1,
  EventLog_Log_Type_TYPE_SECURITY = 2,
  EventLog_Log_Type_TYPE_SYSTEM = 3,
  EventLog_Log_Type_EventLog_Log_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  EventLog_Log_Type_EventLog_Log_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool EventLog_Log_Type_IsValid(int value);
const EventLog_Log_Type EventLog_Log_Type_Type_MIN = EventLog_Log_Type_TYPE_UNKNOWN;
const EventLog_Log_Type EventLog_Log_Type_Type_MAX = EventLog_Log_Type_TYPE_SYSTEM;
const int EventLog_Log_Type_Type_ARRAYSIZE = EventLog_Log_Type_Type_MAX + 1;

enum EventLog_Log_Level {
  EventLog_Log_Level_LEVEL_UNKNOWN = 0,
  EventLog_Log_Level_LEVEL_SUCCESS = 1,
  EventLog_Log_Level_LEVEL_INFORMATION = 2,
  EventLog_Log_Level_LEVEL_WARNING = 3,
  EventLog_Log_Level_LEVEL_ERROR = 4,
  EventLog_Log_Level_LEVEL_AUDIT_SUCCESS = 5,
  EventLog_Log_Level_LEVEL_AUDIT_FAILURE = 6,
  EventLog_Log_Level_EventLog_Log_Level_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  EventLog_Log_Level_EventLog_Log_Level_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool EventLog_Log_Level_IsValid(int value);
const EventLog_Log_Level EventLog_Log_Level_Level_MIN = EventLog_Log_Level_LEVEL_UNKNOWN;
const EventLog_Log_Level EventLog_Log_Level_Level_MAX = EventLog_Log_Level_LEVEL_AUDIT_FAILURE;
const int EventLog_Log_Level_Level_ARRAYSIZE = EventLog_Log_Level_Level_MAX + 1;

// ===================================================================

class EventLog_Log_Item : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.EventLog.Log.Item) */ {
 public:
  EventLog_Log_Item();
  virtual ~EventLog_Log_Item();

  EventLog_Log_Item(const EventLog_Log_Item& from);

  inline EventLog_Log_Item& operator=(const EventLog_Log_Item& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EventLog_Log_Item(EventLog_Log_Item&& from) noexcept
    : EventLog_Log_Item() {
    *this = ::std::move(from);
  }

  inline EventLog_Log_Item& operator=(EventLog_Log_Item&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const EventLog_Log_Item& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EventLog_Log_Item* internal_default_instance() {
    return reinterpret_cast<const EventLog_Log_Item*>(
               &_EventLog_Log_Item_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(EventLog_Log_Item* other);
  friend void swap(EventLog_Log_Item& a, EventLog_Log_Item& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EventLog_Log_Item* New() const PROTOBUF_FINAL { return New(NULL); }

  EventLog_Log_Item* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const EventLog_Log_Item& from);
  void MergeFrom(const EventLog_Log_Item& from);
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
  void InternalSwap(EventLog_Log_Item* other);
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

  // accessors -------------------------------------------------------

  // string source = 5;
  void clear_source();
  static const int kSourceFieldNumber = 5;
  const ::std::string& source() const;
  void set_source(const ::std::string& value);
  #if LANG_CXX11
  void set_source(::std::string&& value);
  #endif
  void set_source(const char* value);
  void set_source(const char* value, size_t size);
  ::std::string* mutable_source();
  ::std::string* release_source();
  void set_allocated_source(::std::string* source);

  // string description = 6;
  void clear_description();
  static const int kDescriptionFieldNumber = 6;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // int64 time = 2;
  void clear_time();
  static const int kTimeFieldNumber = 2;
  ::google::protobuf::int64 time() const;
  void set_time(::google::protobuf::int64 value);

  // .aspia.proto.EventLog.Log.Level level = 1;
  void clear_level();
  static const int kLevelFieldNumber = 1;
  ::aspia::proto::EventLog_Log_Level level() const;
  void set_level(::aspia::proto::EventLog_Log_Level value);

  // uint32 category = 3;
  void clear_category();
  static const int kCategoryFieldNumber = 3;
  ::google::protobuf::uint32 category() const;
  void set_category(::google::protobuf::uint32 value);

  // uint32 event_id = 4;
  void clear_event_id();
  static const int kEventIdFieldNumber = 4;
  ::google::protobuf::uint32 event_id() const;
  void set_event_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:aspia.proto.EventLog.Log.Item)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr source_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::int64 time_;
  int level_;
  ::google::protobuf::uint32 category_;
  ::google::protobuf::uint32 event_id_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5feventlog_2eproto::TableStruct;
  friend void ::protobuf_category_5feventlog_2eproto::InitDefaultsEventLog_Log_ItemImpl();
};
// -------------------------------------------------------------------

class EventLog_Log : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.EventLog.Log) */ {
 public:
  EventLog_Log();
  virtual ~EventLog_Log();

  EventLog_Log(const EventLog_Log& from);

  inline EventLog_Log& operator=(const EventLog_Log& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EventLog_Log(EventLog_Log&& from) noexcept
    : EventLog_Log() {
    *this = ::std::move(from);
  }

  inline EventLog_Log& operator=(EventLog_Log&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const EventLog_Log& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EventLog_Log* internal_default_instance() {
    return reinterpret_cast<const EventLog_Log*>(
               &_EventLog_Log_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(EventLog_Log* other);
  friend void swap(EventLog_Log& a, EventLog_Log& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EventLog_Log* New() const PROTOBUF_FINAL { return New(NULL); }

  EventLog_Log* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const EventLog_Log& from);
  void MergeFrom(const EventLog_Log& from);
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
  void InternalSwap(EventLog_Log* other);
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

  typedef EventLog_Log_Item Item;

  typedef EventLog_Log_Type Type;
  static const Type TYPE_UNKNOWN =
    EventLog_Log_Type_TYPE_UNKNOWN;
  static const Type TYPE_APPLICATION =
    EventLog_Log_Type_TYPE_APPLICATION;
  static const Type TYPE_SECURITY =
    EventLog_Log_Type_TYPE_SECURITY;
  static const Type TYPE_SYSTEM =
    EventLog_Log_Type_TYPE_SYSTEM;
  static inline bool Type_IsValid(int value) {
    return EventLog_Log_Type_IsValid(value);
  }
  static const Type Type_MIN =
    EventLog_Log_Type_Type_MIN;
  static const Type Type_MAX =
    EventLog_Log_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    EventLog_Log_Type_Type_ARRAYSIZE;

  typedef EventLog_Log_Level Level;
  static const Level LEVEL_UNKNOWN =
    EventLog_Log_Level_LEVEL_UNKNOWN;
  static const Level LEVEL_SUCCESS =
    EventLog_Log_Level_LEVEL_SUCCESS;
  static const Level LEVEL_INFORMATION =
    EventLog_Log_Level_LEVEL_INFORMATION;
  static const Level LEVEL_WARNING =
    EventLog_Log_Level_LEVEL_WARNING;
  static const Level LEVEL_ERROR =
    EventLog_Log_Level_LEVEL_ERROR;
  static const Level LEVEL_AUDIT_SUCCESS =
    EventLog_Log_Level_LEVEL_AUDIT_SUCCESS;
  static const Level LEVEL_AUDIT_FAILURE =
    EventLog_Log_Level_LEVEL_AUDIT_FAILURE;
  static inline bool Level_IsValid(int value) {
    return EventLog_Log_Level_IsValid(value);
  }
  static const Level Level_MIN =
    EventLog_Log_Level_Level_MIN;
  static const Level Level_MAX =
    EventLog_Log_Level_Level_MAX;
  static const int Level_ARRAYSIZE =
    EventLog_Log_Level_Level_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // repeated .aspia.proto.EventLog.Log.Item item = 2;
  int item_size() const;
  void clear_item();
  static const int kItemFieldNumber = 2;
  const ::aspia::proto::EventLog_Log_Item& item(int index) const;
  ::aspia::proto::EventLog_Log_Item* mutable_item(int index);
  ::aspia::proto::EventLog_Log_Item* add_item();
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::EventLog_Log_Item >*
      mutable_item();
  const ::google::protobuf::RepeatedPtrField< ::aspia::proto::EventLog_Log_Item >&
      item() const;

  // .aspia.proto.EventLog.Log.Type type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::aspia::proto::EventLog_Log_Type type() const;
  void set_type(::aspia::proto::EventLog_Log_Type value);

  // @@protoc_insertion_point(class_scope:aspia.proto.EventLog.Log)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::EventLog_Log_Item > item_;
  int type_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5feventlog_2eproto::TableStruct;
  friend void ::protobuf_category_5feventlog_2eproto::InitDefaultsEventLog_LogImpl();
};
// -------------------------------------------------------------------

class EventLog : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.EventLog) */ {
 public:
  EventLog();
  virtual ~EventLog();

  EventLog(const EventLog& from);

  inline EventLog& operator=(const EventLog& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EventLog(EventLog&& from) noexcept
    : EventLog() {
    *this = ::std::move(from);
  }

  inline EventLog& operator=(EventLog&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const EventLog& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EventLog* internal_default_instance() {
    return reinterpret_cast<const EventLog*>(
               &_EventLog_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(EventLog* other);
  friend void swap(EventLog& a, EventLog& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EventLog* New() const PROTOBUF_FINAL { return New(NULL); }

  EventLog* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const EventLog& from);
  void MergeFrom(const EventLog& from);
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
  void InternalSwap(EventLog* other);
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

  typedef EventLog_Log Log;

  // accessors -------------------------------------------------------

  // repeated .aspia.proto.EventLog.Log log = 1;
  int log_size() const;
  void clear_log();
  static const int kLogFieldNumber = 1;
  const ::aspia::proto::EventLog_Log& log(int index) const;
  ::aspia::proto::EventLog_Log* mutable_log(int index);
  ::aspia::proto::EventLog_Log* add_log();
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::EventLog_Log >*
      mutable_log();
  const ::google::protobuf::RepeatedPtrField< ::aspia::proto::EventLog_Log >&
      log() const;

  // @@protoc_insertion_point(class_scope:aspia.proto.EventLog)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::EventLog_Log > log_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5feventlog_2eproto::TableStruct;
  friend void ::protobuf_category_5feventlog_2eproto::InitDefaultsEventLogImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EventLog_Log_Item

// .aspia.proto.EventLog.Log.Level level = 1;
inline void EventLog_Log_Item::clear_level() {
  level_ = 0;
}
inline ::aspia::proto::EventLog_Log_Level EventLog_Log_Item::level() const {
  // @@protoc_insertion_point(field_get:aspia.proto.EventLog.Log.Item.level)
  return static_cast< ::aspia::proto::EventLog_Log_Level >(level_);
}
inline void EventLog_Log_Item::set_level(::aspia::proto::EventLog_Log_Level value) {
  
  level_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.EventLog.Log.Item.level)
}

// int64 time = 2;
inline void EventLog_Log_Item::clear_time() {
  time_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 EventLog_Log_Item::time() const {
  // @@protoc_insertion_point(field_get:aspia.proto.EventLog.Log.Item.time)
  return time_;
}
inline void EventLog_Log_Item::set_time(::google::protobuf::int64 value) {
  
  time_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.EventLog.Log.Item.time)
}

// uint32 category = 3;
inline void EventLog_Log_Item::clear_category() {
  category_ = 0u;
}
inline ::google::protobuf::uint32 EventLog_Log_Item::category() const {
  // @@protoc_insertion_point(field_get:aspia.proto.EventLog.Log.Item.category)
  return category_;
}
inline void EventLog_Log_Item::set_category(::google::protobuf::uint32 value) {
  
  category_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.EventLog.Log.Item.category)
}

// uint32 event_id = 4;
inline void EventLog_Log_Item::clear_event_id() {
  event_id_ = 0u;
}
inline ::google::protobuf::uint32 EventLog_Log_Item::event_id() const {
  // @@protoc_insertion_point(field_get:aspia.proto.EventLog.Log.Item.event_id)
  return event_id_;
}
inline void EventLog_Log_Item::set_event_id(::google::protobuf::uint32 value) {
  
  event_id_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.EventLog.Log.Item.event_id)
}

// string source = 5;
inline void EventLog_Log_Item::clear_source() {
  source_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EventLog_Log_Item::source() const {
  // @@protoc_insertion_point(field_get:aspia.proto.EventLog.Log.Item.source)
  return source_.GetNoArena();
}
inline void EventLog_Log_Item::set_source(const ::std::string& value) {
  
  source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.EventLog.Log.Item.source)
}
#if LANG_CXX11
inline void EventLog_Log_Item::set_source(::std::string&& value) {
  
  source_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.EventLog.Log.Item.source)
}
#endif
inline void EventLog_Log_Item::set_source(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.EventLog.Log.Item.source)
}
inline void EventLog_Log_Item::set_source(const char* value, size_t size) {
  
  source_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.EventLog.Log.Item.source)
}
inline ::std::string* EventLog_Log_Item::mutable_source() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.EventLog.Log.Item.source)
  return source_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EventLog_Log_Item::release_source() {
  // @@protoc_insertion_point(field_release:aspia.proto.EventLog.Log.Item.source)
  
  return source_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EventLog_Log_Item::set_allocated_source(::std::string* source) {
  if (source != NULL) {
    
  } else {
    
  }
  source_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), source);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.EventLog.Log.Item.source)
}

// string description = 6;
inline void EventLog_Log_Item::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EventLog_Log_Item::description() const {
  // @@protoc_insertion_point(field_get:aspia.proto.EventLog.Log.Item.description)
  return description_.GetNoArena();
}
inline void EventLog_Log_Item::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.EventLog.Log.Item.description)
}
#if LANG_CXX11
inline void EventLog_Log_Item::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.EventLog.Log.Item.description)
}
#endif
inline void EventLog_Log_Item::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.EventLog.Log.Item.description)
}
inline void EventLog_Log_Item::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.EventLog.Log.Item.description)
}
inline ::std::string* EventLog_Log_Item::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.EventLog.Log.Item.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EventLog_Log_Item::release_description() {
  // @@protoc_insertion_point(field_release:aspia.proto.EventLog.Log.Item.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EventLog_Log_Item::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.EventLog.Log.Item.description)
}

// -------------------------------------------------------------------

// EventLog_Log

// .aspia.proto.EventLog.Log.Type type = 1;
inline void EventLog_Log::clear_type() {
  type_ = 0;
}
inline ::aspia::proto::EventLog_Log_Type EventLog_Log::type() const {
  // @@protoc_insertion_point(field_get:aspia.proto.EventLog.Log.type)
  return static_cast< ::aspia::proto::EventLog_Log_Type >(type_);
}
inline void EventLog_Log::set_type(::aspia::proto::EventLog_Log_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.EventLog.Log.type)
}

// repeated .aspia.proto.EventLog.Log.Item item = 2;
inline int EventLog_Log::item_size() const {
  return item_.size();
}
inline void EventLog_Log::clear_item() {
  item_.Clear();
}
inline const ::aspia::proto::EventLog_Log_Item& EventLog_Log::item(int index) const {
  // @@protoc_insertion_point(field_get:aspia.proto.EventLog.Log.item)
  return item_.Get(index);
}
inline ::aspia::proto::EventLog_Log_Item* EventLog_Log::mutable_item(int index) {
  // @@protoc_insertion_point(field_mutable:aspia.proto.EventLog.Log.item)
  return item_.Mutable(index);
}
inline ::aspia::proto::EventLog_Log_Item* EventLog_Log::add_item() {
  // @@protoc_insertion_point(field_add:aspia.proto.EventLog.Log.item)
  return item_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::aspia::proto::EventLog_Log_Item >*
EventLog_Log::mutable_item() {
  // @@protoc_insertion_point(field_mutable_list:aspia.proto.EventLog.Log.item)
  return &item_;
}
inline const ::google::protobuf::RepeatedPtrField< ::aspia::proto::EventLog_Log_Item >&
EventLog_Log::item() const {
  // @@protoc_insertion_point(field_list:aspia.proto.EventLog.Log.item)
  return item_;
}

// -------------------------------------------------------------------

// EventLog

// repeated .aspia.proto.EventLog.Log log = 1;
inline int EventLog::log_size() const {
  return log_.size();
}
inline void EventLog::clear_log() {
  log_.Clear();
}
inline const ::aspia::proto::EventLog_Log& EventLog::log(int index) const {
  // @@protoc_insertion_point(field_get:aspia.proto.EventLog.log)
  return log_.Get(index);
}
inline ::aspia::proto::EventLog_Log* EventLog::mutable_log(int index) {
  // @@protoc_insertion_point(field_mutable:aspia.proto.EventLog.log)
  return log_.Mutable(index);
}
inline ::aspia::proto::EventLog_Log* EventLog::add_log() {
  // @@protoc_insertion_point(field_add:aspia.proto.EventLog.log)
  return log_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::aspia::proto::EventLog_Log >*
EventLog::mutable_log() {
  // @@protoc_insertion_point(field_mutable_list:aspia.proto.EventLog.log)
  return &log_;
}
inline const ::google::protobuf::RepeatedPtrField< ::aspia::proto::EventLog_Log >&
EventLog::log() const {
  // @@protoc_insertion_point(field_list:aspia.proto.EventLog.log)
  return log_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace aspia

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::aspia::proto::EventLog_Log_Type> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::aspia::proto::EventLog_Log_Level> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_category_5feventlog_2eproto__INCLUDED
