// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: amy_test2.proto

#include "amy_test2.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace video_stream {
PROTOBUF_CONSTEXPR Test::Test(
    ::_pbi::ConstantInitialized)
  : objs_(){}
struct TestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TestDefaultTypeInternal() {}
  union {
    Test _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TestDefaultTypeInternal _Test_default_instance_;
PROTOBUF_CONSTEXPR Obj::Obj(
    ::_pbi::ConstantInitialized)
  : name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , id_(int64_t{0}){}
struct ObjDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ObjDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ObjDefaultTypeInternal() {}
  union {
    Obj _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ObjDefaultTypeInternal _Obj_default_instance_;
}  // namespace video_stream
static ::_pb::Metadata file_level_metadata_amy_5ftest2_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_amy_5ftest2_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_amy_5ftest2_2eproto = nullptr;

const uint32_t TableStruct_amy_5ftest2_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::video_stream::Test, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::video_stream::Test, objs_),
  PROTOBUF_FIELD_OFFSET(::video_stream::Obj, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::video_stream::Obj, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::video_stream::Obj, id_),
  PROTOBUF_FIELD_OFFSET(::video_stream::Obj, name_),
  1,
  0,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::video_stream::Test)},
  { 7, 15, -1, sizeof(::video_stream::Obj)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::video_stream::_Test_default_instance_._instance,
  &::video_stream::_Obj_default_instance_._instance,
};

const char descriptor_table_protodef_amy_5ftest2_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017amy_test2.proto\022\014video_stream\"\'\n\004Test\022"
  "\037\n\004objs\030\001 \003(\0132\021.video_stream.Obj\"\037\n\003Obj\022"
  "\n\n\002id\030\001 \001(\003\022\014\n\004name\030\002 \001(\t"
  ;
static ::_pbi::once_flag descriptor_table_amy_5ftest2_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_amy_5ftest2_2eproto = {
    false, false, 105, descriptor_table_protodef_amy_5ftest2_2eproto,
    "amy_test2.proto",
    &descriptor_table_amy_5ftest2_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_amy_5ftest2_2eproto::offsets,
    file_level_metadata_amy_5ftest2_2eproto, file_level_enum_descriptors_amy_5ftest2_2eproto,
    file_level_service_descriptors_amy_5ftest2_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_amy_5ftest2_2eproto_getter() {
  return &descriptor_table_amy_5ftest2_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_amy_5ftest2_2eproto(&descriptor_table_amy_5ftest2_2eproto);
namespace video_stream {

// ===================================================================

class Test::_Internal {
 public:
};

Test::Test(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  objs_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:video_stream.Test)
}
Test::Test(const Test& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      objs_(from.objs_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:video_stream.Test)
}

inline void Test::SharedCtor() {
}

Test::~Test() {
  // @@protoc_insertion_point(destructor:video_stream.Test)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Test::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Test::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Test::Clear() {
// @@protoc_insertion_point(message_clear_start:video_stream.Test)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  objs_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Test::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .video_stream.Obj objs = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_objs(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Test::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:video_stream.Test)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .video_stream.Obj objs = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_objs_size()); i < n; i++) {
    const auto& repfield = this->_internal_objs(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:video_stream.Test)
  return target;
}

size_t Test::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:video_stream.Test)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .video_stream.Obj objs = 1;
  total_size += 1UL * this->_internal_objs_size();
  for (const auto& msg : this->objs_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Test::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Test::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Test::GetClassData() const { return &_class_data_; }

void Test::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Test *>(to)->MergeFrom(
      static_cast<const Test &>(from));
}


void Test::MergeFrom(const Test& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:video_stream.Test)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  objs_.MergeFrom(from.objs_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Test::CopyFrom(const Test& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:video_stream.Test)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Test::IsInitialized() const {
  return true;
}

void Test::InternalSwap(Test* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  objs_.InternalSwap(&other->objs_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Test::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_amy_5ftest2_2eproto_getter, &descriptor_table_amy_5ftest2_2eproto_once,
      file_level_metadata_amy_5ftest2_2eproto[0]);
}

// ===================================================================

class Obj::_Internal {
 public:
  using HasBits = decltype(std::declval<Obj>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

Obj::Obj(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:video_stream.Obj)
}
Obj::Obj(const Obj& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_name()) {
    name_.Set(from._internal_name(), 
      GetArenaForAllocation());
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:video_stream.Obj)
}

inline void Obj::SharedCtor() {
name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
id_ = int64_t{0};
}

Obj::~Obj() {
  // @@protoc_insertion_point(destructor:video_stream.Obj)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Obj::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.Destroy();
}

void Obj::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Obj::Clear() {
// @@protoc_insertion_point(message_clear_start:video_stream.Obj)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    name_.ClearNonDefaultToEmpty();
  }
  id_ = int64_t{0};
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Obj::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int64 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "video_stream.Obj.name");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Obj::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:video_stream.Obj)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int64 id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_id(), target);
  }

  // optional string name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "video_stream.Obj.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:video_stream.Obj)
  return target;
}

size_t Obj::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:video_stream.Obj)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string name = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional int64 id = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_id());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Obj::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Obj::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Obj::GetClassData() const { return &_class_data_; }

void Obj::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Obj *>(to)->MergeFrom(
      static_cast<const Obj &>(from));
}


void Obj::MergeFrom(const Obj& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:video_stream.Obj)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      id_ = from.id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Obj::CopyFrom(const Obj& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:video_stream.Obj)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Obj::IsInitialized() const {
  return true;
}

void Obj::InternalSwap(Obj* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Obj::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_amy_5ftest2_2eproto_getter, &descriptor_table_amy_5ftest2_2eproto_once,
      file_level_metadata_amy_5ftest2_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace video_stream
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::video_stream::Test*
Arena::CreateMaybeMessage< ::video_stream::Test >(Arena* arena) {
  return Arena::CreateMessageInternal< ::video_stream::Test >(arena);
}
template<> PROTOBUF_NOINLINE ::video_stream::Obj*
Arena::CreateMaybeMessage< ::video_stream::Obj >(Arena* arena) {
  return Arena::CreateMessageInternal< ::video_stream::Obj >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
