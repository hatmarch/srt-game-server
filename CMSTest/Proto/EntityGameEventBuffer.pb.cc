// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EntityGameEventBuffer.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "EntityGameEventBuffer.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace usx {
namespace geofactions {

namespace {

const ::google::protobuf::Descriptor* EntityGameEventBuffer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EntityGameEventBuffer_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* EntityGameEventBuffer_EntityGameEventBufferType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_EntityGameEventBuffer_2eproto() {
  protobuf_AddDesc_EntityGameEventBuffer_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "EntityGameEventBuffer.proto");
  GOOGLE_CHECK(file != NULL);
  EntityGameEventBuffer_descriptor_ = file->message_type(0);
  static const int EntityGameEventBuffer_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntityGameEventBuffer, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntityGameEventBuffer, entitytag_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntityGameEventBuffer, uuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntityGameEventBuffer, body_),
  };
  EntityGameEventBuffer_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      EntityGameEventBuffer_descriptor_,
      EntityGameEventBuffer::default_instance_,
      EntityGameEventBuffer_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntityGameEventBuffer, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntityGameEventBuffer, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(EntityGameEventBuffer));
  EntityGameEventBuffer_EntityGameEventBufferType_descriptor_ = EntityGameEventBuffer_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_EntityGameEventBuffer_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    EntityGameEventBuffer_descriptor_, &EntityGameEventBuffer::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_EntityGameEventBuffer_2eproto() {
  delete EntityGameEventBuffer::default_instance_;
  delete EntityGameEventBuffer_reflection_;
}

void protobuf_AddDesc_EntityGameEventBuffer_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::box2d::protobuf_AddDesc_box2d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033EntityGameEventBuffer.proto\022\017usx.geofa"
    "ctions\032\013box2d.proto\"\213\002\n\025EntityGameEventB"
    "uffer\022W\n\004type\030\001 \002(\0162@.usx.geofactions.En"
    "tityGameEventBuffer.EntityGameEventBuffe"
    "rType:\007UNKNOWN\022\021\n\tentityTag\030\002 \002(\004\022\014\n\004UUI"
    "D\030\003 \001(\t\022\033\n\004body\030\004 \001(\0132\r.box2d.PbBody\"[\n\031"
    "EntityGameEventBufferType\022\013\n\007UNKNOWN\020\000\022\n"
    "\n\006CREATE\020\001\022\014\n\010RETRIEVE\020\002\022\n\n\006UPDATE\020\003\022\013\n\007"
    "DESTROY\020\004", 329);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "EntityGameEventBuffer.proto", &protobuf_RegisterTypes);
  EntityGameEventBuffer::default_instance_ = new EntityGameEventBuffer();
  EntityGameEventBuffer::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_EntityGameEventBuffer_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_EntityGameEventBuffer_2eproto {
  StaticDescriptorInitializer_EntityGameEventBuffer_2eproto() {
    protobuf_AddDesc_EntityGameEventBuffer_2eproto();
  }
} static_descriptor_initializer_EntityGameEventBuffer_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* EntityGameEventBuffer_EntityGameEventBufferType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EntityGameEventBuffer_EntityGameEventBufferType_descriptor_;
}
bool EntityGameEventBuffer_EntityGameEventBufferType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer::UNKNOWN;
const EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer::CREATE;
const EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer::RETRIEVE;
const EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer::UPDATE;
const EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer::DESTROY;
const EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer::EntityGameEventBufferType_MIN;
const EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer::EntityGameEventBufferType_MAX;
const int EntityGameEventBuffer::EntityGameEventBufferType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int EntityGameEventBuffer::kTypeFieldNumber;
const int EntityGameEventBuffer::kEntityTagFieldNumber;
const int EntityGameEventBuffer::kUUIDFieldNumber;
const int EntityGameEventBuffer::kBodyFieldNumber;
#endif  // !_MSC_VER

EntityGameEventBuffer::EntityGameEventBuffer()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void EntityGameEventBuffer::InitAsDefaultInstance() {
  body_ = const_cast< ::box2d::PbBody*>(&::box2d::PbBody::default_instance());
}

EntityGameEventBuffer::EntityGameEventBuffer(const EntityGameEventBuffer& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void EntityGameEventBuffer::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  entitytag_ = GOOGLE_ULONGLONG(0);
  uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  body_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EntityGameEventBuffer::~EntityGameEventBuffer() {
  SharedDtor();
}

void EntityGameEventBuffer::SharedDtor() {
  if (uuid_ != &::google::protobuf::internal::kEmptyString) {
    delete uuid_;
  }
  if (this != default_instance_) {
    delete body_;
  }
}

void EntityGameEventBuffer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EntityGameEventBuffer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EntityGameEventBuffer_descriptor_;
}

const EntityGameEventBuffer& EntityGameEventBuffer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_EntityGameEventBuffer_2eproto();
  return *default_instance_;
}

EntityGameEventBuffer* EntityGameEventBuffer::default_instance_ = NULL;

EntityGameEventBuffer* EntityGameEventBuffer::New() const {
  return new EntityGameEventBuffer;
}

void EntityGameEventBuffer::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    entitytag_ = GOOGLE_ULONGLONG(0);
    if (has_uuid()) {
      if (uuid_ != &::google::protobuf::internal::kEmptyString) {
        uuid_->clear();
      }
    }
    if (has_body()) {
      if (body_ != NULL) body_->::box2d::PbBody::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool EntityGameEventBuffer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .usx.geofactions.EntityGameEventBuffer.EntityGameEventBufferType type = 1 [default = UNKNOWN];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType_IsValid(value)) {
            set_type(static_cast< ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_entityTag;
        break;
      }

      // required uint64 entityTag = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_entityTag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &entitytag_)));
          set_has_entitytag();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_UUID;
        break;
      }

      // optional string UUID = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_UUID:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->uuid().data(), this->uuid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_body;
        break;
      }

      // optional .box2d.PbBody body = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_body:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_body()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void EntityGameEventBuffer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .usx.geofactions.EntityGameEventBuffer.EntityGameEventBufferType type = 1 [default = UNKNOWN];
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // required uint64 entityTag = 2;
  if (has_entitytag()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->entitytag(), output);
  }

  // optional string UUID = 3;
  if (has_uuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->uuid().data(), this->uuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->uuid(), output);
  }

  // optional .box2d.PbBody body = 4;
  if (has_body()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->body(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* EntityGameEventBuffer::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .usx.geofactions.EntityGameEventBuffer.EntityGameEventBufferType type = 1 [default = UNKNOWN];
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // required uint64 entityTag = 2;
  if (has_entitytag()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->entitytag(), target);
  }

  // optional string UUID = 3;
  if (has_uuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->uuid().data(), this->uuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->uuid(), target);
  }

  // optional .box2d.PbBody body = 4;
  if (has_body()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->body(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int EntityGameEventBuffer::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .usx.geofactions.EntityGameEventBuffer.EntityGameEventBufferType type = 1 [default = UNKNOWN];
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // required uint64 entityTag = 2;
    if (has_entitytag()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->entitytag());
    }

    // optional string UUID = 3;
    if (has_uuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->uuid());
    }

    // optional .box2d.PbBody body = 4;
    if (has_body()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->body());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EntityGameEventBuffer::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const EntityGameEventBuffer* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const EntityGameEventBuffer*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void EntityGameEventBuffer::MergeFrom(const EntityGameEventBuffer& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_entitytag()) {
      set_entitytag(from.entitytag());
    }
    if (from.has_uuid()) {
      set_uuid(from.uuid());
    }
    if (from.has_body()) {
      mutable_body()->::box2d::PbBody::MergeFrom(from.body());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void EntityGameEventBuffer::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EntityGameEventBuffer::CopyFrom(const EntityGameEventBuffer& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntityGameEventBuffer::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_body()) {
    if (!this->body().IsInitialized()) return false;
  }
  return true;
}

void EntityGameEventBuffer::Swap(EntityGameEventBuffer* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(entitytag_, other->entitytag_);
    std::swap(uuid_, other->uuid_);
    std::swap(body_, other->body_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata EntityGameEventBuffer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EntityGameEventBuffer_descriptor_;
  metadata.reflection = EntityGameEventBuffer_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace geofactions
}  // namespace usx

// @@protoc_insertion_point(global_scope)