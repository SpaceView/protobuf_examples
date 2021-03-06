// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: amy_test1.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_amy_5ftest1_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_amy_5ftest1_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_amy_5ftest1_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_amy_5ftest1_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_amy_5ftest1_2eproto;
namespace video_stream {
class Test;
struct TestDefaultTypeInternal;
extern TestDefaultTypeInternal _Test_default_instance_;
}  // namespace video_stream
PROTOBUF_NAMESPACE_OPEN
template<> ::video_stream::Test* Arena::CreateMaybeMessage<::video_stream::Test>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace video_stream {

// ===================================================================

class Test final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:video_stream.Test) */ {
 public:
  inline Test() : Test(nullptr) {}
  ~Test() override;
  explicit PROTOBUF_CONSTEXPR Test(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Test(const Test& from);
  Test(Test&& from) noexcept
    : Test() {
    *this = ::std::move(from);
  }

  inline Test& operator=(const Test& from) {
    CopyFrom(from);
    return *this;
  }
  inline Test& operator=(Test&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Test& default_instance() {
    return *internal_default_instance();
  }
  static inline const Test* internal_default_instance() {
    return reinterpret_cast<const Test*>(
               &_Test_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Test& a, Test& b) {
    a.Swap(&b);
  }
  inline void Swap(Test* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Test* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Test* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Test>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Test& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Test& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Test* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "video_stream.Test";
  }
  protected:
  explicit Test(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
  };
  // repeated int64 id = 1;
  int id_size() const;
  private:
  int _internal_id_size() const;
  public:
  void clear_id();
  private:
  int64_t _internal_id(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      _internal_id() const;
  void _internal_add_id(int64_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      _internal_mutable_id();
  public:
  int64_t id(int index) const;
  void set_id(int index, int64_t value);
  void add_id(int64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      mutable_id();

  // @@protoc_insertion_point(class_scope:video_stream.Test)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t > id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_amy_5ftest1_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Test

// repeated int64 id = 1;
inline int Test::_internal_id_size() const {
  return id_.size();
}
inline int Test::id_size() const {
  return _internal_id_size();
}
inline void Test::clear_id() {
  id_.Clear();
}
inline int64_t Test::_internal_id(int index) const {
  return id_.Get(index);
}
inline int64_t Test::id(int index) const {
  // @@protoc_insertion_point(field_get:video_stream.Test.id)
  return _internal_id(index);
}
inline void Test::set_id(int index, int64_t value) {
  id_.Set(index, value);
  // @@protoc_insertion_point(field_set:video_stream.Test.id)
}
inline void Test::_internal_add_id(int64_t value) {
  id_.Add(value);
}
inline void Test::add_id(int64_t value) {
  _internal_add_id(value);
  // @@protoc_insertion_point(field_add:video_stream.Test.id)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
Test::_internal_id() const {
  return id_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
Test::id() const {
  // @@protoc_insertion_point(field_list:video_stream.Test.id)
  return _internal_id();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
Test::_internal_mutable_id() {
  return &id_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
Test::mutable_id() {
  // @@protoc_insertion_point(field_mutable_list:video_stream.Test.id)
  return _internal_mutable_id();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace video_stream

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_amy_5ftest1_2eproto
