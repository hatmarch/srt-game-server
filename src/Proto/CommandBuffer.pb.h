// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommandBuffer.proto

#ifndef PROTOBUF_INCLUDED_CommandBuffer_2eproto
#define PROTOBUF_INCLUDED_CommandBuffer_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "SecurityCommandBuffer.pb.h"
#include "RawInputCommandBuffer.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_CommandBuffer_2eproto 

namespace protobuf_CommandBuffer_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_CommandBuffer_2eproto
namespace redhatgamedev {
namespace srt {
class CommandBuffer;
class CommandBufferDefaultTypeInternal;
extern CommandBufferDefaultTypeInternal _CommandBuffer_default_instance_;
}  // namespace srt
}  // namespace redhatgamedev
namespace google {
namespace protobuf {
template<> ::redhatgamedev::srt::CommandBuffer* Arena::CreateMaybeMessage<::redhatgamedev::srt::CommandBuffer>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace redhatgamedev {
namespace srt {

enum CommandBuffer_CommandBufferType {
  CommandBuffer_CommandBufferType_UNKNOWN = 0,
  CommandBuffer_CommandBufferType_SECURITY = 1,
  CommandBuffer_CommandBufferType_RAWINPUT = 2
};
bool CommandBuffer_CommandBufferType_IsValid(int value);
const CommandBuffer_CommandBufferType CommandBuffer_CommandBufferType_CommandBufferType_MIN = CommandBuffer_CommandBufferType_UNKNOWN;
const CommandBuffer_CommandBufferType CommandBuffer_CommandBufferType_CommandBufferType_MAX = CommandBuffer_CommandBufferType_RAWINPUT;
const int CommandBuffer_CommandBufferType_CommandBufferType_ARRAYSIZE = CommandBuffer_CommandBufferType_CommandBufferType_MAX + 1;

const ::google::protobuf::EnumDescriptor* CommandBuffer_CommandBufferType_descriptor();
inline const ::std::string& CommandBuffer_CommandBufferType_Name(CommandBuffer_CommandBufferType value) {
  return ::google::protobuf::internal::NameOfEnum(
    CommandBuffer_CommandBufferType_descriptor(), value);
}
inline bool CommandBuffer_CommandBufferType_Parse(
    const ::std::string& name, CommandBuffer_CommandBufferType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CommandBuffer_CommandBufferType>(
    CommandBuffer_CommandBufferType_descriptor(), name, value);
}
// ===================================================================

class CommandBuffer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:redhatgamedev.srt.CommandBuffer) */ {
 public:
  CommandBuffer();
  virtual ~CommandBuffer();

  CommandBuffer(const CommandBuffer& from);

  inline CommandBuffer& operator=(const CommandBuffer& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CommandBuffer(CommandBuffer&& from) noexcept
    : CommandBuffer() {
    *this = ::std::move(from);
  }

  inline CommandBuffer& operator=(CommandBuffer&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CommandBuffer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CommandBuffer* internal_default_instance() {
    return reinterpret_cast<const CommandBuffer*>(
               &_CommandBuffer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CommandBuffer* other);
  friend void swap(CommandBuffer& a, CommandBuffer& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CommandBuffer* New() const final {
    return CreateMaybeMessage<CommandBuffer>(NULL);
  }

  CommandBuffer* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CommandBuffer>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CommandBuffer& from);
  void MergeFrom(const CommandBuffer& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CommandBuffer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef CommandBuffer_CommandBufferType CommandBufferType;
  static const CommandBufferType UNKNOWN =
    CommandBuffer_CommandBufferType_UNKNOWN;
  static const CommandBufferType SECURITY =
    CommandBuffer_CommandBufferType_SECURITY;
  static const CommandBufferType RAWINPUT =
    CommandBuffer_CommandBufferType_RAWINPUT;
  static inline bool CommandBufferType_IsValid(int value) {
    return CommandBuffer_CommandBufferType_IsValid(value);
  }
  static const CommandBufferType CommandBufferType_MIN =
    CommandBuffer_CommandBufferType_CommandBufferType_MIN;
  static const CommandBufferType CommandBufferType_MAX =
    CommandBuffer_CommandBufferType_CommandBufferType_MAX;
  static const int CommandBufferType_ARRAYSIZE =
    CommandBuffer_CommandBufferType_CommandBufferType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CommandBufferType_descriptor() {
    return CommandBuffer_CommandBufferType_descriptor();
  }
  static inline const ::std::string& CommandBufferType_Name(CommandBufferType value) {
    return CommandBuffer_CommandBufferType_Name(value);
  }
  static inline bool CommandBufferType_Parse(const ::std::string& name,
      CommandBufferType* value) {
    return CommandBuffer_CommandBufferType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .redhatgamedev.srt.SecurityCommandBuffer securityCommandBuffer = 2;
  bool has_securitycommandbuffer() const;
  void clear_securitycommandbuffer();
  static const int kSecurityCommandBufferFieldNumber = 2;
  private:
  const ::redhatgamedev::srt::SecurityCommandBuffer& _internal_securitycommandbuffer() const;
  public:
  const ::redhatgamedev::srt::SecurityCommandBuffer& securitycommandbuffer() const;
  ::redhatgamedev::srt::SecurityCommandBuffer* release_securitycommandbuffer();
  ::redhatgamedev::srt::SecurityCommandBuffer* mutable_securitycommandbuffer();
  void set_allocated_securitycommandbuffer(::redhatgamedev::srt::SecurityCommandBuffer* securitycommandbuffer);

  // optional .redhatgamedev.srt.RawInputCommandBuffer rawInputCommandBuffer = 3;
  bool has_rawinputcommandbuffer() const;
  void clear_rawinputcommandbuffer();
  static const int kRawInputCommandBufferFieldNumber = 3;
  private:
  const ::redhatgamedev::srt::RawInputCommandBuffer& _internal_rawinputcommandbuffer() const;
  public:
  const ::redhatgamedev::srt::RawInputCommandBuffer& rawinputcommandbuffer() const;
  ::redhatgamedev::srt::RawInputCommandBuffer* release_rawinputcommandbuffer();
  ::redhatgamedev::srt::RawInputCommandBuffer* mutable_rawinputcommandbuffer();
  void set_allocated_rawinputcommandbuffer(::redhatgamedev::srt::RawInputCommandBuffer* rawinputcommandbuffer);

  // required .redhatgamedev.srt.CommandBuffer.CommandBufferType type = 1 [default = UNKNOWN];
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::redhatgamedev::srt::CommandBuffer_CommandBufferType type() const;
  void set_type(::redhatgamedev::srt::CommandBuffer_CommandBufferType value);

  // @@protoc_insertion_point(class_scope:redhatgamedev.srt.CommandBuffer)
 private:
  void set_has_type();
  void clear_has_type();
  void set_has_securitycommandbuffer();
  void clear_has_securitycommandbuffer();
  void set_has_rawinputcommandbuffer();
  void clear_has_rawinputcommandbuffer();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::redhatgamedev::srt::SecurityCommandBuffer* securitycommandbuffer_;
  ::redhatgamedev::srt::RawInputCommandBuffer* rawinputcommandbuffer_;
  int type_;
  friend struct ::protobuf_CommandBuffer_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommandBuffer

// required .redhatgamedev.srt.CommandBuffer.CommandBufferType type = 1 [default = UNKNOWN];
inline bool CommandBuffer::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CommandBuffer::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CommandBuffer::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CommandBuffer::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::redhatgamedev::srt::CommandBuffer_CommandBufferType CommandBuffer::type() const {
  // @@protoc_insertion_point(field_get:redhatgamedev.srt.CommandBuffer.type)
  return static_cast< ::redhatgamedev::srt::CommandBuffer_CommandBufferType >(type_);
}
inline void CommandBuffer::set_type(::redhatgamedev::srt::CommandBuffer_CommandBufferType value) {
  assert(::redhatgamedev::srt::CommandBuffer_CommandBufferType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:redhatgamedev.srt.CommandBuffer.type)
}

// optional .redhatgamedev.srt.SecurityCommandBuffer securityCommandBuffer = 2;
inline bool CommandBuffer::has_securitycommandbuffer() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CommandBuffer::set_has_securitycommandbuffer() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CommandBuffer::clear_has_securitycommandbuffer() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::redhatgamedev::srt::SecurityCommandBuffer& CommandBuffer::_internal_securitycommandbuffer() const {
  return *securitycommandbuffer_;
}
inline const ::redhatgamedev::srt::SecurityCommandBuffer& CommandBuffer::securitycommandbuffer() const {
  const ::redhatgamedev::srt::SecurityCommandBuffer* p = securitycommandbuffer_;
  // @@protoc_insertion_point(field_get:redhatgamedev.srt.CommandBuffer.securityCommandBuffer)
  return p != NULL ? *p : *reinterpret_cast<const ::redhatgamedev::srt::SecurityCommandBuffer*>(
      &::redhatgamedev::srt::_SecurityCommandBuffer_default_instance_);
}
inline ::redhatgamedev::srt::SecurityCommandBuffer* CommandBuffer::release_securitycommandbuffer() {
  // @@protoc_insertion_point(field_release:redhatgamedev.srt.CommandBuffer.securityCommandBuffer)
  clear_has_securitycommandbuffer();
  ::redhatgamedev::srt::SecurityCommandBuffer* temp = securitycommandbuffer_;
  securitycommandbuffer_ = NULL;
  return temp;
}
inline ::redhatgamedev::srt::SecurityCommandBuffer* CommandBuffer::mutable_securitycommandbuffer() {
  set_has_securitycommandbuffer();
  if (securitycommandbuffer_ == NULL) {
    auto* p = CreateMaybeMessage<::redhatgamedev::srt::SecurityCommandBuffer>(GetArenaNoVirtual());
    securitycommandbuffer_ = p;
  }
  // @@protoc_insertion_point(field_mutable:redhatgamedev.srt.CommandBuffer.securityCommandBuffer)
  return securitycommandbuffer_;
}
inline void CommandBuffer::set_allocated_securitycommandbuffer(::redhatgamedev::srt::SecurityCommandBuffer* securitycommandbuffer) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(securitycommandbuffer_);
  }
  if (securitycommandbuffer) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      securitycommandbuffer = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, securitycommandbuffer, submessage_arena);
    }
    set_has_securitycommandbuffer();
  } else {
    clear_has_securitycommandbuffer();
  }
  securitycommandbuffer_ = securitycommandbuffer;
  // @@protoc_insertion_point(field_set_allocated:redhatgamedev.srt.CommandBuffer.securityCommandBuffer)
}

// optional .redhatgamedev.srt.RawInputCommandBuffer rawInputCommandBuffer = 3;
inline bool CommandBuffer::has_rawinputcommandbuffer() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CommandBuffer::set_has_rawinputcommandbuffer() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CommandBuffer::clear_has_rawinputcommandbuffer() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::redhatgamedev::srt::RawInputCommandBuffer& CommandBuffer::_internal_rawinputcommandbuffer() const {
  return *rawinputcommandbuffer_;
}
inline const ::redhatgamedev::srt::RawInputCommandBuffer& CommandBuffer::rawinputcommandbuffer() const {
  const ::redhatgamedev::srt::RawInputCommandBuffer* p = rawinputcommandbuffer_;
  // @@protoc_insertion_point(field_get:redhatgamedev.srt.CommandBuffer.rawInputCommandBuffer)
  return p != NULL ? *p : *reinterpret_cast<const ::redhatgamedev::srt::RawInputCommandBuffer*>(
      &::redhatgamedev::srt::_RawInputCommandBuffer_default_instance_);
}
inline ::redhatgamedev::srt::RawInputCommandBuffer* CommandBuffer::release_rawinputcommandbuffer() {
  // @@protoc_insertion_point(field_release:redhatgamedev.srt.CommandBuffer.rawInputCommandBuffer)
  clear_has_rawinputcommandbuffer();
  ::redhatgamedev::srt::RawInputCommandBuffer* temp = rawinputcommandbuffer_;
  rawinputcommandbuffer_ = NULL;
  return temp;
}
inline ::redhatgamedev::srt::RawInputCommandBuffer* CommandBuffer::mutable_rawinputcommandbuffer() {
  set_has_rawinputcommandbuffer();
  if (rawinputcommandbuffer_ == NULL) {
    auto* p = CreateMaybeMessage<::redhatgamedev::srt::RawInputCommandBuffer>(GetArenaNoVirtual());
    rawinputcommandbuffer_ = p;
  }
  // @@protoc_insertion_point(field_mutable:redhatgamedev.srt.CommandBuffer.rawInputCommandBuffer)
  return rawinputcommandbuffer_;
}
inline void CommandBuffer::set_allocated_rawinputcommandbuffer(::redhatgamedev::srt::RawInputCommandBuffer* rawinputcommandbuffer) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(rawinputcommandbuffer_);
  }
  if (rawinputcommandbuffer) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      rawinputcommandbuffer = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, rawinputcommandbuffer, submessage_arena);
    }
    set_has_rawinputcommandbuffer();
  } else {
    clear_has_rawinputcommandbuffer();
  }
  rawinputcommandbuffer_ = rawinputcommandbuffer;
  // @@protoc_insertion_point(field_set_allocated:redhatgamedev.srt.CommandBuffer.rawInputCommandBuffer)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace srt
}  // namespace redhatgamedev

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::redhatgamedev::srt::CommandBuffer_CommandBufferType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::redhatgamedev::srt::CommandBuffer_CommandBufferType>() {
  return ::redhatgamedev::srt::CommandBuffer_CommandBufferType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_CommandBuffer_2eproto
