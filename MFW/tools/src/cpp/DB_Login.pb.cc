// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DB_Login.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DB_Login.pb.h"

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

namespace PDB_Login {
class LD_UserCheckDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LD_UserCheck> {
} _LD_UserCheck_default_instance_;
class DL_UserCheckDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<DL_UserCheck> {
} _DL_UserCheck_default_instance_;

namespace protobuf_DB_5fLogin_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

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
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LD_UserCheck, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LD_UserCheck, conid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LD_UserCheck, loginmsg_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DL_UserCheck, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DL_UserCheck, ret_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DL_UserCheck, conid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DL_UserCheck, loginmsg_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DL_UserCheck, dbaccount_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(LD_UserCheck)},
  { 7, -1, sizeof(DL_UserCheck)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_LD_UserCheck_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_DL_UserCheck_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "DB_Login.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _LD_UserCheck_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _DL_UserCheck_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::PDB_Base::protobuf_DB_5fBase_2eproto::InitDefaults();
  ::PLogin_Client::protobuf_Login_5fClient_2eproto::InitDefaults();
  _LD_UserCheck_default_instance_.DefaultConstruct();
  _DL_UserCheck_default_instance_.DefaultConstruct();
  _LD_UserCheck_default_instance_.get_mutable()->loginmsg_ = const_cast< ::PLogin_Client::CL_Login*>(
      ::PLogin_Client::CL_Login::internal_default_instance());
  _DL_UserCheck_default_instance_.get_mutable()->loginmsg_ = const_cast< ::PLogin_Client::CL_Login*>(
      ::PLogin_Client::CL_Login::internal_default_instance());
  _DL_UserCheck_default_instance_.get_mutable()->dbaccount_ = const_cast< ::PDB_Base::DBAccount*>(
      ::PDB_Base::DBAccount::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\016DB_Login.proto\022\tPDB_Login\032\rDB_Base.pro"
      "to\032\022Login_Client.proto\"H\n\014LD_UserCheck\022\r"
      "\n\005ConId\030\001 \001(\003\022)\n\010loginMsg\030\002 \001(\0132\027.PLogin"
      "_Client.CL_Login\"}\n\014DL_UserCheck\022\013\n\003ret\030"
      "\001 \001(\005\022\r\n\005ConId\030\002 \001(\003\022)\n\010loginMsg\030\003 \001(\0132\027"
      ".PLogin_Client.CL_Login\022&\n\tdBAccount\030\004 \001"
      "(\0132\023.PDB_Base.DBAccount*3\n\007EDL_CMD\022\020\n\014ED"
      "L_CMD_None\020\000\022\026\n\021EDL_CMD_UserCheck\020\321\017b\006pr"
      "oto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 324);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DB_Login.proto", &protobuf_RegisterTypes);
  ::PDB_Base::protobuf_DB_5fBase_2eproto::AddDescriptors();
  ::PLogin_Client::protobuf_Login_5fClient_2eproto::AddDescriptors();
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

}  // namespace protobuf_DB_5fLogin_2eproto

const ::google::protobuf::EnumDescriptor* EDL_CMD_descriptor() {
  protobuf_DB_5fLogin_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_DB_5fLogin_2eproto::file_level_enum_descriptors[0];
}
bool EDL_CMD_IsValid(int value) {
  switch (value) {
    case 0:
    case 2001:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LD_UserCheck::kConIdFieldNumber;
const int LD_UserCheck::kLoginMsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LD_UserCheck::LD_UserCheck()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_DB_5fLogin_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:PDB_Login.LD_UserCheck)
}
LD_UserCheck::LD_UserCheck(const LD_UserCheck& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_loginmsg()) {
    loginmsg_ = new ::PLogin_Client::CL_Login(*from.loginmsg_);
  } else {
    loginmsg_ = NULL;
  }
  conid_ = from.conid_;
  // @@protoc_insertion_point(copy_constructor:PDB_Login.LD_UserCheck)
}

void LD_UserCheck::SharedCtor() {
  ::memset(&loginmsg_, 0, reinterpret_cast<char*>(&conid_) -
    reinterpret_cast<char*>(&loginmsg_) + sizeof(conid_));
  _cached_size_ = 0;
}

LD_UserCheck::~LD_UserCheck() {
  // @@protoc_insertion_point(destructor:PDB_Login.LD_UserCheck)
  SharedDtor();
}

void LD_UserCheck::SharedDtor() {
  if (this != internal_default_instance()) {
    delete loginmsg_;
  }
}

void LD_UserCheck::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LD_UserCheck::descriptor() {
  protobuf_DB_5fLogin_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_DB_5fLogin_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LD_UserCheck& LD_UserCheck::default_instance() {
  protobuf_DB_5fLogin_2eproto::InitDefaults();
  return *internal_default_instance();
}

LD_UserCheck* LD_UserCheck::New(::google::protobuf::Arena* arena) const {
  LD_UserCheck* n = new LD_UserCheck;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LD_UserCheck::Clear() {
// @@protoc_insertion_point(message_clear_start:PDB_Login.LD_UserCheck)
  if (GetArenaNoVirtual() == NULL && loginmsg_ != NULL) {
    delete loginmsg_;
  }
  loginmsg_ = NULL;
  conid_ = GOOGLE_LONGLONG(0);
}

bool LD_UserCheck::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PDB_Login.LD_UserCheck)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 ConId = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &conid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .PLogin_Client.CL_Login loginMsg = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_loginmsg()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:PDB_Login.LD_UserCheck)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PDB_Login.LD_UserCheck)
  return false;
#undef DO_
}

void LD_UserCheck::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PDB_Login.LD_UserCheck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 ConId = 1;
  if (this->conid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->conid(), output);
  }

  // .PLogin_Client.CL_Login loginMsg = 2;
  if (this->has_loginmsg()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->loginmsg_, output);
  }

  // @@protoc_insertion_point(serialize_end:PDB_Login.LD_UserCheck)
}

::google::protobuf::uint8* LD_UserCheck::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:PDB_Login.LD_UserCheck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 ConId = 1;
  if (this->conid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->conid(), target);
  }

  // .PLogin_Client.CL_Login loginMsg = 2;
  if (this->has_loginmsg()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->loginmsg_, deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:PDB_Login.LD_UserCheck)
  return target;
}

size_t LD_UserCheck::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PDB_Login.LD_UserCheck)
  size_t total_size = 0;

  // .PLogin_Client.CL_Login loginMsg = 2;
  if (this->has_loginmsg()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->loginmsg_);
  }

  // int64 ConId = 1;
  if (this->conid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->conid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LD_UserCheck::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PDB_Login.LD_UserCheck)
  GOOGLE_DCHECK_NE(&from, this);
  const LD_UserCheck* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LD_UserCheck>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PDB_Login.LD_UserCheck)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PDB_Login.LD_UserCheck)
    MergeFrom(*source);
  }
}

void LD_UserCheck::MergeFrom(const LD_UserCheck& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PDB_Login.LD_UserCheck)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_loginmsg()) {
    mutable_loginmsg()->::PLogin_Client::CL_Login::MergeFrom(from.loginmsg());
  }
  if (from.conid() != 0) {
    set_conid(from.conid());
  }
}

void LD_UserCheck::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PDB_Login.LD_UserCheck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LD_UserCheck::CopyFrom(const LD_UserCheck& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PDB_Login.LD_UserCheck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LD_UserCheck::IsInitialized() const {
  return true;
}

void LD_UserCheck::Swap(LD_UserCheck* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LD_UserCheck::InternalSwap(LD_UserCheck* other) {
  std::swap(loginmsg_, other->loginmsg_);
  std::swap(conid_, other->conid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LD_UserCheck::GetMetadata() const {
  protobuf_DB_5fLogin_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_DB_5fLogin_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LD_UserCheck

// int64 ConId = 1;
void LD_UserCheck::clear_conid() {
  conid_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 LD_UserCheck::conid() const {
  // @@protoc_insertion_point(field_get:PDB_Login.LD_UserCheck.ConId)
  return conid_;
}
void LD_UserCheck::set_conid(::google::protobuf::int64 value) {
  
  conid_ = value;
  // @@protoc_insertion_point(field_set:PDB_Login.LD_UserCheck.ConId)
}

// .PLogin_Client.CL_Login loginMsg = 2;
bool LD_UserCheck::has_loginmsg() const {
  return this != internal_default_instance() && loginmsg_ != NULL;
}
void LD_UserCheck::clear_loginmsg() {
  if (GetArenaNoVirtual() == NULL && loginmsg_ != NULL) delete loginmsg_;
  loginmsg_ = NULL;
}
const ::PLogin_Client::CL_Login& LD_UserCheck::loginmsg() const {
  // @@protoc_insertion_point(field_get:PDB_Login.LD_UserCheck.loginMsg)
  return loginmsg_ != NULL ? *loginmsg_
                         : *::PLogin_Client::CL_Login::internal_default_instance();
}
::PLogin_Client::CL_Login* LD_UserCheck::mutable_loginmsg() {
  
  if (loginmsg_ == NULL) {
    loginmsg_ = new ::PLogin_Client::CL_Login;
  }
  // @@protoc_insertion_point(field_mutable:PDB_Login.LD_UserCheck.loginMsg)
  return loginmsg_;
}
::PLogin_Client::CL_Login* LD_UserCheck::release_loginmsg() {
  // @@protoc_insertion_point(field_release:PDB_Login.LD_UserCheck.loginMsg)
  
  ::PLogin_Client::CL_Login* temp = loginmsg_;
  loginmsg_ = NULL;
  return temp;
}
void LD_UserCheck::set_allocated_loginmsg(::PLogin_Client::CL_Login* loginmsg) {
  delete loginmsg_;
  loginmsg_ = loginmsg;
  if (loginmsg) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:PDB_Login.LD_UserCheck.loginMsg)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DL_UserCheck::kRetFieldNumber;
const int DL_UserCheck::kConIdFieldNumber;
const int DL_UserCheck::kLoginMsgFieldNumber;
const int DL_UserCheck::kDBAccountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DL_UserCheck::DL_UserCheck()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_DB_5fLogin_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:PDB_Login.DL_UserCheck)
}
DL_UserCheck::DL_UserCheck(const DL_UserCheck& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_loginmsg()) {
    loginmsg_ = new ::PLogin_Client::CL_Login(*from.loginmsg_);
  } else {
    loginmsg_ = NULL;
  }
  if (from.has_dbaccount()) {
    dbaccount_ = new ::PDB_Base::DBAccount(*from.dbaccount_);
  } else {
    dbaccount_ = NULL;
  }
  ::memcpy(&conid_, &from.conid_,
    reinterpret_cast<char*>(&ret_) -
    reinterpret_cast<char*>(&conid_) + sizeof(ret_));
  // @@protoc_insertion_point(copy_constructor:PDB_Login.DL_UserCheck)
}

void DL_UserCheck::SharedCtor() {
  ::memset(&loginmsg_, 0, reinterpret_cast<char*>(&ret_) -
    reinterpret_cast<char*>(&loginmsg_) + sizeof(ret_));
  _cached_size_ = 0;
}

DL_UserCheck::~DL_UserCheck() {
  // @@protoc_insertion_point(destructor:PDB_Login.DL_UserCheck)
  SharedDtor();
}

void DL_UserCheck::SharedDtor() {
  if (this != internal_default_instance()) {
    delete loginmsg_;
  }
  if (this != internal_default_instance()) {
    delete dbaccount_;
  }
}

void DL_UserCheck::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DL_UserCheck::descriptor() {
  protobuf_DB_5fLogin_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_DB_5fLogin_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const DL_UserCheck& DL_UserCheck::default_instance() {
  protobuf_DB_5fLogin_2eproto::InitDefaults();
  return *internal_default_instance();
}

DL_UserCheck* DL_UserCheck::New(::google::protobuf::Arena* arena) const {
  DL_UserCheck* n = new DL_UserCheck;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DL_UserCheck::Clear() {
// @@protoc_insertion_point(message_clear_start:PDB_Login.DL_UserCheck)
  if (GetArenaNoVirtual() == NULL && loginmsg_ != NULL) {
    delete loginmsg_;
  }
  loginmsg_ = NULL;
  if (GetArenaNoVirtual() == NULL && dbaccount_ != NULL) {
    delete dbaccount_;
  }
  dbaccount_ = NULL;
  ::memset(&conid_, 0, reinterpret_cast<char*>(&ret_) -
    reinterpret_cast<char*>(&conid_) + sizeof(ret_));
}

bool DL_UserCheck::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PDB_Login.DL_UserCheck)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 ret = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ret_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 ConId = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &conid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .PLogin_Client.CL_Login loginMsg = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_loginmsg()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .PDB_Base.DBAccount dBAccount = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_dbaccount()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:PDB_Login.DL_UserCheck)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PDB_Login.DL_UserCheck)
  return false;
#undef DO_
}

void DL_UserCheck::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PDB_Login.DL_UserCheck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 ret = 1;
  if (this->ret() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->ret(), output);
  }

  // int64 ConId = 2;
  if (this->conid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->conid(), output);
  }

  // .PLogin_Client.CL_Login loginMsg = 3;
  if (this->has_loginmsg()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->loginmsg_, output);
  }

  // .PDB_Base.DBAccount dBAccount = 4;
  if (this->has_dbaccount()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->dbaccount_, output);
  }

  // @@protoc_insertion_point(serialize_end:PDB_Login.DL_UserCheck)
}

::google::protobuf::uint8* DL_UserCheck::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:PDB_Login.DL_UserCheck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 ret = 1;
  if (this->ret() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->ret(), target);
  }

  // int64 ConId = 2;
  if (this->conid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->conid(), target);
  }

  // .PLogin_Client.CL_Login loginMsg = 3;
  if (this->has_loginmsg()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->loginmsg_, deterministic, target);
  }

  // .PDB_Base.DBAccount dBAccount = 4;
  if (this->has_dbaccount()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->dbaccount_, deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:PDB_Login.DL_UserCheck)
  return target;
}

size_t DL_UserCheck::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PDB_Login.DL_UserCheck)
  size_t total_size = 0;

  // .PLogin_Client.CL_Login loginMsg = 3;
  if (this->has_loginmsg()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->loginmsg_);
  }

  // .PDB_Base.DBAccount dBAccount = 4;
  if (this->has_dbaccount()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->dbaccount_);
  }

  // int64 ConId = 2;
  if (this->conid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->conid());
  }

  // int32 ret = 1;
  if (this->ret() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->ret());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DL_UserCheck::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PDB_Login.DL_UserCheck)
  GOOGLE_DCHECK_NE(&from, this);
  const DL_UserCheck* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const DL_UserCheck>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PDB_Login.DL_UserCheck)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PDB_Login.DL_UserCheck)
    MergeFrom(*source);
  }
}

void DL_UserCheck::MergeFrom(const DL_UserCheck& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PDB_Login.DL_UserCheck)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_loginmsg()) {
    mutable_loginmsg()->::PLogin_Client::CL_Login::MergeFrom(from.loginmsg());
  }
  if (from.has_dbaccount()) {
    mutable_dbaccount()->::PDB_Base::DBAccount::MergeFrom(from.dbaccount());
  }
  if (from.conid() != 0) {
    set_conid(from.conid());
  }
  if (from.ret() != 0) {
    set_ret(from.ret());
  }
}

void DL_UserCheck::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PDB_Login.DL_UserCheck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DL_UserCheck::CopyFrom(const DL_UserCheck& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PDB_Login.DL_UserCheck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DL_UserCheck::IsInitialized() const {
  return true;
}

void DL_UserCheck::Swap(DL_UserCheck* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DL_UserCheck::InternalSwap(DL_UserCheck* other) {
  std::swap(loginmsg_, other->loginmsg_);
  std::swap(dbaccount_, other->dbaccount_);
  std::swap(conid_, other->conid_);
  std::swap(ret_, other->ret_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DL_UserCheck::GetMetadata() const {
  protobuf_DB_5fLogin_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_DB_5fLogin_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DL_UserCheck

// int32 ret = 1;
void DL_UserCheck::clear_ret() {
  ret_ = 0;
}
::google::protobuf::int32 DL_UserCheck::ret() const {
  // @@protoc_insertion_point(field_get:PDB_Login.DL_UserCheck.ret)
  return ret_;
}
void DL_UserCheck::set_ret(::google::protobuf::int32 value) {
  
  ret_ = value;
  // @@protoc_insertion_point(field_set:PDB_Login.DL_UserCheck.ret)
}

// int64 ConId = 2;
void DL_UserCheck::clear_conid() {
  conid_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 DL_UserCheck::conid() const {
  // @@protoc_insertion_point(field_get:PDB_Login.DL_UserCheck.ConId)
  return conid_;
}
void DL_UserCheck::set_conid(::google::protobuf::int64 value) {
  
  conid_ = value;
  // @@protoc_insertion_point(field_set:PDB_Login.DL_UserCheck.ConId)
}

// .PLogin_Client.CL_Login loginMsg = 3;
bool DL_UserCheck::has_loginmsg() const {
  return this != internal_default_instance() && loginmsg_ != NULL;
}
void DL_UserCheck::clear_loginmsg() {
  if (GetArenaNoVirtual() == NULL && loginmsg_ != NULL) delete loginmsg_;
  loginmsg_ = NULL;
}
const ::PLogin_Client::CL_Login& DL_UserCheck::loginmsg() const {
  // @@protoc_insertion_point(field_get:PDB_Login.DL_UserCheck.loginMsg)
  return loginmsg_ != NULL ? *loginmsg_
                         : *::PLogin_Client::CL_Login::internal_default_instance();
}
::PLogin_Client::CL_Login* DL_UserCheck::mutable_loginmsg() {
  
  if (loginmsg_ == NULL) {
    loginmsg_ = new ::PLogin_Client::CL_Login;
  }
  // @@protoc_insertion_point(field_mutable:PDB_Login.DL_UserCheck.loginMsg)
  return loginmsg_;
}
::PLogin_Client::CL_Login* DL_UserCheck::release_loginmsg() {
  // @@protoc_insertion_point(field_release:PDB_Login.DL_UserCheck.loginMsg)
  
  ::PLogin_Client::CL_Login* temp = loginmsg_;
  loginmsg_ = NULL;
  return temp;
}
void DL_UserCheck::set_allocated_loginmsg(::PLogin_Client::CL_Login* loginmsg) {
  delete loginmsg_;
  loginmsg_ = loginmsg;
  if (loginmsg) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:PDB_Login.DL_UserCheck.loginMsg)
}

// .PDB_Base.DBAccount dBAccount = 4;
bool DL_UserCheck::has_dbaccount() const {
  return this != internal_default_instance() && dbaccount_ != NULL;
}
void DL_UserCheck::clear_dbaccount() {
  if (GetArenaNoVirtual() == NULL && dbaccount_ != NULL) delete dbaccount_;
  dbaccount_ = NULL;
}
const ::PDB_Base::DBAccount& DL_UserCheck::dbaccount() const {
  // @@protoc_insertion_point(field_get:PDB_Login.DL_UserCheck.dBAccount)
  return dbaccount_ != NULL ? *dbaccount_
                         : *::PDB_Base::DBAccount::internal_default_instance();
}
::PDB_Base::DBAccount* DL_UserCheck::mutable_dbaccount() {
  
  if (dbaccount_ == NULL) {
    dbaccount_ = new ::PDB_Base::DBAccount;
  }
  // @@protoc_insertion_point(field_mutable:PDB_Login.DL_UserCheck.dBAccount)
  return dbaccount_;
}
::PDB_Base::DBAccount* DL_UserCheck::release_dbaccount() {
  // @@protoc_insertion_point(field_release:PDB_Login.DL_UserCheck.dBAccount)
  
  ::PDB_Base::DBAccount* temp = dbaccount_;
  dbaccount_ = NULL;
  return temp;
}
void DL_UserCheck::set_allocated_dbaccount(::PDB_Base::DBAccount* dbaccount) {
  delete dbaccount_;
  dbaccount_ = dbaccount;
  if (dbaccount) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:PDB_Login.DL_UserCheck.dBAccount)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace PDB_Login

// @@protoc_insertion_point(global_scope)