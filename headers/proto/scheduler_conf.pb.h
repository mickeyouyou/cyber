// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/scheduler_conf.proto

#ifndef PROTOBUF_cyber_2fproto_2fscheduler_5fconf_2eproto__INCLUDED
#define PROTOBUF_cyber_2fproto_2fscheduler_5fconf_2eproto__INCLUDED

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
#include "cyber/proto/classic_conf.pb.h"
#include "cyber/proto/choreography_conf.pb.h"
// @@protoc_insertion_point(includes)
namespace apollo {
namespace cyber {
namespace proto {
class ChoreographyConf;
class ChoreographyConfDefaultTypeInternal;
extern ChoreographyConfDefaultTypeInternal _ChoreographyConf_default_instance_;
class ChoreographyTask;
class ChoreographyTaskDefaultTypeInternal;
extern ChoreographyTaskDefaultTypeInternal _ChoreographyTask_default_instance_;
class ClassicConf;
class ClassicConfDefaultTypeInternal;
extern ClassicConfDefaultTypeInternal _ClassicConf_default_instance_;
class ClassicTask;
class ClassicTaskDefaultTypeInternal;
extern ClassicTaskDefaultTypeInternal _ClassicTask_default_instance_;
class InnerThread;
class InnerThreadDefaultTypeInternal;
extern InnerThreadDefaultTypeInternal _InnerThread_default_instance_;
class SchedGroup;
class SchedGroupDefaultTypeInternal;
extern SchedGroupDefaultTypeInternal _SchedGroup_default_instance_;
class SchedulerConf;
class SchedulerConfDefaultTypeInternal;
extern SchedulerConfDefaultTypeInternal _SchedulerConf_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo

namespace apollo {
namespace cyber {
namespace proto {

namespace protobuf_cyber_2fproto_2fscheduler_5fconf_2eproto {
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
}  // namespace protobuf_cyber_2fproto_2fscheduler_5fconf_2eproto

// ===================================================================

class InnerThread : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.InnerThread) */ {
 public:
  InnerThread();
  virtual ~InnerThread();

  InnerThread(const InnerThread& from);

  inline InnerThread& operator=(const InnerThread& from) {
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
  static const InnerThread& default_instance();

  static inline const InnerThread* internal_default_instance() {
    return reinterpret_cast<const InnerThread*>(
               &_InnerThread_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(InnerThread* other);

  // implements Message ----------------------------------------------

  inline InnerThread* New() const PROTOBUF_FINAL { return New(NULL); }

  InnerThread* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const InnerThread& from);
  void MergeFrom(const InnerThread& from);
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
  void InternalSwap(InnerThread* other);
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

  // optional string name = 1;
  bool has_name() const;
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

  // optional string cpuset = 2;
  bool has_cpuset() const;
  void clear_cpuset();
  static const int kCpusetFieldNumber = 2;
  const ::std::string& cpuset() const;
  void set_cpuset(const ::std::string& value);
  #if LANG_CXX11
  void set_cpuset(::std::string&& value);
  #endif
  void set_cpuset(const char* value);
  void set_cpuset(const char* value, size_t size);
  ::std::string* mutable_cpuset();
  ::std::string* release_cpuset();
  void set_allocated_cpuset(::std::string* cpuset);

  // optional string policy = 3;
  bool has_policy() const;
  void clear_policy();
  static const int kPolicyFieldNumber = 3;
  const ::std::string& policy() const;
  void set_policy(const ::std::string& value);
  #if LANG_CXX11
  void set_policy(::std::string&& value);
  #endif
  void set_policy(const char* value);
  void set_policy(const char* value, size_t size);
  ::std::string* mutable_policy();
  ::std::string* release_policy();
  void set_allocated_policy(::std::string* policy);

  // optional uint32 prio = 4 [default = 1];
  bool has_prio() const;
  void clear_prio();
  static const int kPrioFieldNumber = 4;
  ::google::protobuf::uint32 prio() const;
  void set_prio(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.InnerThread)
 private:
  void set_has_name();
  void clear_has_name();
  void set_has_cpuset();
  void clear_has_cpuset();
  void set_has_policy();
  void clear_has_policy();
  void set_has_prio();
  void clear_has_prio();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr cpuset_;
  ::google::protobuf::internal::ArenaStringPtr policy_;
  ::google::protobuf::uint32 prio_;
  friend struct protobuf_cyber_2fproto_2fscheduler_5fconf_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SchedulerConf : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.SchedulerConf) */ {
 public:
  SchedulerConf();
  virtual ~SchedulerConf();

  SchedulerConf(const SchedulerConf& from);

  inline SchedulerConf& operator=(const SchedulerConf& from) {
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
  static const SchedulerConf& default_instance();

  static inline const SchedulerConf* internal_default_instance() {
    return reinterpret_cast<const SchedulerConf*>(
               &_SchedulerConf_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SchedulerConf* other);

  // implements Message ----------------------------------------------

  inline SchedulerConf* New() const PROTOBUF_FINAL { return New(NULL); }

  SchedulerConf* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SchedulerConf& from);
  void MergeFrom(const SchedulerConf& from);
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
  void InternalSwap(SchedulerConf* other);
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

  // repeated .apollo.cyber.proto.InnerThread threads = 5;
  int threads_size() const;
  void clear_threads();
  static const int kThreadsFieldNumber = 5;
  const ::apollo::cyber::proto::InnerThread& threads(int index) const;
  ::apollo::cyber::proto::InnerThread* mutable_threads(int index);
  ::apollo::cyber::proto::InnerThread* add_threads();
  ::google::protobuf::RepeatedPtrField< ::apollo::cyber::proto::InnerThread >*
      mutable_threads();
  const ::google::protobuf::RepeatedPtrField< ::apollo::cyber::proto::InnerThread >&
      threads() const;

  // optional string policy = 1;
  bool has_policy() const;
  void clear_policy();
  static const int kPolicyFieldNumber = 1;
  const ::std::string& policy() const;
  void set_policy(const ::std::string& value);
  #if LANG_CXX11
  void set_policy(::std::string&& value);
  #endif
  void set_policy(const char* value);
  void set_policy(const char* value, size_t size);
  ::std::string* mutable_policy();
  ::std::string* release_policy();
  void set_allocated_policy(::std::string* policy);

  // optional string process_level_cpuset = 4;
  bool has_process_level_cpuset() const;
  void clear_process_level_cpuset();
  static const int kProcessLevelCpusetFieldNumber = 4;
  const ::std::string& process_level_cpuset() const;
  void set_process_level_cpuset(const ::std::string& value);
  #if LANG_CXX11
  void set_process_level_cpuset(::std::string&& value);
  #endif
  void set_process_level_cpuset(const char* value);
  void set_process_level_cpuset(const char* value, size_t size);
  ::std::string* mutable_process_level_cpuset();
  ::std::string* release_process_level_cpuset();
  void set_allocated_process_level_cpuset(::std::string* process_level_cpuset);

  // optional .apollo.cyber.proto.ClassicConf classic_conf = 6;
  bool has_classic_conf() const;
  void clear_classic_conf();
  static const int kClassicConfFieldNumber = 6;
  const ::apollo::cyber::proto::ClassicConf& classic_conf() const;
  ::apollo::cyber::proto::ClassicConf* mutable_classic_conf();
  ::apollo::cyber::proto::ClassicConf* release_classic_conf();
  void set_allocated_classic_conf(::apollo::cyber::proto::ClassicConf* classic_conf);

  // optional .apollo.cyber.proto.ChoreographyConf choreography_conf = 7;
  bool has_choreography_conf() const;
  void clear_choreography_conf();
  static const int kChoreographyConfFieldNumber = 7;
  const ::apollo::cyber::proto::ChoreographyConf& choreography_conf() const;
  ::apollo::cyber::proto::ChoreographyConf* mutable_choreography_conf();
  ::apollo::cyber::proto::ChoreographyConf* release_choreography_conf();
  void set_allocated_choreography_conf(::apollo::cyber::proto::ChoreographyConf* choreography_conf);

  // optional uint32 routine_num = 2;
  bool has_routine_num() const;
  void clear_routine_num();
  static const int kRoutineNumFieldNumber = 2;
  ::google::protobuf::uint32 routine_num() const;
  void set_routine_num(::google::protobuf::uint32 value);

  // optional uint32 default_proc_num = 3;
  bool has_default_proc_num() const;
  void clear_default_proc_num();
  static const int kDefaultProcNumFieldNumber = 3;
  ::google::protobuf::uint32 default_proc_num() const;
  void set_default_proc_num(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.SchedulerConf)
 private:
  void set_has_policy();
  void clear_has_policy();
  void set_has_routine_num();
  void clear_has_routine_num();
  void set_has_default_proc_num();
  void clear_has_default_proc_num();
  void set_has_process_level_cpuset();
  void clear_has_process_level_cpuset();
  void set_has_classic_conf();
  void clear_has_classic_conf();
  void set_has_choreography_conf();
  void clear_has_choreography_conf();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::apollo::cyber::proto::InnerThread > threads_;
  ::google::protobuf::internal::ArenaStringPtr policy_;
  ::google::protobuf::internal::ArenaStringPtr process_level_cpuset_;
  ::apollo::cyber::proto::ClassicConf* classic_conf_;
  ::apollo::cyber::proto::ChoreographyConf* choreography_conf_;
  ::google::protobuf::uint32 routine_num_;
  ::google::protobuf::uint32 default_proc_num_;
  friend struct protobuf_cyber_2fproto_2fscheduler_5fconf_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// InnerThread

// optional string name = 1;
inline bool InnerThread::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InnerThread::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InnerThread::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void InnerThread::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& InnerThread::name() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.InnerThread.name)
  return name_.GetNoArena();
}
inline void InnerThread::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.InnerThread.name)
}
#if LANG_CXX11
inline void InnerThread::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.proto.InnerThread.name)
}
#endif
inline void InnerThread::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.proto.InnerThread.name)
}
inline void InnerThread::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.proto.InnerThread.name)
}
inline ::std::string* InnerThread::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.InnerThread.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* InnerThread::release_name() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.InnerThread.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void InnerThread::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.InnerThread.name)
}

// optional string cpuset = 2;
inline bool InnerThread::has_cpuset() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InnerThread::set_has_cpuset() {
  _has_bits_[0] |= 0x00000002u;
}
inline void InnerThread::clear_has_cpuset() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void InnerThread::clear_cpuset() {
  cpuset_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_cpuset();
}
inline const ::std::string& InnerThread::cpuset() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.InnerThread.cpuset)
  return cpuset_.GetNoArena();
}
inline void InnerThread::set_cpuset(const ::std::string& value) {
  set_has_cpuset();
  cpuset_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.InnerThread.cpuset)
}
#if LANG_CXX11
inline void InnerThread::set_cpuset(::std::string&& value) {
  set_has_cpuset();
  cpuset_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.proto.InnerThread.cpuset)
}
#endif
inline void InnerThread::set_cpuset(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_cpuset();
  cpuset_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.proto.InnerThread.cpuset)
}
inline void InnerThread::set_cpuset(const char* value, size_t size) {
  set_has_cpuset();
  cpuset_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.proto.InnerThread.cpuset)
}
inline ::std::string* InnerThread::mutable_cpuset() {
  set_has_cpuset();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.InnerThread.cpuset)
  return cpuset_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* InnerThread::release_cpuset() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.InnerThread.cpuset)
  clear_has_cpuset();
  return cpuset_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void InnerThread::set_allocated_cpuset(::std::string* cpuset) {
  if (cpuset != NULL) {
    set_has_cpuset();
  } else {
    clear_has_cpuset();
  }
  cpuset_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cpuset);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.InnerThread.cpuset)
}

// optional string policy = 3;
inline bool InnerThread::has_policy() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void InnerThread::set_has_policy() {
  _has_bits_[0] |= 0x00000004u;
}
inline void InnerThread::clear_has_policy() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void InnerThread::clear_policy() {
  policy_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_policy();
}
inline const ::std::string& InnerThread::policy() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.InnerThread.policy)
  return policy_.GetNoArena();
}
inline void InnerThread::set_policy(const ::std::string& value) {
  set_has_policy();
  policy_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.InnerThread.policy)
}
#if LANG_CXX11
inline void InnerThread::set_policy(::std::string&& value) {
  set_has_policy();
  policy_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.proto.InnerThread.policy)
}
#endif
inline void InnerThread::set_policy(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_policy();
  policy_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.proto.InnerThread.policy)
}
inline void InnerThread::set_policy(const char* value, size_t size) {
  set_has_policy();
  policy_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.proto.InnerThread.policy)
}
inline ::std::string* InnerThread::mutable_policy() {
  set_has_policy();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.InnerThread.policy)
  return policy_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* InnerThread::release_policy() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.InnerThread.policy)
  clear_has_policy();
  return policy_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void InnerThread::set_allocated_policy(::std::string* policy) {
  if (policy != NULL) {
    set_has_policy();
  } else {
    clear_has_policy();
  }
  policy_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), policy);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.InnerThread.policy)
}

// optional uint32 prio = 4 [default = 1];
inline bool InnerThread::has_prio() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void InnerThread::set_has_prio() {
  _has_bits_[0] |= 0x00000008u;
}
inline void InnerThread::clear_has_prio() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void InnerThread::clear_prio() {
  prio_ = 1u;
  clear_has_prio();
}
inline ::google::protobuf::uint32 InnerThread::prio() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.InnerThread.prio)
  return prio_;
}
inline void InnerThread::set_prio(::google::protobuf::uint32 value) {
  set_has_prio();
  prio_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.InnerThread.prio)
}

// -------------------------------------------------------------------

// SchedulerConf

// optional string policy = 1;
inline bool SchedulerConf::has_policy() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SchedulerConf::set_has_policy() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SchedulerConf::clear_has_policy() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SchedulerConf::clear_policy() {
  policy_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_policy();
}
inline const ::std::string& SchedulerConf::policy() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.SchedulerConf.policy)
  return policy_.GetNoArena();
}
inline void SchedulerConf::set_policy(const ::std::string& value) {
  set_has_policy();
  policy_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.SchedulerConf.policy)
}
#if LANG_CXX11
inline void SchedulerConf::set_policy(::std::string&& value) {
  set_has_policy();
  policy_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.proto.SchedulerConf.policy)
}
#endif
inline void SchedulerConf::set_policy(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_policy();
  policy_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.proto.SchedulerConf.policy)
}
inline void SchedulerConf::set_policy(const char* value, size_t size) {
  set_has_policy();
  policy_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.proto.SchedulerConf.policy)
}
inline ::std::string* SchedulerConf::mutable_policy() {
  set_has_policy();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.SchedulerConf.policy)
  return policy_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SchedulerConf::release_policy() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.SchedulerConf.policy)
  clear_has_policy();
  return policy_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SchedulerConf::set_allocated_policy(::std::string* policy) {
  if (policy != NULL) {
    set_has_policy();
  } else {
    clear_has_policy();
  }
  policy_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), policy);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.SchedulerConf.policy)
}

// optional uint32 routine_num = 2;
inline bool SchedulerConf::has_routine_num() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SchedulerConf::set_has_routine_num() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SchedulerConf::clear_has_routine_num() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SchedulerConf::clear_routine_num() {
  routine_num_ = 0u;
  clear_has_routine_num();
}
inline ::google::protobuf::uint32 SchedulerConf::routine_num() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.SchedulerConf.routine_num)
  return routine_num_;
}
inline void SchedulerConf::set_routine_num(::google::protobuf::uint32 value) {
  set_has_routine_num();
  routine_num_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.SchedulerConf.routine_num)
}

// optional uint32 default_proc_num = 3;
inline bool SchedulerConf::has_default_proc_num() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SchedulerConf::set_has_default_proc_num() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SchedulerConf::clear_has_default_proc_num() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SchedulerConf::clear_default_proc_num() {
  default_proc_num_ = 0u;
  clear_has_default_proc_num();
}
inline ::google::protobuf::uint32 SchedulerConf::default_proc_num() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.SchedulerConf.default_proc_num)
  return default_proc_num_;
}
inline void SchedulerConf::set_default_proc_num(::google::protobuf::uint32 value) {
  set_has_default_proc_num();
  default_proc_num_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.SchedulerConf.default_proc_num)
}

// optional string process_level_cpuset = 4;
inline bool SchedulerConf::has_process_level_cpuset() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SchedulerConf::set_has_process_level_cpuset() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SchedulerConf::clear_has_process_level_cpuset() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SchedulerConf::clear_process_level_cpuset() {
  process_level_cpuset_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_process_level_cpuset();
}
inline const ::std::string& SchedulerConf::process_level_cpuset() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.SchedulerConf.process_level_cpuset)
  return process_level_cpuset_.GetNoArena();
}
inline void SchedulerConf::set_process_level_cpuset(const ::std::string& value) {
  set_has_process_level_cpuset();
  process_level_cpuset_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.SchedulerConf.process_level_cpuset)
}
#if LANG_CXX11
inline void SchedulerConf::set_process_level_cpuset(::std::string&& value) {
  set_has_process_level_cpuset();
  process_level_cpuset_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.proto.SchedulerConf.process_level_cpuset)
}
#endif
inline void SchedulerConf::set_process_level_cpuset(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_process_level_cpuset();
  process_level_cpuset_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.proto.SchedulerConf.process_level_cpuset)
}
inline void SchedulerConf::set_process_level_cpuset(const char* value, size_t size) {
  set_has_process_level_cpuset();
  process_level_cpuset_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.proto.SchedulerConf.process_level_cpuset)
}
inline ::std::string* SchedulerConf::mutable_process_level_cpuset() {
  set_has_process_level_cpuset();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.SchedulerConf.process_level_cpuset)
  return process_level_cpuset_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SchedulerConf::release_process_level_cpuset() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.SchedulerConf.process_level_cpuset)
  clear_has_process_level_cpuset();
  return process_level_cpuset_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SchedulerConf::set_allocated_process_level_cpuset(::std::string* process_level_cpuset) {
  if (process_level_cpuset != NULL) {
    set_has_process_level_cpuset();
  } else {
    clear_has_process_level_cpuset();
  }
  process_level_cpuset_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), process_level_cpuset);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.SchedulerConf.process_level_cpuset)
}

// repeated .apollo.cyber.proto.InnerThread threads = 5;
inline int SchedulerConf::threads_size() const {
  return threads_.size();
}
inline void SchedulerConf::clear_threads() {
  threads_.Clear();
}
inline const ::apollo::cyber::proto::InnerThread& SchedulerConf::threads(int index) const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.SchedulerConf.threads)
  return threads_.Get(index);
}
inline ::apollo::cyber::proto::InnerThread* SchedulerConf::mutable_threads(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.SchedulerConf.threads)
  return threads_.Mutable(index);
}
inline ::apollo::cyber::proto::InnerThread* SchedulerConf::add_threads() {
  // @@protoc_insertion_point(field_add:apollo.cyber.proto.SchedulerConf.threads)
  return threads_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::cyber::proto::InnerThread >*
SchedulerConf::mutable_threads() {
  // @@protoc_insertion_point(field_mutable_list:apollo.cyber.proto.SchedulerConf.threads)
  return &threads_;
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::cyber::proto::InnerThread >&
SchedulerConf::threads() const {
  // @@protoc_insertion_point(field_list:apollo.cyber.proto.SchedulerConf.threads)
  return threads_;
}

// optional .apollo.cyber.proto.ClassicConf classic_conf = 6;
inline bool SchedulerConf::has_classic_conf() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SchedulerConf::set_has_classic_conf() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SchedulerConf::clear_has_classic_conf() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SchedulerConf::clear_classic_conf() {
  if (classic_conf_ != NULL) classic_conf_->::apollo::cyber::proto::ClassicConf::Clear();
  clear_has_classic_conf();
}
inline const ::apollo::cyber::proto::ClassicConf& SchedulerConf::classic_conf() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.SchedulerConf.classic_conf)
  return classic_conf_ != NULL ? *classic_conf_
                         : *::apollo::cyber::proto::ClassicConf::internal_default_instance();
}
inline ::apollo::cyber::proto::ClassicConf* SchedulerConf::mutable_classic_conf() {
  set_has_classic_conf();
  if (classic_conf_ == NULL) {
    classic_conf_ = new ::apollo::cyber::proto::ClassicConf;
  }
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.SchedulerConf.classic_conf)
  return classic_conf_;
}
inline ::apollo::cyber::proto::ClassicConf* SchedulerConf::release_classic_conf() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.SchedulerConf.classic_conf)
  clear_has_classic_conf();
  ::apollo::cyber::proto::ClassicConf* temp = classic_conf_;
  classic_conf_ = NULL;
  return temp;
}
inline void SchedulerConf::set_allocated_classic_conf(::apollo::cyber::proto::ClassicConf* classic_conf) {
  delete classic_conf_;
  classic_conf_ = classic_conf;
  if (classic_conf) {
    set_has_classic_conf();
  } else {
    clear_has_classic_conf();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.SchedulerConf.classic_conf)
}

// optional .apollo.cyber.proto.ChoreographyConf choreography_conf = 7;
inline bool SchedulerConf::has_choreography_conf() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SchedulerConf::set_has_choreography_conf() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SchedulerConf::clear_has_choreography_conf() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SchedulerConf::clear_choreography_conf() {
  if (choreography_conf_ != NULL) choreography_conf_->::apollo::cyber::proto::ChoreographyConf::Clear();
  clear_has_choreography_conf();
}
inline const ::apollo::cyber::proto::ChoreographyConf& SchedulerConf::choreography_conf() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.SchedulerConf.choreography_conf)
  return choreography_conf_ != NULL ? *choreography_conf_
                         : *::apollo::cyber::proto::ChoreographyConf::internal_default_instance();
}
inline ::apollo::cyber::proto::ChoreographyConf* SchedulerConf::mutable_choreography_conf() {
  set_has_choreography_conf();
  if (choreography_conf_ == NULL) {
    choreography_conf_ = new ::apollo::cyber::proto::ChoreographyConf;
  }
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.SchedulerConf.choreography_conf)
  return choreography_conf_;
}
inline ::apollo::cyber::proto::ChoreographyConf* SchedulerConf::release_choreography_conf() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.SchedulerConf.choreography_conf)
  clear_has_choreography_conf();
  ::apollo::cyber::proto::ChoreographyConf* temp = choreography_conf_;
  choreography_conf_ = NULL;
  return temp;
}
inline void SchedulerConf::set_allocated_choreography_conf(::apollo::cyber::proto::ChoreographyConf* choreography_conf) {
  delete choreography_conf_;
  choreography_conf_ = choreography_conf;
  if (choreography_conf) {
    set_has_choreography_conf();
  } else {
    clear_has_choreography_conf();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.SchedulerConf.choreography_conf)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace cyber
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cyber_2fproto_2fscheduler_5fconf_2eproto__INCLUDED