// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_share.proto

#ifndef PROTOBUF_category_5fshare_2eproto__INCLUDED
#define PROTOBUF_category_5fshare_2eproto__INCLUDED

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

namespace protobuf_category_5fshare_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsShare_ItemImpl();
void InitDefaultsShare_Item();
void InitDefaultsShareImpl();
void InitDefaultsShare();
inline void InitDefaults() {
  InitDefaultsShare_Item();
  InitDefaultsShare();
}
}  // namespace protobuf_category_5fshare_2eproto
namespace aspia {
namespace proto {
class Share;
class ShareDefaultTypeInternal;
extern ShareDefaultTypeInternal _Share_default_instance_;
class Share_Item;
class Share_ItemDefaultTypeInternal;
extern Share_ItemDefaultTypeInternal _Share_Item_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace aspia {
namespace proto {

enum Share_Type {
  Share_Type_TYPE_UNKNOWN = 0,
  Share_Type_TYPE_DISK = 1,
  Share_Type_TYPE_PRINTER = 2,
  Share_Type_TYPE_DEVICE = 3,
  Share_Type_TYPE_IPC = 4,
  Share_Type_TYPE_SPECIAL = 5,
  Share_Type_TYPE_TEMPORARY = 6,
  Share_Type_Share_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Share_Type_Share_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Share_Type_IsValid(int value);
const Share_Type Share_Type_Type_MIN = Share_Type_TYPE_UNKNOWN;
const Share_Type Share_Type_Type_MAX = Share_Type_TYPE_TEMPORARY;
const int Share_Type_Type_ARRAYSIZE = Share_Type_Type_MAX + 1;

// ===================================================================

class Share_Item : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.Share.Item) */ {
 public:
  Share_Item();
  virtual ~Share_Item();

  Share_Item(const Share_Item& from);

  inline Share_Item& operator=(const Share_Item& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Share_Item(Share_Item&& from) noexcept
    : Share_Item() {
    *this = ::std::move(from);
  }

  inline Share_Item& operator=(Share_Item&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Share_Item& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Share_Item* internal_default_instance() {
    return reinterpret_cast<const Share_Item*>(
               &_Share_Item_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Share_Item* other);
  friend void swap(Share_Item& a, Share_Item& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Share_Item* New() const PROTOBUF_FINAL { return New(NULL); }

  Share_Item* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Share_Item& from);
  void MergeFrom(const Share_Item& from);
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
  void InternalSwap(Share_Item* other);
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

  // string description = 3;
  void clear_description();
  static const int kDescriptionFieldNumber = 3;
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

  // string local_path = 4;
  void clear_local_path();
  static const int kLocalPathFieldNumber = 4;
  const ::std::string& local_path() const;
  void set_local_path(const ::std::string& value);
  #if LANG_CXX11
  void set_local_path(::std::string&& value);
  #endif
  void set_local_path(const char* value);
  void set_local_path(const char* value, size_t size);
  ::std::string* mutable_local_path();
  ::std::string* release_local_path();
  void set_allocated_local_path(::std::string* local_path);

  // .aspia.proto.Share.Type type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::aspia::proto::Share_Type type() const;
  void set_type(::aspia::proto::Share_Type value);

  // uint32 current_uses = 5;
  void clear_current_uses();
  static const int kCurrentUsesFieldNumber = 5;
  ::google::protobuf::uint32 current_uses() const;
  void set_current_uses(::google::protobuf::uint32 value);

  // uint32 maximum_uses = 6;
  void clear_maximum_uses();
  static const int kMaximumUsesFieldNumber = 6;
  ::google::protobuf::uint32 maximum_uses() const;
  void set_maximum_uses(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:aspia.proto.Share.Item)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::internal::ArenaStringPtr local_path_;
  int type_;
  ::google::protobuf::uint32 current_uses_;
  ::google::protobuf::uint32 maximum_uses_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fshare_2eproto::TableStruct;
  friend void ::protobuf_category_5fshare_2eproto::InitDefaultsShare_ItemImpl();
};
// -------------------------------------------------------------------

class Share : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.Share) */ {
 public:
  Share();
  virtual ~Share();

  Share(const Share& from);

  inline Share& operator=(const Share& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Share(Share&& from) noexcept
    : Share() {
    *this = ::std::move(from);
  }

  inline Share& operator=(Share&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Share& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Share* internal_default_instance() {
    return reinterpret_cast<const Share*>(
               &_Share_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Share* other);
  friend void swap(Share& a, Share& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Share* New() const PROTOBUF_FINAL { return New(NULL); }

  Share* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Share& from);
  void MergeFrom(const Share& from);
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
  void InternalSwap(Share* other);
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

  typedef Share_Item Item;

  typedef Share_Type Type;
  static const Type TYPE_UNKNOWN =
    Share_Type_TYPE_UNKNOWN;
  static const Type TYPE_DISK =
    Share_Type_TYPE_DISK;
  static const Type TYPE_PRINTER =
    Share_Type_TYPE_PRINTER;
  static const Type TYPE_DEVICE =
    Share_Type_TYPE_DEVICE;
  static const Type TYPE_IPC =
    Share_Type_TYPE_IPC;
  static const Type TYPE_SPECIAL =
    Share_Type_TYPE_SPECIAL;
  static const Type TYPE_TEMPORARY =
    Share_Type_TYPE_TEMPORARY;
  static inline bool Type_IsValid(int value) {
    return Share_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Share_Type_Type_MIN;
  static const Type Type_MAX =
    Share_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Share_Type_Type_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // repeated .aspia.proto.Share.Item item = 1;
  int item_size() const;
  void clear_item();
  static const int kItemFieldNumber = 1;
  const ::aspia::proto::Share_Item& item(int index) const;
  ::aspia::proto::Share_Item* mutable_item(int index);
  ::aspia::proto::Share_Item* add_item();
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::Share_Item >*
      mutable_item();
  const ::google::protobuf::RepeatedPtrField< ::aspia::proto::Share_Item >&
      item() const;

  // @@protoc_insertion_point(class_scope:aspia.proto.Share)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::aspia::proto::Share_Item > item_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fshare_2eproto::TableStruct;
  friend void ::protobuf_category_5fshare_2eproto::InitDefaultsShareImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Share_Item

// string name = 1;
inline void Share_Item::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Share_Item::name() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Share.Item.name)
  return name_.GetNoArena();
}
inline void Share_Item::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.Share.Item.name)
}
#if LANG_CXX11
inline void Share_Item::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.Share.Item.name)
}
#endif
inline void Share_Item::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.Share.Item.name)
}
inline void Share_Item::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.Share.Item.name)
}
inline ::std::string* Share_Item::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.Share.Item.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Share_Item::release_name() {
  // @@protoc_insertion_point(field_release:aspia.proto.Share.Item.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Share_Item::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.Share.Item.name)
}

// .aspia.proto.Share.Type type = 2;
inline void Share_Item::clear_type() {
  type_ = 0;
}
inline ::aspia::proto::Share_Type Share_Item::type() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Share.Item.type)
  return static_cast< ::aspia::proto::Share_Type >(type_);
}
inline void Share_Item::set_type(::aspia::proto::Share_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.Share.Item.type)
}

// string description = 3;
inline void Share_Item::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Share_Item::description() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Share.Item.description)
  return description_.GetNoArena();
}
inline void Share_Item::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.Share.Item.description)
}
#if LANG_CXX11
inline void Share_Item::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.Share.Item.description)
}
#endif
inline void Share_Item::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.Share.Item.description)
}
inline void Share_Item::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.Share.Item.description)
}
inline ::std::string* Share_Item::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.Share.Item.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Share_Item::release_description() {
  // @@protoc_insertion_point(field_release:aspia.proto.Share.Item.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Share_Item::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.Share.Item.description)
}

// string local_path = 4;
inline void Share_Item::clear_local_path() {
  local_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Share_Item::local_path() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Share.Item.local_path)
  return local_path_.GetNoArena();
}
inline void Share_Item::set_local_path(const ::std::string& value) {
  
  local_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.Share.Item.local_path)
}
#if LANG_CXX11
inline void Share_Item::set_local_path(::std::string&& value) {
  
  local_path_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.Share.Item.local_path)
}
#endif
inline void Share_Item::set_local_path(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  local_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.Share.Item.local_path)
}
inline void Share_Item::set_local_path(const char* value, size_t size) {
  
  local_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.Share.Item.local_path)
}
inline ::std::string* Share_Item::mutable_local_path() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.Share.Item.local_path)
  return local_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Share_Item::release_local_path() {
  // @@protoc_insertion_point(field_release:aspia.proto.Share.Item.local_path)
  
  return local_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Share_Item::set_allocated_local_path(::std::string* local_path) {
  if (local_path != NULL) {
    
  } else {
    
  }
  local_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), local_path);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.Share.Item.local_path)
}

// uint32 current_uses = 5;
inline void Share_Item::clear_current_uses() {
  current_uses_ = 0u;
}
inline ::google::protobuf::uint32 Share_Item::current_uses() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Share.Item.current_uses)
  return current_uses_;
}
inline void Share_Item::set_current_uses(::google::protobuf::uint32 value) {
  
  current_uses_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.Share.Item.current_uses)
}

// uint32 maximum_uses = 6;
inline void Share_Item::clear_maximum_uses() {
  maximum_uses_ = 0u;
}
inline ::google::protobuf::uint32 Share_Item::maximum_uses() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Share.Item.maximum_uses)
  return maximum_uses_;
}
inline void Share_Item::set_maximum_uses(::google::protobuf::uint32 value) {
  
  maximum_uses_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.Share.Item.maximum_uses)
}

// -------------------------------------------------------------------

// Share

// repeated .aspia.proto.Share.Item item = 1;
inline int Share::item_size() const {
  return item_.size();
}
inline void Share::clear_item() {
  item_.Clear();
}
inline const ::aspia::proto::Share_Item& Share::item(int index) const {
  // @@protoc_insertion_point(field_get:aspia.proto.Share.item)
  return item_.Get(index);
}
inline ::aspia::proto::Share_Item* Share::mutable_item(int index) {
  // @@protoc_insertion_point(field_mutable:aspia.proto.Share.item)
  return item_.Mutable(index);
}
inline ::aspia::proto::Share_Item* Share::add_item() {
  // @@protoc_insertion_point(field_add:aspia.proto.Share.item)
  return item_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::aspia::proto::Share_Item >*
Share::mutable_item() {
  // @@protoc_insertion_point(field_mutable_list:aspia.proto.Share.item)
  return &item_;
}
inline const ::google::protobuf::RepeatedPtrField< ::aspia::proto::Share_Item >&
Share::item() const {
  // @@protoc_insertion_point(field_list:aspia.proto.Share.item)
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

template <> struct is_proto_enum< ::aspia::proto::Share_Type> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_category_5fshare_2eproto__INCLUDED
