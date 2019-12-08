// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/examples/proto/examples.proto

#ifndef PROTOBUF_cyber_2fexamples_2fproto_2fexamples_2eproto__INCLUDED
#define PROTOBUF_cyber_2fexamples_2fproto_2fexamples_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)
namespace apollo {
namespace cyber {
namespace examples {
namespace proto {
class Chatter;
class ChatterDefaultTypeInternal;
extern ChatterDefaultTypeInternal _Chatter_default_instance_;
class Driver;
class DriverDefaultTypeInternal;
extern DriverDefaultTypeInternal _Driver_default_instance_;
class SamplesTest1;
class SamplesTest1DefaultTypeInternal;
extern SamplesTest1DefaultTypeInternal _SamplesTest1_default_instance_;
}  // namespace proto
}  // namespace examples
}  // namespace cyber
}  // namespace apollo

namespace apollo {
namespace cyber {
namespace examples {
namespace proto {

namespace protobuf_cyber_2fexamples_2fproto_2fexamples_2eproto {
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
}  // namespace protobuf_cyber_2fexamples_2fproto_2fexamples_2eproto

// ===================================================================

class SamplesTest1 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.examples.proto.SamplesTest1) */ {
 public:
  SamplesTest1();
  virtual ~SamplesTest1();

  SamplesTest1(const SamplesTest1& from);

  inline SamplesTest1& operator=(const SamplesTest1& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SamplesTest1& default_instance();

  static inline const SamplesTest1* internal_default_instance() {
    return reinterpret_cast<const SamplesTest1*>(
               &_SamplesTest1_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SamplesTest1* other);

  // implements Message ----------------------------------------------

  inline SamplesTest1* New() const PROTOBUF_FINAL { return New(NULL); }

  SamplesTest1* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SamplesTest1& from);
  void MergeFrom(const SamplesTest1& from);
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
  void InternalSwap(SamplesTest1* other);
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

  // optional string class_name = 1;
  bool has_class_name() const;
  void clear_class_name();
  static const int kClassNameFieldNumber = 1;
  const ::std::string& class_name() const;
  void set_class_name(const ::std::string& value);
  #if LANG_CXX11
  void set_class_name(::std::string&& value);
  #endif
  void set_class_name(const char* value);
  void set_class_name(const char* value, size_t size);
  ::std::string* mutable_class_name();
  ::std::string* release_class_name();
  void set_allocated_class_name(::std::string* class_name);

  // optional string case_name = 2;
  bool has_case_name() const;
  void clear_case_name();
  static const int kCaseNameFieldNumber = 2;
  const ::std::string& case_name() const;
  void set_case_name(const ::std::string& value);
  #if LANG_CXX11
  void set_case_name(::std::string&& value);
  #endif
  void set_case_name(const char* value);
  void set_case_name(const char* value, size_t size);
  ::std::string* mutable_case_name();
  ::std::string* release_case_name();
  void set_allocated_case_name(::std::string* case_name);

  // @@protoc_insertion_point(class_scope:apollo.cyber.examples.proto.SamplesTest1)
 private:
  void set_has_class_name();
  void clear_has_class_name();
  void set_has_case_name();
  void clear_has_case_name();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr class_name_;
  ::google::protobuf::internal::ArenaStringPtr case_name_;
  friend struct protobuf_cyber_2fexamples_2fproto_2fexamples_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Chatter : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.examples.proto.Chatter) */ {
 public:
  Chatter();
  virtual ~Chatter();

  Chatter(const Chatter& from);

  inline Chatter& operator=(const Chatter& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Chatter& default_instance();

  static inline const Chatter* internal_default_instance() {
    return reinterpret_cast<const Chatter*>(
               &_Chatter_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Chatter* other);

  // implements Message ----------------------------------------------

  inline Chatter* New() const PROTOBUF_FINAL { return New(NULL); }

  Chatter* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Chatter& from);
  void MergeFrom(const Chatter& from);
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
  void InternalSwap(Chatter* other);
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

  // optional bytes content = 4;
  bool has_content() const;
  void clear_content();
  static const int kContentFieldNumber = 4;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  #if LANG_CXX11
  void set_content(::std::string&& value);
  #endif
  void set_content(const char* value);
  void set_content(const void* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // optional uint64 timestamp = 1;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  ::google::protobuf::uint64 timestamp() const;
  void set_timestamp(::google::protobuf::uint64 value);

  // optional uint64 lidar_timestamp = 2;
  bool has_lidar_timestamp() const;
  void clear_lidar_timestamp();
  static const int kLidarTimestampFieldNumber = 2;
  ::google::protobuf::uint64 lidar_timestamp() const;
  void set_lidar_timestamp(::google::protobuf::uint64 value);

  // optional uint64 seq = 3;
  bool has_seq() const;
  void clear_seq();
  static const int kSeqFieldNumber = 3;
  ::google::protobuf::uint64 seq() const;
  void set_seq(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:apollo.cyber.examples.proto.Chatter)
 private:
  void set_has_timestamp();
  void clear_has_timestamp();
  void set_has_lidar_timestamp();
  void clear_has_lidar_timestamp();
  void set_has_seq();
  void clear_has_seq();
  void set_has_content();
  void clear_has_content();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  ::google::protobuf::uint64 timestamp_;
  ::google::protobuf::uint64 lidar_timestamp_;
  ::google::protobuf::uint64 seq_;
  friend struct protobuf_cyber_2fexamples_2fproto_2fexamples_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Driver : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.examples.proto.Driver) */ {
 public:
  Driver();
  virtual ~Driver();

  Driver(const Driver& from);

  inline Driver& operator=(const Driver& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Driver& default_instance();

  static inline const Driver* internal_default_instance() {
    return reinterpret_cast<const Driver*>(
               &_Driver_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Driver* other);

  // implements Message ----------------------------------------------

  inline Driver* New() const PROTOBUF_FINAL { return New(NULL); }

  Driver* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Driver& from);
  void MergeFrom(const Driver& from);
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
  void InternalSwap(Driver* other);
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

  // optional string content = 1;
  bool has_content() const;
  void clear_content();
  static const int kContentFieldNumber = 1;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  #if LANG_CXX11
  void set_content(::std::string&& value);
  #endif
  void set_content(const char* value);
  void set_content(const char* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // optional uint64 msg_id = 2;
  bool has_msg_id() const;
  void clear_msg_id();
  static const int kMsgIdFieldNumber = 2;
  ::google::protobuf::uint64 msg_id() const;
  void set_msg_id(::google::protobuf::uint64 value);

  // optional uint64 timestamp = 3;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 3;
  ::google::protobuf::uint64 timestamp() const;
  void set_timestamp(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:apollo.cyber.examples.proto.Driver)
 private:
  void set_has_content();
  void clear_has_content();
  void set_has_msg_id();
  void clear_has_msg_id();
  void set_has_timestamp();
  void clear_has_timestamp();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  ::google::protobuf::uint64 msg_id_;
  ::google::protobuf::uint64 timestamp_;
  friend struct protobuf_cyber_2fexamples_2fproto_2fexamples_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SamplesTest1

// optional string class_name = 1;
inline bool SamplesTest1::has_class_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SamplesTest1::set_has_class_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SamplesTest1::clear_has_class_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SamplesTest1::clear_class_name() {
  class_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_class_name();
}
inline const ::std::string& SamplesTest1::class_name() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.examples.proto.SamplesTest1.class_name)
  return class_name_.GetNoArena();
}
inline void SamplesTest1::set_class_name(const ::std::string& value) {
  set_has_class_name();
  class_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.examples.proto.SamplesTest1.class_name)
}
#if LANG_CXX11
inline void SamplesTest1::set_class_name(::std::string&& value) {
  set_has_class_name();
  class_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.examples.proto.SamplesTest1.class_name)
}
#endif
inline void SamplesTest1::set_class_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_class_name();
  class_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.examples.proto.SamplesTest1.class_name)
}
inline void SamplesTest1::set_class_name(const char* value, size_t size) {
  set_has_class_name();
  class_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.examples.proto.SamplesTest1.class_name)
}
inline ::std::string* SamplesTest1::mutable_class_name() {
  set_has_class_name();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.examples.proto.SamplesTest1.class_name)
  return class_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SamplesTest1::release_class_name() {
  // @@protoc_insertion_point(field_release:apollo.cyber.examples.proto.SamplesTest1.class_name)
  clear_has_class_name();
  return class_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SamplesTest1::set_allocated_class_name(::std::string* class_name) {
  if (class_name != NULL) {
    set_has_class_name();
  } else {
    clear_has_class_name();
  }
  class_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), class_name);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.examples.proto.SamplesTest1.class_name)
}

// optional string case_name = 2;
inline bool SamplesTest1::has_case_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SamplesTest1::set_has_case_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SamplesTest1::clear_has_case_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SamplesTest1::clear_case_name() {
  case_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_case_name();
}
inline const ::std::string& SamplesTest1::case_name() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.examples.proto.SamplesTest1.case_name)
  return case_name_.GetNoArena();
}
inline void SamplesTest1::set_case_name(const ::std::string& value) {
  set_has_case_name();
  case_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.examples.proto.SamplesTest1.case_name)
}
#if LANG_CXX11
inline void SamplesTest1::set_case_name(::std::string&& value) {
  set_has_case_name();
  case_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.examples.proto.SamplesTest1.case_name)
}
#endif
inline void SamplesTest1::set_case_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_case_name();
  case_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.examples.proto.SamplesTest1.case_name)
}
inline void SamplesTest1::set_case_name(const char* value, size_t size) {
  set_has_case_name();
  case_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.examples.proto.SamplesTest1.case_name)
}
inline ::std::string* SamplesTest1::mutable_case_name() {
  set_has_case_name();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.examples.proto.SamplesTest1.case_name)
  return case_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SamplesTest1::release_case_name() {
  // @@protoc_insertion_point(field_release:apollo.cyber.examples.proto.SamplesTest1.case_name)
  clear_has_case_name();
  return case_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SamplesTest1::set_allocated_case_name(::std::string* case_name) {
  if (case_name != NULL) {
    set_has_case_name();
  } else {
    clear_has_case_name();
  }
  case_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), case_name);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.examples.proto.SamplesTest1.case_name)
}

// -------------------------------------------------------------------

// Chatter

// optional uint64 timestamp = 1;
inline bool Chatter::has_timestamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Chatter::set_has_timestamp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Chatter::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Chatter::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::uint64 Chatter::timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.examples.proto.Chatter.timestamp)
  return timestamp_;
}
inline void Chatter::set_timestamp(::google::protobuf::uint64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.examples.proto.Chatter.timestamp)
}

// optional uint64 lidar_timestamp = 2;
inline bool Chatter::has_lidar_timestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Chatter::set_has_lidar_timestamp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Chatter::clear_has_lidar_timestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Chatter::clear_lidar_timestamp() {
  lidar_timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_lidar_timestamp();
}
inline ::google::protobuf::uint64 Chatter::lidar_timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.examples.proto.Chatter.lidar_timestamp)
  return lidar_timestamp_;
}
inline void Chatter::set_lidar_timestamp(::google::protobuf::uint64 value) {
  set_has_lidar_timestamp();
  lidar_timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.examples.proto.Chatter.lidar_timestamp)
}

// optional uint64 seq = 3;
inline bool Chatter::has_seq() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Chatter::set_has_seq() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Chatter::clear_has_seq() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Chatter::clear_seq() {
  seq_ = GOOGLE_ULONGLONG(0);
  clear_has_seq();
}
inline ::google::protobuf::uint64 Chatter::seq() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.examples.proto.Chatter.seq)
  return seq_;
}
inline void Chatter::set_seq(::google::protobuf::uint64 value) {
  set_has_seq();
  seq_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.examples.proto.Chatter.seq)
}

// optional bytes content = 4;
inline bool Chatter::has_content() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Chatter::set_has_content() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Chatter::clear_has_content() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Chatter::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_content();
}
inline const ::std::string& Chatter::content() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.examples.proto.Chatter.content)
  return content_.GetNoArena();
}
inline void Chatter::set_content(const ::std::string& value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.examples.proto.Chatter.content)
}
#if LANG_CXX11
inline void Chatter::set_content(::std::string&& value) {
  set_has_content();
  content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.examples.proto.Chatter.content)
}
#endif
inline void Chatter::set_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.examples.proto.Chatter.content)
}
inline void Chatter::set_content(const void* value, size_t size) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.examples.proto.Chatter.content)
}
inline ::std::string* Chatter::mutable_content() {
  set_has_content();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.examples.proto.Chatter.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Chatter::release_content() {
  // @@protoc_insertion_point(field_release:apollo.cyber.examples.proto.Chatter.content)
  clear_has_content();
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Chatter::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    set_has_content();
  } else {
    clear_has_content();
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.examples.proto.Chatter.content)
}

// -------------------------------------------------------------------

// Driver

// optional string content = 1;
inline bool Driver::has_content() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Driver::set_has_content() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Driver::clear_has_content() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Driver::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_content();
}
inline const ::std::string& Driver::content() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.examples.proto.Driver.content)
  return content_.GetNoArena();
}
inline void Driver::set_content(const ::std::string& value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.examples.proto.Driver.content)
}
#if LANG_CXX11
inline void Driver::set_content(::std::string&& value) {
  set_has_content();
  content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.examples.proto.Driver.content)
}
#endif
inline void Driver::set_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.examples.proto.Driver.content)
}
inline void Driver::set_content(const char* value, size_t size) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.examples.proto.Driver.content)
}
inline ::std::string* Driver::mutable_content() {
  set_has_content();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.examples.proto.Driver.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Driver::release_content() {
  // @@protoc_insertion_point(field_release:apollo.cyber.examples.proto.Driver.content)
  clear_has_content();
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Driver::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    set_has_content();
  } else {
    clear_has_content();
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.examples.proto.Driver.content)
}

// optional uint64 msg_id = 2;
inline bool Driver::has_msg_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Driver::set_has_msg_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Driver::clear_has_msg_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Driver::clear_msg_id() {
  msg_id_ = GOOGLE_ULONGLONG(0);
  clear_has_msg_id();
}
inline ::google::protobuf::uint64 Driver::msg_id() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.examples.proto.Driver.msg_id)
  return msg_id_;
}
inline void Driver::set_msg_id(::google::protobuf::uint64 value) {
  set_has_msg_id();
  msg_id_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.examples.proto.Driver.msg_id)
}

// optional uint64 timestamp = 3;
inline bool Driver::has_timestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Driver::set_has_timestamp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Driver::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Driver::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::uint64 Driver::timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.examples.proto.Driver.timestamp)
  return timestamp_;
}
inline void Driver::set_timestamp(::google::protobuf::uint64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.examples.proto.Driver.timestamp)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace examples
}  // namespace cyber
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cyber_2fexamples_2fproto_2fexamples_2eproto__INCLUDED