// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_smart.proto

#ifndef PROTOBUF_category_5fsmart_2eproto__INCLUDED
#define PROTOBUF_category_5fsmart_2eproto__INCLUDED

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

namespace protobuf_category_5fsmart_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsSMART_AttributeImpl();
void InitDefaultsSMART_Attribute();
void InitDefaultsSMART_DriveImpl();
void InitDefaultsSMART_Drive();
void InitDefaultsSMARTImpl();
void InitDefaultsSMART();
inline void InitDefaults() {
  InitDefaultsSMART_Attribute();
  InitDefaultsSMART_Drive();
  InitDefaultsSMART();
}
}  // namespace protobuf_category_5fsmart_2eproto
namespace aspia {
namespace proto {
class SMART;
class SMARTDefaultTypeInternal;
extern SMARTDefaultTypeInternal _SMART_default_instance_;
class SMART_Attribute;
class SMART_AttributeDefaultTypeInternal;
extern SMART_AttributeDefaultTypeInternal _SMART_Attribute_default_instance_;
class SMART_Drive;
class SMART_DriveDefaultTypeInternal;
extern SMART_DriveDefaultTypeInternal _SMART_Drive_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace aspia {
namespace proto {

enum SMART_Attribute_Flags {
  SMART_Attribute_Flags_FLAG_NONE = 0,
  SMART_Attribute_Flags_FLAG_PRE_FAILURE = 1,
  SMART_Attribute_Flags_SMART_Attribute_Flags_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  SMART_Attribute_Flags_SMART_Attribute_Flags_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool SMART_Attribute_Flags_IsValid(int value);
const SMART_Attribute_Flags SMART_Attribute_Flags_Flags_MIN = SMART_Attribute_Flags_FLAG_NONE;
const SMART_Attribute_Flags SMART_Attribute_Flags_Flags_MAX = SMART_Attribute_Flags_FLAG_PRE_FAILURE;
const int SMART_Attribute_Flags_Flags_ARRAYSIZE = SMART_Attribute_Flags_Flags_MAX + 1;

// ===================================================================

class SMART_Attribute : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.SMART.Attribute) */ {
 public:
  SMART_Attribute();
  virtual ~SMART_Attribute();

  SMART_Attribute(const SMART_Attribute& from);

  inline SMART_Attribute& operator=(const SMART_Attribute& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SMART_Attribute(SMART_Attribute&& from) noexcept
    : SMART_Attribute() {
    *this = ::std::move(from);
  }

  inline SMART_Attribute& operator=(SMART_Attribute&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const SMART_Attribute& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SMART_Attribute* internal_default_instance() {
    return reinterpret_cast<const SMART_Attribute*>(
               &_SMART_Attribute_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SMART_Attribute* other);
  friend void swap(SMART_Attribute& a, SMART_Attribute& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SMART_Attribute* New() const PROTOBUF_FINAL { return New(NULL); }

  SMART_Attribute* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const SMART_Attribute& from);
  void MergeFrom(const SMART_Attribute& from);
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
  void InternalSwap(SMART_Attribute* other);
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

  typedef SMART_Attribute_Flags Flags;
  static const Flags FLAG_NONE =
    SMART_Attribute_Flags_FLAG_NONE;
  static const Flags FLAG_PRE_FAILURE =
    SMART_Attribute_Flags_FLAG_PRE_FAILURE;
  static inline bool Flags_IsValid(int value) {
    return SMART_Attribute_Flags_IsValid(value);
  }
  static const Flags Flags_MIN =
    SMART_Attribute_Flags_Flags_MIN;
  static const Flags Flags_MAX =
    SMART_Attribute_Flags_Flags_MAX;
  static const int Flags_ARRAYSIZE =
    SMART_Attribute_Flags_Flags_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // uint32 flags = 1;
  void clear_flags();
  static const int kFlagsFieldNumber = 1;
  ::google::protobuf::uint32 flags() const;
  void set_flags(::google::protobuf::uint32 value);

  // uint32 id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // uint32 value = 3;
  void clear_value();
  static const int kValueFieldNumber = 3;
  ::google::protobuf::uint32 value() const;
  void set_value(::google::protobuf::uint32 value);

  // uint32 worst_value = 4;
  void clear_worst_value();
  static const int kWorstValueFieldNumber = 4;
  ::google::protobuf::uint32 worst_value() const;
  void set_worst_value(::google::protobuf::uint32 value);

  // uint64 raw = 6;
  void clear_raw();
  static const int kRawFieldNumber = 6;
  ::google::protobuf::uint64 raw() const;
  void set_raw(::google::protobuf::uint64 value);

  // uint32 threshold = 5;
  void clear_threshold();
  static const int kThresholdFieldNumber = 5;
  ::google::protobuf::uint32 threshold() const;
  void set_threshold(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:aspia.proto.SMART.Attribute)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::uint32 flags_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 value_;
  ::google::protobuf::uint32 worst_value_;
  ::google::protobuf::uint64 raw_;
  ::google::protobuf::uint32 threshold_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fsmart_2eproto::TableStruct;
  friend void ::protobuf_category_5fsmart_2eproto::InitDefaultsSMART_AttributeImpl();
};
// -------------------------------------------------------------------

class SMART_Drive : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.SMART.Drive) */ {
 public:
  SMART_Drive();
  virtual ~SMART_Drive();

  SMART_Drive(const SMART_Drive& from);

  inline SMART_Drive& operator=(const SMART_Drive& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SMART_Drive(SMART_Drive&& from) noexcept
    : SMART_Drive() {
    *this = ::std::move(from);
  }

  inline SMART_Drive& operator=(SMART_Drive&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const SMART_Drive& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SMART_Drive* internal_default_instance() {
    return reinterpret_cast<const SMART_Drive*>(
               &_SMART_Drive_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SMART_Drive* other);
  friend void swap(SMART_Drive& a, SMART_Drive& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SMART_Drive* New() const PROTOBUF_FINAL { return New(NULL); }

  SMART_Drive* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const SMART_Drive& from);
  void MergeFrom(const SMART_Drive& from);
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
  void InternalSwap(SMART_Drive* other);
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

  // repeated .aspia.proto.SMART.Attribute attribute = 2;
  int attribute_size() const;
  void clear_attribute();
  static const int kAttributeFieldNumber = 2;
  const ::aspia::proto::SMART_Attribute& attribute(int index) const;
  ::aspia::proto::SMART_Attribute* mutable_attribute(int index);
  ::aspia::proto::SMART_Attribute* add_attribute();
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::SMART_Attribute >*
      mutable_attribute();
  const ::google::protobuf::RepeatedPtrField< ::aspia::proto::SMART_Attribute >&
      attribute() const;

  // string model_number = 1;
  void clear_model_number();
  static const int kModelNumberFieldNumber = 1;
  const ::std::string& model_number() const;
  void set_model_number(const ::std::string& value);
  #if LANG_CXX11
  void set_model_number(::std::string&& value);
  #endif
  void set_model_number(const char* value);
  void set_model_number(const char* value, size_t size);
  ::std::string* mutable_model_number();
  ::std::string* release_model_number();
  void set_allocated_model_number(::std::string* model_number);

  // @@protoc_insertion_point(class_scope:aspia.proto.SMART.Drive)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::SMART_Attribute > attribute_;
  ::google::protobuf::internal::ArenaStringPtr model_number_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fsmart_2eproto::TableStruct;
  friend void ::protobuf_category_5fsmart_2eproto::InitDefaultsSMART_DriveImpl();
};
// -------------------------------------------------------------------

class SMART : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.SMART) */ {
 public:
  SMART();
  virtual ~SMART();

  SMART(const SMART& from);

  inline SMART& operator=(const SMART& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SMART(SMART&& from) noexcept
    : SMART() {
    *this = ::std::move(from);
  }

  inline SMART& operator=(SMART&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const SMART& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SMART* internal_default_instance() {
    return reinterpret_cast<const SMART*>(
               &_SMART_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(SMART* other);
  friend void swap(SMART& a, SMART& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SMART* New() const PROTOBUF_FINAL { return New(NULL); }

  SMART* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const SMART& from);
  void MergeFrom(const SMART& from);
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
  void InternalSwap(SMART* other);
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

  typedef SMART_Attribute Attribute;
  typedef SMART_Drive Drive;

  // accessors -------------------------------------------------------

  // repeated .aspia.proto.SMART.Drive drive = 1;
  int drive_size() const;
  void clear_drive();
  static const int kDriveFieldNumber = 1;
  const ::aspia::proto::SMART_Drive& drive(int index) const;
  ::aspia::proto::SMART_Drive* mutable_drive(int index);
  ::aspia::proto::SMART_Drive* add_drive();
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::SMART_Drive >*
      mutable_drive();
  const ::google::protobuf::RepeatedPtrField< ::aspia::proto::SMART_Drive >&
      drive() const;

  // @@protoc_insertion_point(class_scope:aspia.proto.SMART)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::SMART_Drive > drive_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fsmart_2eproto::TableStruct;
  friend void ::protobuf_category_5fsmart_2eproto::InitDefaultsSMARTImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SMART_Attribute

// uint32 flags = 1;
inline void SMART_Attribute::clear_flags() {
  flags_ = 0u;
}
inline ::google::protobuf::uint32 SMART_Attribute::flags() const {
  // @@protoc_insertion_point(field_get:aspia.proto.SMART.Attribute.flags)
  return flags_;
}
inline void SMART_Attribute::set_flags(::google::protobuf::uint32 value) {
  
  flags_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.SMART.Attribute.flags)
}

// uint32 id = 2;
inline void SMART_Attribute::clear_id() {
  id_ = 0u;
}
inline ::google::protobuf::uint32 SMART_Attribute::id() const {
  // @@protoc_insertion_point(field_get:aspia.proto.SMART.Attribute.id)
  return id_;
}
inline void SMART_Attribute::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.SMART.Attribute.id)
}

// uint32 value = 3;
inline void SMART_Attribute::clear_value() {
  value_ = 0u;
}
inline ::google::protobuf::uint32 SMART_Attribute::value() const {
  // @@protoc_insertion_point(field_get:aspia.proto.SMART.Attribute.value)
  return value_;
}
inline void SMART_Attribute::set_value(::google::protobuf::uint32 value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.SMART.Attribute.value)
}

// uint32 worst_value = 4;
inline void SMART_Attribute::clear_worst_value() {
  worst_value_ = 0u;
}
inline ::google::protobuf::uint32 SMART_Attribute::worst_value() const {
  // @@protoc_insertion_point(field_get:aspia.proto.SMART.Attribute.worst_value)
  return worst_value_;
}
inline void SMART_Attribute::set_worst_value(::google::protobuf::uint32 value) {
  
  worst_value_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.SMART.Attribute.worst_value)
}

// uint32 threshold = 5;
inline void SMART_Attribute::clear_threshold() {
  threshold_ = 0u;
}
inline ::google::protobuf::uint32 SMART_Attribute::threshold() const {
  // @@protoc_insertion_point(field_get:aspia.proto.SMART.Attribute.threshold)
  return threshold_;
}
inline void SMART_Attribute::set_threshold(::google::protobuf::uint32 value) {
  
  threshold_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.SMART.Attribute.threshold)
}

// uint64 raw = 6;
inline void SMART_Attribute::clear_raw() {
  raw_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SMART_Attribute::raw() const {
  // @@protoc_insertion_point(field_get:aspia.proto.SMART.Attribute.raw)
  return raw_;
}
inline void SMART_Attribute::set_raw(::google::protobuf::uint64 value) {
  
  raw_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.SMART.Attribute.raw)
}

// -------------------------------------------------------------------

// SMART_Drive

// string model_number = 1;
inline void SMART_Drive::clear_model_number() {
  model_number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SMART_Drive::model_number() const {
  // @@protoc_insertion_point(field_get:aspia.proto.SMART.Drive.model_number)
  return model_number_.GetNoArena();
}
inline void SMART_Drive::set_model_number(const ::std::string& value) {
  
  model_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.SMART.Drive.model_number)
}
#if LANG_CXX11
inline void SMART_Drive::set_model_number(::std::string&& value) {
  
  model_number_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.SMART.Drive.model_number)
}
#endif
inline void SMART_Drive::set_model_number(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  model_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.SMART.Drive.model_number)
}
inline void SMART_Drive::set_model_number(const char* value, size_t size) {
  
  model_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.SMART.Drive.model_number)
}
inline ::std::string* SMART_Drive::mutable_model_number() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.SMART.Drive.model_number)
  return model_number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SMART_Drive::release_model_number() {
  // @@protoc_insertion_point(field_release:aspia.proto.SMART.Drive.model_number)
  
  return model_number_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SMART_Drive::set_allocated_model_number(::std::string* model_number) {
  if (model_number != NULL) {
    
  } else {
    
  }
  model_number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), model_number);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.SMART.Drive.model_number)
}

// repeated .aspia.proto.SMART.Attribute attribute = 2;
inline int SMART_Drive::attribute_size() const {
  return attribute_.size();
}
inline void SMART_Drive::clear_attribute() {
  attribute_.Clear();
}
inline const ::aspia::proto::SMART_Attribute& SMART_Drive::attribute(int index) const {
  // @@protoc_insertion_point(field_get:aspia.proto.SMART.Drive.attribute)
  return attribute_.Get(index);
}
inline ::aspia::proto::SMART_Attribute* SMART_Drive::mutable_attribute(int index) {
  // @@protoc_insertion_point(field_mutable:aspia.proto.SMART.Drive.attribute)
  return attribute_.Mutable(index);
}
inline ::aspia::proto::SMART_Attribute* SMART_Drive::add_attribute() {
  // @@protoc_insertion_point(field_add:aspia.proto.SMART.Drive.attribute)
  return attribute_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::aspia::proto::SMART_Attribute >*
SMART_Drive::mutable_attribute() {
  // @@protoc_insertion_point(field_mutable_list:aspia.proto.SMART.Drive.attribute)
  return &attribute_;
}
inline const ::google::protobuf::RepeatedPtrField< ::aspia::proto::SMART_Attribute >&
SMART_Drive::attribute() const {
  // @@protoc_insertion_point(field_list:aspia.proto.SMART.Drive.attribute)
  return attribute_;
}

// -------------------------------------------------------------------

// SMART

// repeated .aspia.proto.SMART.Drive drive = 1;
inline int SMART::drive_size() const {
  return drive_.size();
}
inline void SMART::clear_drive() {
  drive_.Clear();
}
inline const ::aspia::proto::SMART_Drive& SMART::drive(int index) const {
  // @@protoc_insertion_point(field_get:aspia.proto.SMART.drive)
  return drive_.Get(index);
}
inline ::aspia::proto::SMART_Drive* SMART::mutable_drive(int index) {
  // @@protoc_insertion_point(field_mutable:aspia.proto.SMART.drive)
  return drive_.Mutable(index);
}
inline ::aspia::proto::SMART_Drive* SMART::add_drive() {
  // @@protoc_insertion_point(field_add:aspia.proto.SMART.drive)
  return drive_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::aspia::proto::SMART_Drive >*
SMART::mutable_drive() {
  // @@protoc_insertion_point(field_mutable_list:aspia.proto.SMART.drive)
  return &drive_;
}
inline const ::google::protobuf::RepeatedPtrField< ::aspia::proto::SMART_Drive >&
SMART::drive() const {
  // @@protoc_insertion_point(field_list:aspia.proto.SMART.drive)
  return drive_;
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

template <> struct is_proto_enum< ::aspia::proto::SMART_Attribute_Flags> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_category_5fsmart_2eproto__INCLUDED
