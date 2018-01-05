// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_environment_variables.proto

#ifndef PROTOBUF_category_5fenvironment_5fvariables_2eproto__INCLUDED
#define PROTOBUF_category_5fenvironment_5fvariables_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace protobuf_category_5fenvironment_5fvariables_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsEnvironmentVariable_ItemImpl();
void InitDefaultsEnvironmentVariable_Item();
void InitDefaultsEnvironmentVariableImpl();
void InitDefaultsEnvironmentVariable();
inline void InitDefaults() {
  InitDefaultsEnvironmentVariable_Item();
  InitDefaultsEnvironmentVariable();
}
}  // namespace protobuf_category_5fenvironment_5fvariables_2eproto
namespace aspia {
namespace proto {
class EnvironmentVariable;
class EnvironmentVariableDefaultTypeInternal;
extern EnvironmentVariableDefaultTypeInternal _EnvironmentVariable_default_instance_;
class EnvironmentVariable_Item;
class EnvironmentVariable_ItemDefaultTypeInternal;
extern EnvironmentVariable_ItemDefaultTypeInternal _EnvironmentVariable_Item_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace aspia {
namespace proto {

// ===================================================================

class EnvironmentVariable_Item : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.EnvironmentVariable.Item) */ {
 public:
  EnvironmentVariable_Item();
  virtual ~EnvironmentVariable_Item();

  EnvironmentVariable_Item(const EnvironmentVariable_Item& from);

  inline EnvironmentVariable_Item& operator=(const EnvironmentVariable_Item& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EnvironmentVariable_Item(EnvironmentVariable_Item&& from) noexcept
    : EnvironmentVariable_Item() {
    *this = ::std::move(from);
  }

  inline EnvironmentVariable_Item& operator=(EnvironmentVariable_Item&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const EnvironmentVariable_Item& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EnvironmentVariable_Item* internal_default_instance() {
    return reinterpret_cast<const EnvironmentVariable_Item*>(
               &_EnvironmentVariable_Item_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(EnvironmentVariable_Item* other);
  friend void swap(EnvironmentVariable_Item& a, EnvironmentVariable_Item& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EnvironmentVariable_Item* New() const PROTOBUF_FINAL { return New(NULL); }

  EnvironmentVariable_Item* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const EnvironmentVariable_Item& from);
  void MergeFrom(const EnvironmentVariable_Item& from);
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
  void InternalSwap(EnvironmentVariable_Item* other);
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

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:aspia.proto.EnvironmentVariable.Item)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fenvironment_5fvariables_2eproto::TableStruct;
  friend void ::protobuf_category_5fenvironment_5fvariables_2eproto::InitDefaultsEnvironmentVariable_ItemImpl();
};
// -------------------------------------------------------------------

class EnvironmentVariable : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.EnvironmentVariable) */ {
 public:
  EnvironmentVariable();
  virtual ~EnvironmentVariable();

  EnvironmentVariable(const EnvironmentVariable& from);

  inline EnvironmentVariable& operator=(const EnvironmentVariable& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EnvironmentVariable(EnvironmentVariable&& from) noexcept
    : EnvironmentVariable() {
    *this = ::std::move(from);
  }

  inline EnvironmentVariable& operator=(EnvironmentVariable&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const EnvironmentVariable& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EnvironmentVariable* internal_default_instance() {
    return reinterpret_cast<const EnvironmentVariable*>(
               &_EnvironmentVariable_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(EnvironmentVariable* other);
  friend void swap(EnvironmentVariable& a, EnvironmentVariable& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EnvironmentVariable* New() const PROTOBUF_FINAL { return New(NULL); }

  EnvironmentVariable* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const EnvironmentVariable& from);
  void MergeFrom(const EnvironmentVariable& from);
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
  void InternalSwap(EnvironmentVariable* other);
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

  typedef EnvironmentVariable_Item Item;

  // accessors -------------------------------------------------------

  // repeated .aspia.proto.EnvironmentVariable.Item item = 1;
  int item_size() const;
  void clear_item();
  static const int kItemFieldNumber = 1;
  const ::aspia::proto::EnvironmentVariable_Item& item(int index) const;
  ::aspia::proto::EnvironmentVariable_Item* mutable_item(int index);
  ::aspia::proto::EnvironmentVariable_Item* add_item();
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::EnvironmentVariable_Item >*
      mutable_item();
  const ::google::protobuf::RepeatedPtrField< ::aspia::proto::EnvironmentVariable_Item >&
      item() const;

  // @@protoc_insertion_point(class_scope:aspia.proto.EnvironmentVariable)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::EnvironmentVariable_Item > item_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fenvironment_5fvariables_2eproto::TableStruct;
  friend void ::protobuf_category_5fenvironment_5fvariables_2eproto::InitDefaultsEnvironmentVariableImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EnvironmentVariable_Item

// string name = 1;
inline void EnvironmentVariable_Item::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EnvironmentVariable_Item::name() const {
  // @@protoc_insertion_point(field_get:aspia.proto.EnvironmentVariable.Item.name)
  return name_.GetNoArena();
}
inline void EnvironmentVariable_Item::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.EnvironmentVariable.Item.name)
}
#if LANG_CXX11
inline void EnvironmentVariable_Item::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.EnvironmentVariable.Item.name)
}
#endif
inline void EnvironmentVariable_Item::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.EnvironmentVariable.Item.name)
}
inline void EnvironmentVariable_Item::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.EnvironmentVariable.Item.name)
}
inline ::std::string* EnvironmentVariable_Item::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.EnvironmentVariable.Item.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EnvironmentVariable_Item::release_name() {
  // @@protoc_insertion_point(field_release:aspia.proto.EnvironmentVariable.Item.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EnvironmentVariable_Item::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.EnvironmentVariable.Item.name)
}

// string value = 2;
inline void EnvironmentVariable_Item::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EnvironmentVariable_Item::value() const {
  // @@protoc_insertion_point(field_get:aspia.proto.EnvironmentVariable.Item.value)
  return value_.GetNoArena();
}
inline void EnvironmentVariable_Item::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.EnvironmentVariable.Item.value)
}
#if LANG_CXX11
inline void EnvironmentVariable_Item::set_value(::std::string&& value) {
  
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.EnvironmentVariable.Item.value)
}
#endif
inline void EnvironmentVariable_Item::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.EnvironmentVariable.Item.value)
}
inline void EnvironmentVariable_Item::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.EnvironmentVariable.Item.value)
}
inline ::std::string* EnvironmentVariable_Item::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.EnvironmentVariable.Item.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EnvironmentVariable_Item::release_value() {
  // @@protoc_insertion_point(field_release:aspia.proto.EnvironmentVariable.Item.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EnvironmentVariable_Item::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.EnvironmentVariable.Item.value)
}

// -------------------------------------------------------------------

// EnvironmentVariable

// repeated .aspia.proto.EnvironmentVariable.Item item = 1;
inline int EnvironmentVariable::item_size() const {
  return item_.size();
}
inline void EnvironmentVariable::clear_item() {
  item_.Clear();
}
inline const ::aspia::proto::EnvironmentVariable_Item& EnvironmentVariable::item(int index) const {
  // @@protoc_insertion_point(field_get:aspia.proto.EnvironmentVariable.item)
  return item_.Get(index);
}
inline ::aspia::proto::EnvironmentVariable_Item* EnvironmentVariable::mutable_item(int index) {
  // @@protoc_insertion_point(field_mutable:aspia.proto.EnvironmentVariable.item)
  return item_.Mutable(index);
}
inline ::aspia::proto::EnvironmentVariable_Item* EnvironmentVariable::add_item() {
  // @@protoc_insertion_point(field_add:aspia.proto.EnvironmentVariable.item)
  return item_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::aspia::proto::EnvironmentVariable_Item >*
EnvironmentVariable::mutable_item() {
  // @@protoc_insertion_point(field_mutable_list:aspia.proto.EnvironmentVariable.item)
  return &item_;
}
inline const ::google::protobuf::RepeatedPtrField< ::aspia::proto::EnvironmentVariable_Item >&
EnvironmentVariable::item() const {
  // @@protoc_insertion_point(field_list:aspia.proto.EnvironmentVariable.item)
  return item_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_category_5fenvironment_5fvariables_2eproto__INCLUDED
