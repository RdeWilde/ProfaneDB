// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: profanedb/protobuf/db.proto

#ifndef PROTOBUF_profanedb_2fprotobuf_2fdb_2eproto__INCLUDED
#define PROTOBUF_profanedb_2fprotobuf_2fdb_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
#include "profanedb/protobuf/storage.pb.h"
// @@protoc_insertion_point(includes)
namespace google {
namespace protobuf {
class Any;
class AnyDefaultTypeInternal;
extern AnyDefaultTypeInternal _Any_default_instance_;
}  // namespace protobuf
}  // namespace google
namespace profanedb {
namespace protobuf {
class DelReq;
class DelReqDefaultTypeInternal;
extern DelReqDefaultTypeInternal _DelReq_default_instance_;
class DelResp;
class DelRespDefaultTypeInternal;
extern DelRespDefaultTypeInternal _DelResp_default_instance_;
class GetReq;
class GetReqDefaultTypeInternal;
extern GetReqDefaultTypeInternal _GetReq_default_instance_;
class GetResp;
class GetRespDefaultTypeInternal;
extern GetRespDefaultTypeInternal _GetResp_default_instance_;
class Key;
class KeyDefaultTypeInternal;
extern KeyDefaultTypeInternal _Key_default_instance_;
class MessageTreeNode;
class MessageTreeNodeDefaultTypeInternal;
extern MessageTreeNodeDefaultTypeInternal _MessageTreeNode_default_instance_;
class PutReq;
class PutReqDefaultTypeInternal;
extern PutReqDefaultTypeInternal _PutReq_default_instance_;
class PutResp;
class PutRespDefaultTypeInternal;
extern PutRespDefaultTypeInternal _PutResp_default_instance_;
class StorableMessage;
class StorableMessageDefaultTypeInternal;
extern StorableMessageDefaultTypeInternal _StorableMessage_default_instance_;
}  // namespace protobuf
}  // namespace profanedb

namespace profanedb {
namespace protobuf {

namespace protobuf_profanedb_2fprotobuf_2fdb_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_profanedb_2fprotobuf_2fdb_2eproto

// ===================================================================

class GetReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:profanedb.protobuf.GetReq) */ {
 public:
  GetReq();
  virtual ~GetReq();

  GetReq(const GetReq& from);

  inline GetReq& operator=(const GetReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GetReq& default_instance();

  static inline const GetReq* internal_default_instance() {
    return reinterpret_cast<const GetReq*>(
               &_GetReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(GetReq* other);

  // implements Message ----------------------------------------------

  inline GetReq* New() const PROTOBUF_FINAL { return New(NULL); }

  GetReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GetReq& from);
  void MergeFrom(const GetReq& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(GetReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .profanedb.protobuf.Key key = 1;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::profanedb::protobuf::Key& key() const;
  ::profanedb::protobuf::Key* mutable_key();
  ::profanedb::protobuf::Key* release_key();
  void set_allocated_key(::profanedb::protobuf::Key* key);

  // @@protoc_insertion_point(class_scope:profanedb.protobuf.GetReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::profanedb::protobuf::Key* key_;
  mutable int _cached_size_;
  friend struct protobuf_profanedb_2fprotobuf_2fdb_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GetResp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:profanedb.protobuf.GetResp) */ {
 public:
  GetResp();
  virtual ~GetResp();

  GetResp(const GetResp& from);

  inline GetResp& operator=(const GetResp& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GetResp& default_instance();

  static inline const GetResp* internal_default_instance() {
    return reinterpret_cast<const GetResp*>(
               &_GetResp_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(GetResp* other);

  // implements Message ----------------------------------------------

  inline GetResp* New() const PROTOBUF_FINAL { return New(NULL); }

  GetResp* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GetResp& from);
  void MergeFrom(const GetResp& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(GetResp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .google.protobuf.Any message = 1;
  bool has_message() const;
  void clear_message();
  static const int kMessageFieldNumber = 1;
  const ::google::protobuf::Any& message() const;
  ::google::protobuf::Any* mutable_message();
  ::google::protobuf::Any* release_message();
  void set_allocated_message(::google::protobuf::Any* message);

  // @@protoc_insertion_point(class_scope:profanedb.protobuf.GetResp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::Any* message_;
  mutable int _cached_size_;
  friend struct protobuf_profanedb_2fprotobuf_2fdb_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PutReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:profanedb.protobuf.PutReq) */ {
 public:
  PutReq();
  virtual ~PutReq();

  PutReq(const PutReq& from);

  inline PutReq& operator=(const PutReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PutReq& default_instance();

  static inline const PutReq* internal_default_instance() {
    return reinterpret_cast<const PutReq*>(
               &_PutReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(PutReq* other);

  // implements Message ----------------------------------------------

  inline PutReq* New() const PROTOBUF_FINAL { return New(NULL); }

  PutReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PutReq& from);
  void MergeFrom(const PutReq& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(PutReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .google.protobuf.Any serializable = 1;
  bool has_serializable() const;
  void clear_serializable();
  static const int kSerializableFieldNumber = 1;
  const ::google::protobuf::Any& serializable() const;
  ::google::protobuf::Any* mutable_serializable();
  ::google::protobuf::Any* release_serializable();
  void set_allocated_serializable(::google::protobuf::Any* serializable);

  // @@protoc_insertion_point(class_scope:profanedb.protobuf.PutReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::Any* serializable_;
  mutable int _cached_size_;
  friend struct protobuf_profanedb_2fprotobuf_2fdb_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PutResp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:profanedb.protobuf.PutResp) */ {
 public:
  PutResp();
  virtual ~PutResp();

  PutResp(const PutResp& from);

  inline PutResp& operator=(const PutResp& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PutResp& default_instance();

  static inline const PutResp* internal_default_instance() {
    return reinterpret_cast<const PutResp*>(
               &_PutResp_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(PutResp* other);

  // implements Message ----------------------------------------------

  inline PutResp* New() const PROTOBUF_FINAL { return New(NULL); }

  PutResp* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PutResp& from);
  void MergeFrom(const PutResp& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(PutResp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .profanedb.protobuf.Key key = 1;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::profanedb::protobuf::Key& key() const;
  ::profanedb::protobuf::Key* mutable_key();
  ::profanedb::protobuf::Key* release_key();
  void set_allocated_key(::profanedb::protobuf::Key* key);

  // @@protoc_insertion_point(class_scope:profanedb.protobuf.PutResp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::profanedb::protobuf::Key* key_;
  mutable int _cached_size_;
  friend struct protobuf_profanedb_2fprotobuf_2fdb_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DelReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:profanedb.protobuf.DelReq) */ {
 public:
  DelReq();
  virtual ~DelReq();

  DelReq(const DelReq& from);

  inline DelReq& operator=(const DelReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DelReq& default_instance();

  static inline const DelReq* internal_default_instance() {
    return reinterpret_cast<const DelReq*>(
               &_DelReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(DelReq* other);

  // implements Message ----------------------------------------------

  inline DelReq* New() const PROTOBUF_FINAL { return New(NULL); }

  DelReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DelReq& from);
  void MergeFrom(const DelReq& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(DelReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .profanedb.protobuf.Key key = 1;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::profanedb::protobuf::Key& key() const;
  ::profanedb::protobuf::Key* mutable_key();
  ::profanedb::protobuf::Key* release_key();
  void set_allocated_key(::profanedb::protobuf::Key* key);

  // @@protoc_insertion_point(class_scope:profanedb.protobuf.DelReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::profanedb::protobuf::Key* key_;
  mutable int _cached_size_;
  friend struct protobuf_profanedb_2fprotobuf_2fdb_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DelResp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:profanedb.protobuf.DelResp) */ {
 public:
  DelResp();
  virtual ~DelResp();

  DelResp(const DelResp& from);

  inline DelResp& operator=(const DelResp& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DelResp& default_instance();

  static inline const DelResp* internal_default_instance() {
    return reinterpret_cast<const DelResp*>(
               &_DelResp_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    5;

  void Swap(DelResp* other);

  // implements Message ----------------------------------------------

  inline DelResp* New() const PROTOBUF_FINAL { return New(NULL); }

  DelResp* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DelResp& from);
  void MergeFrom(const DelResp& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(DelResp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:profanedb.protobuf.DelResp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable int _cached_size_;
  friend struct protobuf_profanedb_2fprotobuf_2fdb_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// GetReq

// .profanedb.protobuf.Key key = 1;
inline bool GetReq::has_key() const {
  return this != internal_default_instance() && key_ != NULL;
}
inline void GetReq::clear_key() {
  if (GetArenaNoVirtual() == NULL && key_ != NULL) delete key_;
  key_ = NULL;
}
inline const ::profanedb::protobuf::Key& GetReq::key() const {
  // @@protoc_insertion_point(field_get:profanedb.protobuf.GetReq.key)
  return key_ != NULL ? *key_
                         : *::profanedb::protobuf::Key::internal_default_instance();
}
inline ::profanedb::protobuf::Key* GetReq::mutable_key() {
  
  if (key_ == NULL) {
    key_ = new ::profanedb::protobuf::Key;
  }
  // @@protoc_insertion_point(field_mutable:profanedb.protobuf.GetReq.key)
  return key_;
}
inline ::profanedb::protobuf::Key* GetReq::release_key() {
  // @@protoc_insertion_point(field_release:profanedb.protobuf.GetReq.key)
  
  ::profanedb::protobuf::Key* temp = key_;
  key_ = NULL;
  return temp;
}
inline void GetReq::set_allocated_key(::profanedb::protobuf::Key* key) {
  delete key_;
  key_ = key;
  if (key) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:profanedb.protobuf.GetReq.key)
}

// -------------------------------------------------------------------

// GetResp

// .google.protobuf.Any message = 1;
inline bool GetResp::has_message() const {
  return this != internal_default_instance() && message_ != NULL;
}
inline void GetResp::clear_message() {
  if (GetArenaNoVirtual() == NULL && message_ != NULL) delete message_;
  message_ = NULL;
}
inline const ::google::protobuf::Any& GetResp::message() const {
  // @@protoc_insertion_point(field_get:profanedb.protobuf.GetResp.message)
  return message_ != NULL ? *message_
                         : *::google::protobuf::Any::internal_default_instance();
}
inline ::google::protobuf::Any* GetResp::mutable_message() {
  
  if (message_ == NULL) {
    message_ = new ::google::protobuf::Any;
  }
  // @@protoc_insertion_point(field_mutable:profanedb.protobuf.GetResp.message)
  return message_;
}
inline ::google::protobuf::Any* GetResp::release_message() {
  // @@protoc_insertion_point(field_release:profanedb.protobuf.GetResp.message)
  
  ::google::protobuf::Any* temp = message_;
  message_ = NULL;
  return temp;
}
inline void GetResp::set_allocated_message(::google::protobuf::Any* message) {
  delete message_;
  message_ = message;
  if (message) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:profanedb.protobuf.GetResp.message)
}

// -------------------------------------------------------------------

// PutReq

// .google.protobuf.Any serializable = 1;
inline bool PutReq::has_serializable() const {
  return this != internal_default_instance() && serializable_ != NULL;
}
inline void PutReq::clear_serializable() {
  if (GetArenaNoVirtual() == NULL && serializable_ != NULL) delete serializable_;
  serializable_ = NULL;
}
inline const ::google::protobuf::Any& PutReq::serializable() const {
  // @@protoc_insertion_point(field_get:profanedb.protobuf.PutReq.serializable)
  return serializable_ != NULL ? *serializable_
                         : *::google::protobuf::Any::internal_default_instance();
}
inline ::google::protobuf::Any* PutReq::mutable_serializable() {
  
  if (serializable_ == NULL) {
    serializable_ = new ::google::protobuf::Any;
  }
  // @@protoc_insertion_point(field_mutable:profanedb.protobuf.PutReq.serializable)
  return serializable_;
}
inline ::google::protobuf::Any* PutReq::release_serializable() {
  // @@protoc_insertion_point(field_release:profanedb.protobuf.PutReq.serializable)
  
  ::google::protobuf::Any* temp = serializable_;
  serializable_ = NULL;
  return temp;
}
inline void PutReq::set_allocated_serializable(::google::protobuf::Any* serializable) {
  delete serializable_;
  serializable_ = serializable;
  if (serializable) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:profanedb.protobuf.PutReq.serializable)
}

// -------------------------------------------------------------------

// PutResp

// .profanedb.protobuf.Key key = 1;
inline bool PutResp::has_key() const {
  return this != internal_default_instance() && key_ != NULL;
}
inline void PutResp::clear_key() {
  if (GetArenaNoVirtual() == NULL && key_ != NULL) delete key_;
  key_ = NULL;
}
inline const ::profanedb::protobuf::Key& PutResp::key() const {
  // @@protoc_insertion_point(field_get:profanedb.protobuf.PutResp.key)
  return key_ != NULL ? *key_
                         : *::profanedb::protobuf::Key::internal_default_instance();
}
inline ::profanedb::protobuf::Key* PutResp::mutable_key() {
  
  if (key_ == NULL) {
    key_ = new ::profanedb::protobuf::Key;
  }
  // @@protoc_insertion_point(field_mutable:profanedb.protobuf.PutResp.key)
  return key_;
}
inline ::profanedb::protobuf::Key* PutResp::release_key() {
  // @@protoc_insertion_point(field_release:profanedb.protobuf.PutResp.key)
  
  ::profanedb::protobuf::Key* temp = key_;
  key_ = NULL;
  return temp;
}
inline void PutResp::set_allocated_key(::profanedb::protobuf::Key* key) {
  delete key_;
  key_ = key;
  if (key) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:profanedb.protobuf.PutResp.key)
}

// -------------------------------------------------------------------

// DelReq

// .profanedb.protobuf.Key key = 1;
inline bool DelReq::has_key() const {
  return this != internal_default_instance() && key_ != NULL;
}
inline void DelReq::clear_key() {
  if (GetArenaNoVirtual() == NULL && key_ != NULL) delete key_;
  key_ = NULL;
}
inline const ::profanedb::protobuf::Key& DelReq::key() const {
  // @@protoc_insertion_point(field_get:profanedb.protobuf.DelReq.key)
  return key_ != NULL ? *key_
                         : *::profanedb::protobuf::Key::internal_default_instance();
}
inline ::profanedb::protobuf::Key* DelReq::mutable_key() {
  
  if (key_ == NULL) {
    key_ = new ::profanedb::protobuf::Key;
  }
  // @@protoc_insertion_point(field_mutable:profanedb.protobuf.DelReq.key)
  return key_;
}
inline ::profanedb::protobuf::Key* DelReq::release_key() {
  // @@protoc_insertion_point(field_release:profanedb.protobuf.DelReq.key)
  
  ::profanedb::protobuf::Key* temp = key_;
  key_ = NULL;
  return temp;
}
inline void DelReq::set_allocated_key(::profanedb::protobuf::Key* key) {
  delete key_;
  key_ = key;
  if (key) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:profanedb.protobuf.DelReq.key)
}

// -------------------------------------------------------------------

// DelResp

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace protobuf
}  // namespace profanedb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_profanedb_2fprotobuf_2fdb_2eproto__INCLUDED
