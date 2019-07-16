// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/run_mode_conf.proto

#ifndef PROTOBUF_cyber_2fproto_2frun_5fmode_5fconf_2eproto__INCLUDED
#define PROTOBUF_cyber_2fproto_2frun_5fmode_5fconf_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace apollo {
namespace cyber {
namespace proto {
class RunModeConf;
class RunModeConfDefaultTypeInternal;
extern RunModeConfDefaultTypeInternal _RunModeConf_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo

namespace apollo {
namespace cyber {
namespace proto {

namespace protobuf_cyber_2fproto_2frun_5fmode_5fconf_2eproto {
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
}  // namespace protobuf_cyber_2fproto_2frun_5fmode_5fconf_2eproto

enum RunMode {
  MODE_REALITY = 0,
  MODE_SIMULATION = 1
};
bool RunMode_IsValid(int value);
const RunMode RunMode_MIN = MODE_REALITY;
const RunMode RunMode_MAX = MODE_SIMULATION;
const int RunMode_ARRAYSIZE = RunMode_MAX + 1;

const ::google::protobuf::EnumDescriptor* RunMode_descriptor();
inline const ::std::string& RunMode_Name(RunMode value) {
  return ::google::protobuf::internal::NameOfEnum(
    RunMode_descriptor(), value);
}
inline bool RunMode_Parse(
    const ::std::string& name, RunMode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RunMode>(
    RunMode_descriptor(), name, value);
}
// ===================================================================

class RunModeConf : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.RunModeConf) */ {
 public:
  RunModeConf();
  virtual ~RunModeConf();

  RunModeConf(const RunModeConf& from);

  inline RunModeConf& operator=(const RunModeConf& from) {
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
  static const RunModeConf& default_instance();

  static inline const RunModeConf* internal_default_instance() {
    return reinterpret_cast<const RunModeConf*>(
               &_RunModeConf_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(RunModeConf* other);

  // implements Message ----------------------------------------------

  inline RunModeConf* New() const PROTOBUF_FINAL { return New(NULL); }

  RunModeConf* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RunModeConf& from);
  void MergeFrom(const RunModeConf& from);
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
  void InternalSwap(RunModeConf* other);
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

  // optional .apollo.cyber.proto.RunMode run_mode = 1 [default = MODE_REALITY];
  bool has_run_mode() const;
  void clear_run_mode();
  static const int kRunModeFieldNumber = 1;
  ::apollo::cyber::proto::RunMode run_mode() const;
  void set_run_mode(::apollo::cyber::proto::RunMode value);

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.RunModeConf)
 private:
  void set_has_run_mode();
  void clear_has_run_mode();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  int run_mode_;
  friend struct protobuf_cyber_2fproto_2frun_5fmode_5fconf_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// RunModeConf

// optional .apollo.cyber.proto.RunMode run_mode = 1 [default = MODE_REALITY];
inline bool RunModeConf::has_run_mode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RunModeConf::set_has_run_mode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RunModeConf::clear_has_run_mode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RunModeConf::clear_run_mode() {
  run_mode_ = 0;
  clear_has_run_mode();
}
inline ::apollo::cyber::proto::RunMode RunModeConf::run_mode() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.RunModeConf.run_mode)
  return static_cast< ::apollo::cyber::proto::RunMode >(run_mode_);
}
inline void RunModeConf::set_run_mode(::apollo::cyber::proto::RunMode value) {
  assert(::apollo::cyber::proto::RunMode_IsValid(value));
  set_has_run_mode();
  run_mode_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.RunModeConf.run_mode)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace cyber
}  // namespace apollo

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::apollo::cyber::proto::RunMode> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::RunMode>() {
  return ::apollo::cyber::proto::RunMode_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cyber_2fproto_2frun_5fmode_5fconf_2eproto__INCLUDED