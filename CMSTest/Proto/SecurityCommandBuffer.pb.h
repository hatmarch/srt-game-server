// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SecurityCommandBuffer.proto

#ifndef PROTOBUF_SecurityCommandBuffer_2eproto__INCLUDED
#define PROTOBUF_SecurityCommandBuffer_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace usx {
namespace geofactions {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SecurityCommandBuffer_2eproto();
void protobuf_AssignDesc_SecurityCommandBuffer_2eproto();
void protobuf_ShutdownFile_SecurityCommandBuffer_2eproto();

class JoinSecurityCommandBuffer;
class LeaveSecurityCommandBuffer;
class SecurityCommandBuffer;

enum SecurityCommandBuffer_SecurityCommandBufferType {
  SecurityCommandBuffer_SecurityCommandBufferType_UNKNOWN = 0,
  SecurityCommandBuffer_SecurityCommandBufferType_JOIN = 1,
  SecurityCommandBuffer_SecurityCommandBufferType_LEAVE = 2
};
bool SecurityCommandBuffer_SecurityCommandBufferType_IsValid(int value);
const SecurityCommandBuffer_SecurityCommandBufferType SecurityCommandBuffer_SecurityCommandBufferType_SecurityCommandBufferType_MIN = SecurityCommandBuffer_SecurityCommandBufferType_UNKNOWN;
const SecurityCommandBuffer_SecurityCommandBufferType SecurityCommandBuffer_SecurityCommandBufferType_SecurityCommandBufferType_MAX = SecurityCommandBuffer_SecurityCommandBufferType_LEAVE;
const int SecurityCommandBuffer_SecurityCommandBufferType_SecurityCommandBufferType_ARRAYSIZE = SecurityCommandBuffer_SecurityCommandBufferType_SecurityCommandBufferType_MAX + 1;

const ::google::protobuf::EnumDescriptor* SecurityCommandBuffer_SecurityCommandBufferType_descriptor();
inline const ::std::string& SecurityCommandBuffer_SecurityCommandBufferType_Name(SecurityCommandBuffer_SecurityCommandBufferType value) {
  return ::google::protobuf::internal::NameOfEnum(
    SecurityCommandBuffer_SecurityCommandBufferType_descriptor(), value);
}
inline bool SecurityCommandBuffer_SecurityCommandBufferType_Parse(
    const ::std::string& name, SecurityCommandBuffer_SecurityCommandBufferType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SecurityCommandBuffer_SecurityCommandBufferType>(
    SecurityCommandBuffer_SecurityCommandBufferType_descriptor(), name, value);
}
// ===================================================================

class JoinSecurityCommandBuffer : public ::google::protobuf::Message {
 public:
  JoinSecurityCommandBuffer();
  virtual ~JoinSecurityCommandBuffer();

  JoinSecurityCommandBuffer(const JoinSecurityCommandBuffer& from);

  inline JoinSecurityCommandBuffer& operator=(const JoinSecurityCommandBuffer& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const JoinSecurityCommandBuffer& default_instance();

  void Swap(JoinSecurityCommandBuffer* other);

  // implements Message ----------------------------------------------

  JoinSecurityCommandBuffer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const JoinSecurityCommandBuffer& from);
  void MergeFrom(const JoinSecurityCommandBuffer& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:usx.geofactions.JoinSecurityCommandBuffer)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_SecurityCommandBuffer_2eproto();
  friend void protobuf_AssignDesc_SecurityCommandBuffer_2eproto();
  friend void protobuf_ShutdownFile_SecurityCommandBuffer_2eproto();

  void InitAsDefaultInstance();
  static JoinSecurityCommandBuffer* default_instance_;
};
// -------------------------------------------------------------------

class LeaveSecurityCommandBuffer : public ::google::protobuf::Message {
 public:
  LeaveSecurityCommandBuffer();
  virtual ~LeaveSecurityCommandBuffer();

  LeaveSecurityCommandBuffer(const LeaveSecurityCommandBuffer& from);

  inline LeaveSecurityCommandBuffer& operator=(const LeaveSecurityCommandBuffer& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LeaveSecurityCommandBuffer& default_instance();

  void Swap(LeaveSecurityCommandBuffer* other);

  // implements Message ----------------------------------------------

  LeaveSecurityCommandBuffer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LeaveSecurityCommandBuffer& from);
  void MergeFrom(const LeaveSecurityCommandBuffer& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string UUID = 1;
  inline bool has_uuid() const;
  inline void clear_uuid();
  static const int kUUIDFieldNumber = 1;
  inline const ::std::string& uuid() const;
  inline void set_uuid(const ::std::string& value);
  inline void set_uuid(const char* value);
  inline void set_uuid(const char* value, size_t size);
  inline ::std::string* mutable_uuid();
  inline ::std::string* release_uuid();
  inline void set_allocated_uuid(::std::string* uuid);

  // @@protoc_insertion_point(class_scope:usx.geofactions.LeaveSecurityCommandBuffer)
 private:
  inline void set_has_uuid();
  inline void clear_has_uuid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* uuid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_SecurityCommandBuffer_2eproto();
  friend void protobuf_AssignDesc_SecurityCommandBuffer_2eproto();
  friend void protobuf_ShutdownFile_SecurityCommandBuffer_2eproto();

  void InitAsDefaultInstance();
  static LeaveSecurityCommandBuffer* default_instance_;
};
// -------------------------------------------------------------------

class SecurityCommandBuffer : public ::google::protobuf::Message {
 public:
  SecurityCommandBuffer();
  virtual ~SecurityCommandBuffer();

  SecurityCommandBuffer(const SecurityCommandBuffer& from);

  inline SecurityCommandBuffer& operator=(const SecurityCommandBuffer& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SecurityCommandBuffer& default_instance();

  void Swap(SecurityCommandBuffer* other);

  // implements Message ----------------------------------------------

  SecurityCommandBuffer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SecurityCommandBuffer& from);
  void MergeFrom(const SecurityCommandBuffer& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef SecurityCommandBuffer_SecurityCommandBufferType SecurityCommandBufferType;
  static const SecurityCommandBufferType UNKNOWN = SecurityCommandBuffer_SecurityCommandBufferType_UNKNOWN;
  static const SecurityCommandBufferType JOIN = SecurityCommandBuffer_SecurityCommandBufferType_JOIN;
  static const SecurityCommandBufferType LEAVE = SecurityCommandBuffer_SecurityCommandBufferType_LEAVE;
  static inline bool SecurityCommandBufferType_IsValid(int value) {
    return SecurityCommandBuffer_SecurityCommandBufferType_IsValid(value);
  }
  static const SecurityCommandBufferType SecurityCommandBufferType_MIN =
    SecurityCommandBuffer_SecurityCommandBufferType_SecurityCommandBufferType_MIN;
  static const SecurityCommandBufferType SecurityCommandBufferType_MAX =
    SecurityCommandBuffer_SecurityCommandBufferType_SecurityCommandBufferType_MAX;
  static const int SecurityCommandBufferType_ARRAYSIZE =
    SecurityCommandBuffer_SecurityCommandBufferType_SecurityCommandBufferType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  SecurityCommandBufferType_descriptor() {
    return SecurityCommandBuffer_SecurityCommandBufferType_descriptor();
  }
  static inline const ::std::string& SecurityCommandBufferType_Name(SecurityCommandBufferType value) {
    return SecurityCommandBuffer_SecurityCommandBufferType_Name(value);
  }
  static inline bool SecurityCommandBufferType_Parse(const ::std::string& name,
      SecurityCommandBufferType* value) {
    return SecurityCommandBuffer_SecurityCommandBufferType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .usx.geofactions.SecurityCommandBuffer.SecurityCommandBufferType type = 1 [default = UNKNOWN];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::usx::geofactions::SecurityCommandBuffer_SecurityCommandBufferType type() const;
  inline void set_type(::usx::geofactions::SecurityCommandBuffer_SecurityCommandBufferType value);

  // optional string UUID = 2;
  inline bool has_uuid() const;
  inline void clear_uuid();
  static const int kUUIDFieldNumber = 2;
  inline const ::std::string& uuid() const;
  inline void set_uuid(const ::std::string& value);
  inline void set_uuid(const char* value);
  inline void set_uuid(const char* value, size_t size);
  inline ::std::string* mutable_uuid();
  inline ::std::string* release_uuid();
  inline void set_allocated_uuid(::std::string* uuid);

  // optional .usx.geofactions.JoinSecurityCommandBuffer joinSecurityCommandBuffer = 3;
  inline bool has_joinsecuritycommandbuffer() const;
  inline void clear_joinsecuritycommandbuffer();
  static const int kJoinSecurityCommandBufferFieldNumber = 3;
  inline const ::usx::geofactions::JoinSecurityCommandBuffer& joinsecuritycommandbuffer() const;
  inline ::usx::geofactions::JoinSecurityCommandBuffer* mutable_joinsecuritycommandbuffer();
  inline ::usx::geofactions::JoinSecurityCommandBuffer* release_joinsecuritycommandbuffer();
  inline void set_allocated_joinsecuritycommandbuffer(::usx::geofactions::JoinSecurityCommandBuffer* joinsecuritycommandbuffer);

  // optional .usx.geofactions.LeaveSecurityCommandBuffer leaveSecurityCommandBuffer = 4;
  inline bool has_leavesecuritycommandbuffer() const;
  inline void clear_leavesecuritycommandbuffer();
  static const int kLeaveSecurityCommandBufferFieldNumber = 4;
  inline const ::usx::geofactions::LeaveSecurityCommandBuffer& leavesecuritycommandbuffer() const;
  inline ::usx::geofactions::LeaveSecurityCommandBuffer* mutable_leavesecuritycommandbuffer();
  inline ::usx::geofactions::LeaveSecurityCommandBuffer* release_leavesecuritycommandbuffer();
  inline void set_allocated_leavesecuritycommandbuffer(::usx::geofactions::LeaveSecurityCommandBuffer* leavesecuritycommandbuffer);

  // @@protoc_insertion_point(class_scope:usx.geofactions.SecurityCommandBuffer)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_uuid();
  inline void clear_has_uuid();
  inline void set_has_joinsecuritycommandbuffer();
  inline void clear_has_joinsecuritycommandbuffer();
  inline void set_has_leavesecuritycommandbuffer();
  inline void clear_has_leavesecuritycommandbuffer();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* uuid_;
  ::usx::geofactions::JoinSecurityCommandBuffer* joinsecuritycommandbuffer_;
  ::usx::geofactions::LeaveSecurityCommandBuffer* leavesecuritycommandbuffer_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_SecurityCommandBuffer_2eproto();
  friend void protobuf_AssignDesc_SecurityCommandBuffer_2eproto();
  friend void protobuf_ShutdownFile_SecurityCommandBuffer_2eproto();

  void InitAsDefaultInstance();
  static SecurityCommandBuffer* default_instance_;
};
// ===================================================================


// ===================================================================

// JoinSecurityCommandBuffer

// -------------------------------------------------------------------

// LeaveSecurityCommandBuffer

// required string UUID = 1;
inline bool LeaveSecurityCommandBuffer::has_uuid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LeaveSecurityCommandBuffer::set_has_uuid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LeaveSecurityCommandBuffer::clear_has_uuid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LeaveSecurityCommandBuffer::clear_uuid() {
  if (uuid_ != &::google::protobuf::internal::kEmptyString) {
    uuid_->clear();
  }
  clear_has_uuid();
}
inline const ::std::string& LeaveSecurityCommandBuffer::uuid() const {
  return *uuid_;
}
inline void LeaveSecurityCommandBuffer::set_uuid(const ::std::string& value) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(value);
}
inline void LeaveSecurityCommandBuffer::set_uuid(const char* value) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(value);
}
inline void LeaveSecurityCommandBuffer::set_uuid(const char* value, size_t size) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LeaveSecurityCommandBuffer::mutable_uuid() {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  return uuid_;
}
inline ::std::string* LeaveSecurityCommandBuffer::release_uuid() {
  clear_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = uuid_;
    uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LeaveSecurityCommandBuffer::set_allocated_uuid(::std::string* uuid) {
  if (uuid_ != &::google::protobuf::internal::kEmptyString) {
    delete uuid_;
  }
  if (uuid) {
    set_has_uuid();
    uuid_ = uuid;
  } else {
    clear_has_uuid();
    uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// SecurityCommandBuffer

// required .usx.geofactions.SecurityCommandBuffer.SecurityCommandBufferType type = 1 [default = UNKNOWN];
inline bool SecurityCommandBuffer::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SecurityCommandBuffer::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SecurityCommandBuffer::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SecurityCommandBuffer::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::usx::geofactions::SecurityCommandBuffer_SecurityCommandBufferType SecurityCommandBuffer::type() const {
  return static_cast< ::usx::geofactions::SecurityCommandBuffer_SecurityCommandBufferType >(type_);
}
inline void SecurityCommandBuffer::set_type(::usx::geofactions::SecurityCommandBuffer_SecurityCommandBufferType value) {
  assert(::usx::geofactions::SecurityCommandBuffer_SecurityCommandBufferType_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional string UUID = 2;
inline bool SecurityCommandBuffer::has_uuid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SecurityCommandBuffer::set_has_uuid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SecurityCommandBuffer::clear_has_uuid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SecurityCommandBuffer::clear_uuid() {
  if (uuid_ != &::google::protobuf::internal::kEmptyString) {
    uuid_->clear();
  }
  clear_has_uuid();
}
inline const ::std::string& SecurityCommandBuffer::uuid() const {
  return *uuid_;
}
inline void SecurityCommandBuffer::set_uuid(const ::std::string& value) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(value);
}
inline void SecurityCommandBuffer::set_uuid(const char* value) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(value);
}
inline void SecurityCommandBuffer::set_uuid(const char* value, size_t size) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SecurityCommandBuffer::mutable_uuid() {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  return uuid_;
}
inline ::std::string* SecurityCommandBuffer::release_uuid() {
  clear_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = uuid_;
    uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SecurityCommandBuffer::set_allocated_uuid(::std::string* uuid) {
  if (uuid_ != &::google::protobuf::internal::kEmptyString) {
    delete uuid_;
  }
  if (uuid) {
    set_has_uuid();
    uuid_ = uuid;
  } else {
    clear_has_uuid();
    uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .usx.geofactions.JoinSecurityCommandBuffer joinSecurityCommandBuffer = 3;
inline bool SecurityCommandBuffer::has_joinsecuritycommandbuffer() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SecurityCommandBuffer::set_has_joinsecuritycommandbuffer() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SecurityCommandBuffer::clear_has_joinsecuritycommandbuffer() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SecurityCommandBuffer::clear_joinsecuritycommandbuffer() {
  if (joinsecuritycommandbuffer_ != NULL) joinsecuritycommandbuffer_->::usx::geofactions::JoinSecurityCommandBuffer::Clear();
  clear_has_joinsecuritycommandbuffer();
}
inline const ::usx::geofactions::JoinSecurityCommandBuffer& SecurityCommandBuffer::joinsecuritycommandbuffer() const {
  return joinsecuritycommandbuffer_ != NULL ? *joinsecuritycommandbuffer_ : *default_instance_->joinsecuritycommandbuffer_;
}
inline ::usx::geofactions::JoinSecurityCommandBuffer* SecurityCommandBuffer::mutable_joinsecuritycommandbuffer() {
  set_has_joinsecuritycommandbuffer();
  if (joinsecuritycommandbuffer_ == NULL) joinsecuritycommandbuffer_ = new ::usx::geofactions::JoinSecurityCommandBuffer;
  return joinsecuritycommandbuffer_;
}
inline ::usx::geofactions::JoinSecurityCommandBuffer* SecurityCommandBuffer::release_joinsecuritycommandbuffer() {
  clear_has_joinsecuritycommandbuffer();
  ::usx::geofactions::JoinSecurityCommandBuffer* temp = joinsecuritycommandbuffer_;
  joinsecuritycommandbuffer_ = NULL;
  return temp;
}
inline void SecurityCommandBuffer::set_allocated_joinsecuritycommandbuffer(::usx::geofactions::JoinSecurityCommandBuffer* joinsecuritycommandbuffer) {
  delete joinsecuritycommandbuffer_;
  joinsecuritycommandbuffer_ = joinsecuritycommandbuffer;
  if (joinsecuritycommandbuffer) {
    set_has_joinsecuritycommandbuffer();
  } else {
    clear_has_joinsecuritycommandbuffer();
  }
}

// optional .usx.geofactions.LeaveSecurityCommandBuffer leaveSecurityCommandBuffer = 4;
inline bool SecurityCommandBuffer::has_leavesecuritycommandbuffer() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SecurityCommandBuffer::set_has_leavesecuritycommandbuffer() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SecurityCommandBuffer::clear_has_leavesecuritycommandbuffer() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SecurityCommandBuffer::clear_leavesecuritycommandbuffer() {
  if (leavesecuritycommandbuffer_ != NULL) leavesecuritycommandbuffer_->::usx::geofactions::LeaveSecurityCommandBuffer::Clear();
  clear_has_leavesecuritycommandbuffer();
}
inline const ::usx::geofactions::LeaveSecurityCommandBuffer& SecurityCommandBuffer::leavesecuritycommandbuffer() const {
  return leavesecuritycommandbuffer_ != NULL ? *leavesecuritycommandbuffer_ : *default_instance_->leavesecuritycommandbuffer_;
}
inline ::usx::geofactions::LeaveSecurityCommandBuffer* SecurityCommandBuffer::mutable_leavesecuritycommandbuffer() {
  set_has_leavesecuritycommandbuffer();
  if (leavesecuritycommandbuffer_ == NULL) leavesecuritycommandbuffer_ = new ::usx::geofactions::LeaveSecurityCommandBuffer;
  return leavesecuritycommandbuffer_;
}
inline ::usx::geofactions::LeaveSecurityCommandBuffer* SecurityCommandBuffer::release_leavesecuritycommandbuffer() {
  clear_has_leavesecuritycommandbuffer();
  ::usx::geofactions::LeaveSecurityCommandBuffer* temp = leavesecuritycommandbuffer_;
  leavesecuritycommandbuffer_ = NULL;
  return temp;
}
inline void SecurityCommandBuffer::set_allocated_leavesecuritycommandbuffer(::usx::geofactions::LeaveSecurityCommandBuffer* leavesecuritycommandbuffer) {
  delete leavesecuritycommandbuffer_;
  leavesecuritycommandbuffer_ = leavesecuritycommandbuffer;
  if (leavesecuritycommandbuffer) {
    set_has_leavesecuritycommandbuffer();
  } else {
    clear_has_leavesecuritycommandbuffer();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace geofactions
}  // namespace usx

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::usx::geofactions::SecurityCommandBuffer_SecurityCommandBufferType>() {
  return ::usx::geofactions::SecurityCommandBuffer_SecurityCommandBufferType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SecurityCommandBuffer_2eproto__INCLUDED
