// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/topology_change.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cyber/proto/topology_change.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace apollo {
namespace cyber {
namespace proto {
class ChangeMsgDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ChangeMsg> {
} _ChangeMsg_default_instance_;

namespace protobuf_cyber_2fproto_2ftopology_5fchange_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[3];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChangeMsg, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChangeMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChangeMsg, timestamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChangeMsg, change_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChangeMsg, operate_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChangeMsg, role_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChangeMsg, role_attr_),
  1,
  3,
  4,
  2,
  0,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 10, sizeof(ChangeMsg)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ChangeMsg_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cyber/proto/topology_change.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _ChangeMsg_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::apollo::cyber::proto::protobuf_cyber_2fproto_2frole_5fattributes_2eproto::InitDefaults();
  _ChangeMsg_default_instance_.DefaultConstruct();
  _ChangeMsg_default_instance_.get_mutable()->role_attr_ = const_cast< ::apollo::cyber::proto::RoleAttributes*>(
      ::apollo::cyber::proto::RoleAttributes::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n!cyber/proto/topology_change.proto\022\022apo"
      "llo.cyber.proto\032!cyber/proto/role_attrib"
      "utes.proto\"\362\001\n\tChangeMsg\022\021\n\ttimestamp\030\001 "
      "\001(\004\0223\n\013change_type\030\002 \001(\0162\036.apollo.cyber."
      "proto.ChangeType\0225\n\014operate_type\030\003 \001(\0162\037"
      ".apollo.cyber.proto.OperateType\022/\n\trole_"
      "type\030\004 \001(\0162\034.apollo.cyber.proto.RoleType"
      "\0225\n\trole_attr\030\005 \001(\0132\".apollo.cyber.proto"
      ".RoleAttributes*]\n\nChangeType\022\017\n\013CHANGE_"
      "NODE\020\001\022\022\n\016CHANGE_CHANNEL\020\002\022\022\n\016CHANGE_SER"
      "VICE\020\003\022\026\n\022CHANGE_PARTICIPANT\020\004**\n\013Operat"
      "eType\022\014\n\010OPT_JOIN\020\001\022\r\n\tOPT_LEAVE\020\002*s\n\010Ro"
      "leType\022\r\n\tROLE_NODE\020\001\022\017\n\013ROLE_WRITER\020\002\022\017"
      "\n\013ROLE_READER\020\003\022\017\n\013ROLE_SERVER\020\004\022\017\n\013ROLE"
      "_CLIENT\020\005\022\024\n\020ROLE_PARTICIPANT\020\006"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 591);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cyber/proto/topology_change.proto", &protobuf_RegisterTypes);
  ::apollo::cyber::proto::protobuf_cyber_2fproto_2frole_5fattributes_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_cyber_2fproto_2ftopology_5fchange_2eproto

const ::google::protobuf::EnumDescriptor* ChangeType_descriptor() {
  protobuf_cyber_2fproto_2ftopology_5fchange_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cyber_2fproto_2ftopology_5fchange_2eproto::file_level_enum_descriptors[0];
}
bool ChangeType_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* OperateType_descriptor() {
  protobuf_cyber_2fproto_2ftopology_5fchange_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cyber_2fproto_2ftopology_5fchange_2eproto::file_level_enum_descriptors[1];
}
bool OperateType_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* RoleType_descriptor() {
  protobuf_cyber_2fproto_2ftopology_5fchange_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cyber_2fproto_2ftopology_5fchange_2eproto::file_level_enum_descriptors[2];
}
bool RoleType_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChangeMsg::kTimestampFieldNumber;
const int ChangeMsg::kChangeTypeFieldNumber;
const int ChangeMsg::kOperateTypeFieldNumber;
const int ChangeMsg::kRoleTypeFieldNumber;
const int ChangeMsg::kRoleAttrFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChangeMsg::ChangeMsg()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cyber_2fproto_2ftopology_5fchange_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.cyber.proto.ChangeMsg)
}
ChangeMsg::ChangeMsg(const ChangeMsg& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_role_attr()) {
    role_attr_ = new ::apollo::cyber::proto::RoleAttributes(*from.role_attr_);
  } else {
    role_attr_ = NULL;
  }
  ::memcpy(&timestamp_, &from.timestamp_,
    reinterpret_cast<char*>(&operate_type_) -
    reinterpret_cast<char*>(&timestamp_) + sizeof(operate_type_));
  // @@protoc_insertion_point(copy_constructor:apollo.cyber.proto.ChangeMsg)
}

void ChangeMsg::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&role_attr_, 0, reinterpret_cast<char*>(&timestamp_) -
    reinterpret_cast<char*>(&role_attr_) + sizeof(timestamp_));
  role_type_ = 1;
  change_type_ = 1;
  operate_type_ = 1;
}

ChangeMsg::~ChangeMsg() {
  // @@protoc_insertion_point(destructor:apollo.cyber.proto.ChangeMsg)
  SharedDtor();
}

void ChangeMsg::SharedDtor() {
  if (this != internal_default_instance()) {
    delete role_attr_;
  }
}

void ChangeMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChangeMsg::descriptor() {
  protobuf_cyber_2fproto_2ftopology_5fchange_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cyber_2fproto_2ftopology_5fchange_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ChangeMsg& ChangeMsg::default_instance() {
  protobuf_cyber_2fproto_2ftopology_5fchange_2eproto::InitDefaults();
  return *internal_default_instance();
}

ChangeMsg* ChangeMsg::New(::google::protobuf::Arena* arena) const {
  ChangeMsg* n = new ChangeMsg;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ChangeMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.cyber.proto.ChangeMsg)
  if (has_role_attr()) {
    GOOGLE_DCHECK(role_attr_ != NULL);
    role_attr_->::apollo::cyber::proto::RoleAttributes::Clear();
  }
  if (_has_bits_[0 / 32] & 30u) {
    timestamp_ = GOOGLE_ULONGLONG(0);
    role_type_ = 1;
    change_type_ = 1;
    operate_type_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ChangeMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.cyber.proto.ChangeMsg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 timestamp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_timestamp();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &timestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.cyber.proto.ChangeType change_type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo::cyber::proto::ChangeType_IsValid(value)) {
            set_change_type(static_cast< ::apollo::cyber::proto::ChangeType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.cyber.proto.OperateType operate_type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo::cyber::proto::OperateType_IsValid(value)) {
            set_operate_type(static_cast< ::apollo::cyber::proto::OperateType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.cyber.proto.RoleType role_type = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo::cyber::proto::RoleType_IsValid(value)) {
            set_role_type(static_cast< ::apollo::cyber::proto::RoleType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.cyber.proto.RoleAttributes role_attr = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_role_attr()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.cyber.proto.ChangeMsg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.cyber.proto.ChangeMsg)
  return false;
#undef DO_
}

void ChangeMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.cyber.proto.ChangeMsg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 timestamp = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->timestamp(), output);
  }

  // optional .apollo.cyber.proto.ChangeType change_type = 2;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->change_type(), output);
  }

  // optional .apollo.cyber.proto.OperateType operate_type = 3;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->operate_type(), output);
  }

  // optional .apollo.cyber.proto.RoleType role_type = 4;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->role_type(), output);
  }

  // optional .apollo.cyber.proto.RoleAttributes role_attr = 5;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->role_attr_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.cyber.proto.ChangeMsg)
}

::google::protobuf::uint8* ChangeMsg::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.cyber.proto.ChangeMsg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 timestamp = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->timestamp(), target);
  }

  // optional .apollo.cyber.proto.ChangeType change_type = 2;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->change_type(), target);
  }

  // optional .apollo.cyber.proto.OperateType operate_type = 3;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->operate_type(), target);
  }

  // optional .apollo.cyber.proto.RoleType role_type = 4;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->role_type(), target);
  }

  // optional .apollo.cyber.proto.RoleAttributes role_attr = 5;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->role_attr_, deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.cyber.proto.ChangeMsg)
  return target;
}

size_t ChangeMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.cyber.proto.ChangeMsg)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 31u) {
    // optional .apollo.cyber.proto.RoleAttributes role_attr = 5;
    if (has_role_attr()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->role_attr_);
    }

    // optional uint64 timestamp = 1;
    if (has_timestamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->timestamp());
    }

    // optional .apollo.cyber.proto.RoleType role_type = 4;
    if (has_role_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->role_type());
    }

    // optional .apollo.cyber.proto.ChangeType change_type = 2;
    if (has_change_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->change_type());
    }

    // optional .apollo.cyber.proto.OperateType operate_type = 3;
    if (has_operate_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->operate_type());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChangeMsg::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.cyber.proto.ChangeMsg)
  GOOGLE_DCHECK_NE(&from, this);
  const ChangeMsg* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ChangeMsg>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.cyber.proto.ChangeMsg)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.cyber.proto.ChangeMsg)
    MergeFrom(*source);
  }
}

void ChangeMsg::MergeFrom(const ChangeMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.cyber.proto.ChangeMsg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_role_attr()->::apollo::cyber::proto::RoleAttributes::MergeFrom(from.role_attr());
    }
    if (cached_has_bits & 0x00000002u) {
      timestamp_ = from.timestamp_;
    }
    if (cached_has_bits & 0x00000004u) {
      role_type_ = from.role_type_;
    }
    if (cached_has_bits & 0x00000008u) {
      change_type_ = from.change_type_;
    }
    if (cached_has_bits & 0x00000010u) {
      operate_type_ = from.operate_type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ChangeMsg::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.cyber.proto.ChangeMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChangeMsg::CopyFrom(const ChangeMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.cyber.proto.ChangeMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChangeMsg::IsInitialized() const {
  return true;
}

void ChangeMsg::Swap(ChangeMsg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChangeMsg::InternalSwap(ChangeMsg* other) {
  std::swap(role_attr_, other->role_attr_);
  std::swap(timestamp_, other->timestamp_);
  std::swap(role_type_, other->role_type_);
  std::swap(change_type_, other->change_type_);
  std::swap(operate_type_, other->operate_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ChangeMsg::GetMetadata() const {
  protobuf_cyber_2fproto_2ftopology_5fchange_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cyber_2fproto_2ftopology_5fchange_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ChangeMsg

// optional uint64 timestamp = 1;
bool ChangeMsg::has_timestamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ChangeMsg::set_has_timestamp() {
  _has_bits_[0] |= 0x00000002u;
}
void ChangeMsg::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000002u;
}
void ChangeMsg::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp();
}
::google::protobuf::uint64 ChangeMsg::timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.timestamp)
  return timestamp_;
}
void ChangeMsg::set_timestamp(::google::protobuf::uint64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChangeMsg.timestamp)
}

// optional .apollo.cyber.proto.ChangeType change_type = 2;
bool ChangeMsg::has_change_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void ChangeMsg::set_has_change_type() {
  _has_bits_[0] |= 0x00000008u;
}
void ChangeMsg::clear_has_change_type() {
  _has_bits_[0] &= ~0x00000008u;
}
void ChangeMsg::clear_change_type() {
  change_type_ = 1;
  clear_has_change_type();
}
::apollo::cyber::proto::ChangeType ChangeMsg::change_type() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.change_type)
  return static_cast< ::apollo::cyber::proto::ChangeType >(change_type_);
}
void ChangeMsg::set_change_type(::apollo::cyber::proto::ChangeType value) {
  assert(::apollo::cyber::proto::ChangeType_IsValid(value));
  set_has_change_type();
  change_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChangeMsg.change_type)
}

// optional .apollo.cyber.proto.OperateType operate_type = 3;
bool ChangeMsg::has_operate_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void ChangeMsg::set_has_operate_type() {
  _has_bits_[0] |= 0x00000010u;
}
void ChangeMsg::clear_has_operate_type() {
  _has_bits_[0] &= ~0x00000010u;
}
void ChangeMsg::clear_operate_type() {
  operate_type_ = 1;
  clear_has_operate_type();
}
::apollo::cyber::proto::OperateType ChangeMsg::operate_type() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.operate_type)
  return static_cast< ::apollo::cyber::proto::OperateType >(operate_type_);
}
void ChangeMsg::set_operate_type(::apollo::cyber::proto::OperateType value) {
  assert(::apollo::cyber::proto::OperateType_IsValid(value));
  set_has_operate_type();
  operate_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChangeMsg.operate_type)
}

// optional .apollo.cyber.proto.RoleType role_type = 4;
bool ChangeMsg::has_role_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ChangeMsg::set_has_role_type() {
  _has_bits_[0] |= 0x00000004u;
}
void ChangeMsg::clear_has_role_type() {
  _has_bits_[0] &= ~0x00000004u;
}
void ChangeMsg::clear_role_type() {
  role_type_ = 1;
  clear_has_role_type();
}
::apollo::cyber::proto::RoleType ChangeMsg::role_type() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.role_type)
  return static_cast< ::apollo::cyber::proto::RoleType >(role_type_);
}
void ChangeMsg::set_role_type(::apollo::cyber::proto::RoleType value) {
  assert(::apollo::cyber::proto::RoleType_IsValid(value));
  set_has_role_type();
  role_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChangeMsg.role_type)
}

// optional .apollo.cyber.proto.RoleAttributes role_attr = 5;
bool ChangeMsg::has_role_attr() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ChangeMsg::set_has_role_attr() {
  _has_bits_[0] |= 0x00000001u;
}
void ChangeMsg::clear_has_role_attr() {
  _has_bits_[0] &= ~0x00000001u;
}
void ChangeMsg::clear_role_attr() {
  if (role_attr_ != NULL) role_attr_->::apollo::cyber::proto::RoleAttributes::Clear();
  clear_has_role_attr();
}
const ::apollo::cyber::proto::RoleAttributes& ChangeMsg::role_attr() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.role_attr)
  return role_attr_ != NULL ? *role_attr_
                         : *::apollo::cyber::proto::RoleAttributes::internal_default_instance();
}
::apollo::cyber::proto::RoleAttributes* ChangeMsg::mutable_role_attr() {
  set_has_role_attr();
  if (role_attr_ == NULL) {
    role_attr_ = new ::apollo::cyber::proto::RoleAttributes;
  }
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.ChangeMsg.role_attr)
  return role_attr_;
}
::apollo::cyber::proto::RoleAttributes* ChangeMsg::release_role_attr() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.ChangeMsg.role_attr)
  clear_has_role_attr();
  ::apollo::cyber::proto::RoleAttributes* temp = role_attr_;
  role_attr_ = NULL;
  return temp;
}
void ChangeMsg::set_allocated_role_attr(::apollo::cyber::proto::RoleAttributes* role_attr) {
  delete role_attr_;
  role_attr_ = role_attr;
  if (role_attr) {
    set_has_role_attr();
  } else {
    clear_has_role_attr();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.ChangeMsg.role_attr)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
