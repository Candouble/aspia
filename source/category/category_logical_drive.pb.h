// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_logical_drive.proto

#ifndef PROTOBUF_category_5flogical_5fdrive_2eproto__INCLUDED
#define PROTOBUF_category_5flogical_5fdrive_2eproto__INCLUDED

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

namespace protobuf_category_5flogical_5fdrive_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsLogicalDrive_ItemImpl();
void InitDefaultsLogicalDrive_Item();
void InitDefaultsLogicalDriveImpl();
void InitDefaultsLogicalDrive();
inline void InitDefaults() {
  InitDefaultsLogicalDrive_Item();
  InitDefaultsLogicalDrive();
}
}  // namespace protobuf_category_5flogical_5fdrive_2eproto
namespace aspia {
namespace proto {
class LogicalDrive;
class LogicalDriveDefaultTypeInternal;
extern LogicalDriveDefaultTypeInternal _LogicalDrive_default_instance_;
class LogicalDrive_Item;
class LogicalDrive_ItemDefaultTypeInternal;
extern LogicalDrive_ItemDefaultTypeInternal _LogicalDrive_Item_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace aspia {
namespace proto {

enum LogicalDrive_DriveType {
  LogicalDrive_DriveType_DRIVE_TYPE_UNKNOWN = 0,
  LogicalDrive_DriveType_DRIVE_TYPE_LOCAL = 1,
  LogicalDrive_DriveType_DRIVE_TYPE_REMOVABLE = 2,
  LogicalDrive_DriveType_DRIVE_TYPE_REMOTE = 3,
  LogicalDrive_DriveType_DRIVE_TYPE_CDROM = 4,
  LogicalDrive_DriveType_DRIVE_TYPE_RAM = 5,
  LogicalDrive_DriveType_LogicalDrive_DriveType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  LogicalDrive_DriveType_LogicalDrive_DriveType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool LogicalDrive_DriveType_IsValid(int value);
const LogicalDrive_DriveType LogicalDrive_DriveType_DriveType_MIN = LogicalDrive_DriveType_DRIVE_TYPE_UNKNOWN;
const LogicalDrive_DriveType LogicalDrive_DriveType_DriveType_MAX = LogicalDrive_DriveType_DRIVE_TYPE_RAM;
const int LogicalDrive_DriveType_DriveType_ARRAYSIZE = LogicalDrive_DriveType_DriveType_MAX + 1;

// ===================================================================

class LogicalDrive_Item : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.LogicalDrive.Item) */ {
 public:
  LogicalDrive_Item();
  virtual ~LogicalDrive_Item();

  LogicalDrive_Item(const LogicalDrive_Item& from);

  inline LogicalDrive_Item& operator=(const LogicalDrive_Item& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LogicalDrive_Item(LogicalDrive_Item&& from) noexcept
    : LogicalDrive_Item() {
    *this = ::std::move(from);
  }

  inline LogicalDrive_Item& operator=(LogicalDrive_Item&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const LogicalDrive_Item& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogicalDrive_Item* internal_default_instance() {
    return reinterpret_cast<const LogicalDrive_Item*>(
               &_LogicalDrive_Item_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(LogicalDrive_Item* other);
  friend void swap(LogicalDrive_Item& a, LogicalDrive_Item& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LogicalDrive_Item* New() const PROTOBUF_FINAL { return New(NULL); }

  LogicalDrive_Item* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const LogicalDrive_Item& from);
  void MergeFrom(const LogicalDrive_Item& from);
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
  void InternalSwap(LogicalDrive_Item* other);
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

  // string drive_letter = 1;
  void clear_drive_letter();
  static const int kDriveLetterFieldNumber = 1;
  const ::std::string& drive_letter() const;
  void set_drive_letter(const ::std::string& value);
  #if LANG_CXX11
  void set_drive_letter(::std::string&& value);
  #endif
  void set_drive_letter(const char* value);
  void set_drive_letter(const char* value, size_t size);
  ::std::string* mutable_drive_letter();
  ::std::string* release_drive_letter();
  void set_allocated_drive_letter(::std::string* drive_letter);

  // string drive_label = 2;
  void clear_drive_label();
  static const int kDriveLabelFieldNumber = 2;
  const ::std::string& drive_label() const;
  void set_drive_label(const ::std::string& value);
  #if LANG_CXX11
  void set_drive_label(::std::string&& value);
  #endif
  void set_drive_label(const char* value);
  void set_drive_label(const char* value, size_t size);
  ::std::string* mutable_drive_label();
  ::std::string* release_drive_label();
  void set_allocated_drive_label(::std::string* drive_label);

  // string file_system = 4;
  void clear_file_system();
  static const int kFileSystemFieldNumber = 4;
  const ::std::string& file_system() const;
  void set_file_system(const ::std::string& value);
  #if LANG_CXX11
  void set_file_system(::std::string&& value);
  #endif
  void set_file_system(const char* value);
  void set_file_system(const char* value, size_t size);
  ::std::string* mutable_file_system();
  ::std::string* release_file_system();
  void set_allocated_file_system(::std::string* file_system);

  // string volume_serial = 7;
  void clear_volume_serial();
  static const int kVolumeSerialFieldNumber = 7;
  const ::std::string& volume_serial() const;
  void set_volume_serial(const ::std::string& value);
  #if LANG_CXX11
  void set_volume_serial(::std::string&& value);
  #endif
  void set_volume_serial(const char* value);
  void set_volume_serial(const char* value, size_t size);
  ::std::string* mutable_volume_serial();
  ::std::string* release_volume_serial();
  void set_allocated_volume_serial(::std::string* volume_serial);

  // uint64 total_size = 5;
  void clear_total_size();
  static const int kTotalSizeFieldNumber = 5;
  ::google::protobuf::uint64 total_size() const;
  void set_total_size(::google::protobuf::uint64 value);

  // uint64 free_space = 6;
  void clear_free_space();
  static const int kFreeSpaceFieldNumber = 6;
  ::google::protobuf::uint64 free_space() const;
  void set_free_space(::google::protobuf::uint64 value);

  // .aspia.proto.LogicalDrive.DriveType drive_type = 3;
  void clear_drive_type();
  static const int kDriveTypeFieldNumber = 3;
  ::aspia::proto::LogicalDrive_DriveType drive_type() const;
  void set_drive_type(::aspia::proto::LogicalDrive_DriveType value);

  // @@protoc_insertion_point(class_scope:aspia.proto.LogicalDrive.Item)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr drive_letter_;
  ::google::protobuf::internal::ArenaStringPtr drive_label_;
  ::google::protobuf::internal::ArenaStringPtr file_system_;
  ::google::protobuf::internal::ArenaStringPtr volume_serial_;
  ::google::protobuf::uint64 total_size_;
  ::google::protobuf::uint64 free_space_;
  int drive_type_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5flogical_5fdrive_2eproto::TableStruct;
  friend void ::protobuf_category_5flogical_5fdrive_2eproto::InitDefaultsLogicalDrive_ItemImpl();
};
// -------------------------------------------------------------------

class LogicalDrive : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.LogicalDrive) */ {
 public:
  LogicalDrive();
  virtual ~LogicalDrive();

  LogicalDrive(const LogicalDrive& from);

  inline LogicalDrive& operator=(const LogicalDrive& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LogicalDrive(LogicalDrive&& from) noexcept
    : LogicalDrive() {
    *this = ::std::move(from);
  }

  inline LogicalDrive& operator=(LogicalDrive&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const LogicalDrive& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogicalDrive* internal_default_instance() {
    return reinterpret_cast<const LogicalDrive*>(
               &_LogicalDrive_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(LogicalDrive* other);
  friend void swap(LogicalDrive& a, LogicalDrive& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LogicalDrive* New() const PROTOBUF_FINAL { return New(NULL); }

  LogicalDrive* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const LogicalDrive& from);
  void MergeFrom(const LogicalDrive& from);
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
  void InternalSwap(LogicalDrive* other);
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

  typedef LogicalDrive_Item Item;

  typedef LogicalDrive_DriveType DriveType;
  static const DriveType DRIVE_TYPE_UNKNOWN =
    LogicalDrive_DriveType_DRIVE_TYPE_UNKNOWN;
  static const DriveType DRIVE_TYPE_LOCAL =
    LogicalDrive_DriveType_DRIVE_TYPE_LOCAL;
  static const DriveType DRIVE_TYPE_REMOVABLE =
    LogicalDrive_DriveType_DRIVE_TYPE_REMOVABLE;
  static const DriveType DRIVE_TYPE_REMOTE =
    LogicalDrive_DriveType_DRIVE_TYPE_REMOTE;
  static const DriveType DRIVE_TYPE_CDROM =
    LogicalDrive_DriveType_DRIVE_TYPE_CDROM;
  static const DriveType DRIVE_TYPE_RAM =
    LogicalDrive_DriveType_DRIVE_TYPE_RAM;
  static inline bool DriveType_IsValid(int value) {
    return LogicalDrive_DriveType_IsValid(value);
  }
  static const DriveType DriveType_MIN =
    LogicalDrive_DriveType_DriveType_MIN;
  static const DriveType DriveType_MAX =
    LogicalDrive_DriveType_DriveType_MAX;
  static const int DriveType_ARRAYSIZE =
    LogicalDrive_DriveType_DriveType_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // repeated .aspia.proto.LogicalDrive.Item item = 1;
  int item_size() const;
  void clear_item();
  static const int kItemFieldNumber = 1;
  const ::aspia::proto::LogicalDrive_Item& item(int index) const;
  ::aspia::proto::LogicalDrive_Item* mutable_item(int index);
  ::aspia::proto::LogicalDrive_Item* add_item();
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::LogicalDrive_Item >*
      mutable_item();
  const ::google::protobuf::RepeatedPtrField< ::aspia::proto::LogicalDrive_Item >&
      item() const;

  // @@protoc_insertion_point(class_scope:aspia.proto.LogicalDrive)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::LogicalDrive_Item > item_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5flogical_5fdrive_2eproto::TableStruct;
  friend void ::protobuf_category_5flogical_5fdrive_2eproto::InitDefaultsLogicalDriveImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogicalDrive_Item

// string drive_letter = 1;
inline void LogicalDrive_Item::clear_drive_letter() {
  drive_letter_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogicalDrive_Item::drive_letter() const {
  // @@protoc_insertion_point(field_get:aspia.proto.LogicalDrive.Item.drive_letter)
  return drive_letter_.GetNoArena();
}
inline void LogicalDrive_Item::set_drive_letter(const ::std::string& value) {
  
  drive_letter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.LogicalDrive.Item.drive_letter)
}
#if LANG_CXX11
inline void LogicalDrive_Item::set_drive_letter(::std::string&& value) {
  
  drive_letter_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.LogicalDrive.Item.drive_letter)
}
#endif
inline void LogicalDrive_Item::set_drive_letter(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  drive_letter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.LogicalDrive.Item.drive_letter)
}
inline void LogicalDrive_Item::set_drive_letter(const char* value, size_t size) {
  
  drive_letter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.LogicalDrive.Item.drive_letter)
}
inline ::std::string* LogicalDrive_Item::mutable_drive_letter() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.LogicalDrive.Item.drive_letter)
  return drive_letter_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogicalDrive_Item::release_drive_letter() {
  // @@protoc_insertion_point(field_release:aspia.proto.LogicalDrive.Item.drive_letter)
  
  return drive_letter_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogicalDrive_Item::set_allocated_drive_letter(::std::string* drive_letter) {
  if (drive_letter != NULL) {
    
  } else {
    
  }
  drive_letter_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), drive_letter);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.LogicalDrive.Item.drive_letter)
}

// string drive_label = 2;
inline void LogicalDrive_Item::clear_drive_label() {
  drive_label_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogicalDrive_Item::drive_label() const {
  // @@protoc_insertion_point(field_get:aspia.proto.LogicalDrive.Item.drive_label)
  return drive_label_.GetNoArena();
}
inline void LogicalDrive_Item::set_drive_label(const ::std::string& value) {
  
  drive_label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.LogicalDrive.Item.drive_label)
}
#if LANG_CXX11
inline void LogicalDrive_Item::set_drive_label(::std::string&& value) {
  
  drive_label_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.LogicalDrive.Item.drive_label)
}
#endif
inline void LogicalDrive_Item::set_drive_label(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  drive_label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.LogicalDrive.Item.drive_label)
}
inline void LogicalDrive_Item::set_drive_label(const char* value, size_t size) {
  
  drive_label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.LogicalDrive.Item.drive_label)
}
inline ::std::string* LogicalDrive_Item::mutable_drive_label() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.LogicalDrive.Item.drive_label)
  return drive_label_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogicalDrive_Item::release_drive_label() {
  // @@protoc_insertion_point(field_release:aspia.proto.LogicalDrive.Item.drive_label)
  
  return drive_label_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogicalDrive_Item::set_allocated_drive_label(::std::string* drive_label) {
  if (drive_label != NULL) {
    
  } else {
    
  }
  drive_label_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), drive_label);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.LogicalDrive.Item.drive_label)
}

// .aspia.proto.LogicalDrive.DriveType drive_type = 3;
inline void LogicalDrive_Item::clear_drive_type() {
  drive_type_ = 0;
}
inline ::aspia::proto::LogicalDrive_DriveType LogicalDrive_Item::drive_type() const {
  // @@protoc_insertion_point(field_get:aspia.proto.LogicalDrive.Item.drive_type)
  return static_cast< ::aspia::proto::LogicalDrive_DriveType >(drive_type_);
}
inline void LogicalDrive_Item::set_drive_type(::aspia::proto::LogicalDrive_DriveType value) {
  
  drive_type_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.LogicalDrive.Item.drive_type)
}

// string file_system = 4;
inline void LogicalDrive_Item::clear_file_system() {
  file_system_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogicalDrive_Item::file_system() const {
  // @@protoc_insertion_point(field_get:aspia.proto.LogicalDrive.Item.file_system)
  return file_system_.GetNoArena();
}
inline void LogicalDrive_Item::set_file_system(const ::std::string& value) {
  
  file_system_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.LogicalDrive.Item.file_system)
}
#if LANG_CXX11
inline void LogicalDrive_Item::set_file_system(::std::string&& value) {
  
  file_system_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.LogicalDrive.Item.file_system)
}
#endif
inline void LogicalDrive_Item::set_file_system(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  file_system_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.LogicalDrive.Item.file_system)
}
inline void LogicalDrive_Item::set_file_system(const char* value, size_t size) {
  
  file_system_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.LogicalDrive.Item.file_system)
}
inline ::std::string* LogicalDrive_Item::mutable_file_system() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.LogicalDrive.Item.file_system)
  return file_system_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogicalDrive_Item::release_file_system() {
  // @@protoc_insertion_point(field_release:aspia.proto.LogicalDrive.Item.file_system)
  
  return file_system_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogicalDrive_Item::set_allocated_file_system(::std::string* file_system) {
  if (file_system != NULL) {
    
  } else {
    
  }
  file_system_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), file_system);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.LogicalDrive.Item.file_system)
}

// uint64 total_size = 5;
inline void LogicalDrive_Item::clear_total_size() {
  total_size_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 LogicalDrive_Item::total_size() const {
  // @@protoc_insertion_point(field_get:aspia.proto.LogicalDrive.Item.total_size)
  return total_size_;
}
inline void LogicalDrive_Item::set_total_size(::google::protobuf::uint64 value) {
  
  total_size_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.LogicalDrive.Item.total_size)
}

// uint64 free_space = 6;
inline void LogicalDrive_Item::clear_free_space() {
  free_space_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 LogicalDrive_Item::free_space() const {
  // @@protoc_insertion_point(field_get:aspia.proto.LogicalDrive.Item.free_space)
  return free_space_;
}
inline void LogicalDrive_Item::set_free_space(::google::protobuf::uint64 value) {
  
  free_space_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.LogicalDrive.Item.free_space)
}

// string volume_serial = 7;
inline void LogicalDrive_Item::clear_volume_serial() {
  volume_serial_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogicalDrive_Item::volume_serial() const {
  // @@protoc_insertion_point(field_get:aspia.proto.LogicalDrive.Item.volume_serial)
  return volume_serial_.GetNoArena();
}
inline void LogicalDrive_Item::set_volume_serial(const ::std::string& value) {
  
  volume_serial_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.LogicalDrive.Item.volume_serial)
}
#if LANG_CXX11
inline void LogicalDrive_Item::set_volume_serial(::std::string&& value) {
  
  volume_serial_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.LogicalDrive.Item.volume_serial)
}
#endif
inline void LogicalDrive_Item::set_volume_serial(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  volume_serial_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.LogicalDrive.Item.volume_serial)
}
inline void LogicalDrive_Item::set_volume_serial(const char* value, size_t size) {
  
  volume_serial_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.LogicalDrive.Item.volume_serial)
}
inline ::std::string* LogicalDrive_Item::mutable_volume_serial() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.LogicalDrive.Item.volume_serial)
  return volume_serial_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogicalDrive_Item::release_volume_serial() {
  // @@protoc_insertion_point(field_release:aspia.proto.LogicalDrive.Item.volume_serial)
  
  return volume_serial_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogicalDrive_Item::set_allocated_volume_serial(::std::string* volume_serial) {
  if (volume_serial != NULL) {
    
  } else {
    
  }
  volume_serial_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), volume_serial);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.LogicalDrive.Item.volume_serial)
}

// -------------------------------------------------------------------

// LogicalDrive

// repeated .aspia.proto.LogicalDrive.Item item = 1;
inline int LogicalDrive::item_size() const {
  return item_.size();
}
inline void LogicalDrive::clear_item() {
  item_.Clear();
}
inline const ::aspia::proto::LogicalDrive_Item& LogicalDrive::item(int index) const {
  // @@protoc_insertion_point(field_get:aspia.proto.LogicalDrive.item)
  return item_.Get(index);
}
inline ::aspia::proto::LogicalDrive_Item* LogicalDrive::mutable_item(int index) {
  // @@protoc_insertion_point(field_mutable:aspia.proto.LogicalDrive.item)
  return item_.Mutable(index);
}
inline ::aspia::proto::LogicalDrive_Item* LogicalDrive::add_item() {
  // @@protoc_insertion_point(field_add:aspia.proto.LogicalDrive.item)
  return item_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::aspia::proto::LogicalDrive_Item >*
LogicalDrive::mutable_item() {
  // @@protoc_insertion_point(field_mutable_list:aspia.proto.LogicalDrive.item)
  return &item_;
}
inline const ::google::protobuf::RepeatedPtrField< ::aspia::proto::LogicalDrive_Item >&
LogicalDrive::item() const {
  // @@protoc_insertion_point(field_list:aspia.proto.LogicalDrive.item)
  return item_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace aspia

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::aspia::proto::LogicalDrive_DriveType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_category_5flogical_5fdrive_2eproto__INCLUDED
