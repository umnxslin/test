// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Odometry.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Odometry.pb.h"

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

namespace gz_geometry_msgs {

namespace {

const ::google::protobuf::Descriptor* Odometry_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Odometry_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Odometry_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_Odometry_2eproto() {
  protobuf_AddDesc_Odometry_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Odometry.proto");
  GOOGLE_CHECK(file != NULL);
  Odometry_descriptor_ = file->message_type(0);
  static const int Odometry_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Odometry, header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Odometry, child_frame_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Odometry, pose_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Odometry, twist_),
  };
  Odometry_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Odometry_descriptor_,
      Odometry::default_instance_,
      Odometry_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Odometry, _has_bits_[0]),
      -1,
      -1,
      sizeof(Odometry),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Odometry, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Odometry_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Odometry_descriptor_, &Odometry::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Odometry_2eproto() {
  delete Odometry::default_instance_;
  delete Odometry_reflection_;
}

void protobuf_AddDesc_Odometry_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_Odometry_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gz_std_msgs::protobuf_AddDesc_Header_2eproto();
  ::gz_geometry_msgs::protobuf_AddDesc_PoseWithCovariance_2eproto();
  ::gz_geometry_msgs::protobuf_AddDesc_TwistWithCovariance_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016Odometry.proto\022\020gz_geometry_msgs\032\014Head"
    "er.proto\032\030PoseWithCovariance.proto\032\031Twis"
    "tWithCovariance.proto\"\261\001\n\010Odometry\022#\n\006he"
    "ader\030\001 \002(\0132\023.gz_std_msgs.Header\022\026\n\016child"
    "_frame_id\030\002 \002(\t\0222\n\004pose\030\003 \002(\0132$.gz_geome"
    "try_msgs.PoseWithCovariance\0224\n\005twist\030\004 \002"
    "(\0132%.gz_geometry_msgs.TwistWithCovarianc"
    "e", 281);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Odometry.proto", &protobuf_RegisterTypes);
  Odometry::default_instance_ = new Odometry();
  Odometry::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Odometry_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Odometry_2eproto {
  StaticDescriptorInitializer_Odometry_2eproto() {
    protobuf_AddDesc_Odometry_2eproto();
  }
} static_descriptor_initializer_Odometry_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Odometry::kHeaderFieldNumber;
const int Odometry::kChildFrameIdFieldNumber;
const int Odometry::kPoseFieldNumber;
const int Odometry::kTwistFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Odometry::Odometry()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz_geometry_msgs.Odometry)
}

void Odometry::InitAsDefaultInstance() {
  header_ = const_cast< ::gz_std_msgs::Header*>(&::gz_std_msgs::Header::default_instance());
  pose_ = const_cast< ::gz_geometry_msgs::PoseWithCovariance*>(&::gz_geometry_msgs::PoseWithCovariance::default_instance());
  twist_ = const_cast< ::gz_geometry_msgs::TwistWithCovariance*>(&::gz_geometry_msgs::TwistWithCovariance::default_instance());
}

Odometry::Odometry(const Odometry& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gz_geometry_msgs.Odometry)
}

void Odometry::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  header_ = NULL;
  child_frame_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pose_ = NULL;
  twist_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Odometry::~Odometry() {
  // @@protoc_insertion_point(destructor:gz_geometry_msgs.Odometry)
  SharedDtor();
}

void Odometry::SharedDtor() {
  child_frame_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete header_;
    delete pose_;
    delete twist_;
  }
}

void Odometry::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Odometry::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Odometry_descriptor_;
}

const Odometry& Odometry::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Odometry_2eproto();
  return *default_instance_;
}

Odometry* Odometry::default_instance_ = NULL;

Odometry* Odometry::New(::google::protobuf::Arena* arena) const {
  Odometry* n = new Odometry;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Odometry::Clear() {
// @@protoc_insertion_point(message_clear_start:gz_geometry_msgs.Odometry)
  if (_has_bits_[0 / 32] & 15u) {
    if (has_header()) {
      if (header_ != NULL) header_->::gz_std_msgs::Header::Clear();
    }
    if (has_child_frame_id()) {
      child_frame_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_pose()) {
      if (pose_ != NULL) pose_->::gz_geometry_msgs::PoseWithCovariance::Clear();
    }
    if (has_twist()) {
      if (twist_ != NULL) twist_->::gz_geometry_msgs::TwistWithCovariance::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Odometry::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz_geometry_msgs.Odometry)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gz_std_msgs.Header header = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_child_frame_id;
        break;
      }

      // required string child_frame_id = 2;
      case 2: {
        if (tag == 18) {
         parse_child_frame_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_child_frame_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->child_frame_id().data(), this->child_frame_id().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "gz_geometry_msgs.Odometry.child_frame_id");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_pose;
        break;
      }

      // required .gz_geometry_msgs.PoseWithCovariance pose = 3;
      case 3: {
        if (tag == 26) {
         parse_pose:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pose()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_twist;
        break;
      }

      // required .gz_geometry_msgs.TwistWithCovariance twist = 4;
      case 4: {
        if (tag == 34) {
         parse_twist:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_twist()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
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
  // @@protoc_insertion_point(parse_success:gz_geometry_msgs.Odometry)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz_geometry_msgs.Odometry)
  return false;
#undef DO_
}

void Odometry::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz_geometry_msgs.Odometry)
  // required .gz_std_msgs.Header header = 1;
  if (has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->header_, output);
  }

  // required string child_frame_id = 2;
  if (has_child_frame_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->child_frame_id().data(), this->child_frame_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "gz_geometry_msgs.Odometry.child_frame_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->child_frame_id(), output);
  }

  // required .gz_geometry_msgs.PoseWithCovariance pose = 3;
  if (has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->pose_, output);
  }

  // required .gz_geometry_msgs.TwistWithCovariance twist = 4;
  if (has_twist()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->twist_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gz_geometry_msgs.Odometry)
}

::google::protobuf::uint8* Odometry::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gz_geometry_msgs.Odometry)
  // required .gz_std_msgs.Header header = 1;
  if (has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->header_, false, target);
  }

  // required string child_frame_id = 2;
  if (has_child_frame_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->child_frame_id().data(), this->child_frame_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "gz_geometry_msgs.Odometry.child_frame_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->child_frame_id(), target);
  }

  // required .gz_geometry_msgs.PoseWithCovariance pose = 3;
  if (has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->pose_, false, target);
  }

  // required .gz_geometry_msgs.TwistWithCovariance twist = 4;
  if (has_twist()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->twist_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz_geometry_msgs.Odometry)
  return target;
}

int Odometry::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gz_geometry_msgs.Odometry)
  int total_size = 0;

  if (has_header()) {
    // required .gz_std_msgs.Header header = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->header_);
  }

  if (has_child_frame_id()) {
    // required string child_frame_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->child_frame_id());
  }

  if (has_pose()) {
    // required .gz_geometry_msgs.PoseWithCovariance pose = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pose_);
  }

  if (has_twist()) {
    // required .gz_geometry_msgs.TwistWithCovariance twist = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->twist_);
  }

  return total_size;
}
int Odometry::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:gz_geometry_msgs.Odometry)
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required .gz_std_msgs.Header header = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->header_);

    // required string child_frame_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->child_frame_id());

    // required .gz_geometry_msgs.PoseWithCovariance pose = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pose_);

    // required .gz_geometry_msgs.TwistWithCovariance twist = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->twist_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Odometry::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz_geometry_msgs.Odometry)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Odometry* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Odometry>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz_geometry_msgs.Odometry)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz_geometry_msgs.Odometry)
    MergeFrom(*source);
  }
}

void Odometry::MergeFrom(const Odometry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz_geometry_msgs.Odometry)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_header()) {
      mutable_header()->::gz_std_msgs::Header::MergeFrom(from.header());
    }
    if (from.has_child_frame_id()) {
      set_has_child_frame_id();
      child_frame_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.child_frame_id_);
    }
    if (from.has_pose()) {
      mutable_pose()->::gz_geometry_msgs::PoseWithCovariance::MergeFrom(from.pose());
    }
    if (from.has_twist()) {
      mutable_twist()->::gz_geometry_msgs::TwistWithCovariance::MergeFrom(from.twist());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Odometry::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz_geometry_msgs.Odometry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Odometry::CopyFrom(const Odometry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz_geometry_msgs.Odometry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Odometry::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  if (has_header()) {
    if (!this->header_->IsInitialized()) return false;
  }
  if (has_pose()) {
    if (!this->pose_->IsInitialized()) return false;
  }
  if (has_twist()) {
    if (!this->twist_->IsInitialized()) return false;
  }
  return true;
}

void Odometry::Swap(Odometry* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Odometry::InternalSwap(Odometry* other) {
  std::swap(header_, other->header_);
  child_frame_id_.Swap(&other->child_frame_id_);
  std::swap(pose_, other->pose_);
  std::swap(twist_, other->twist_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Odometry::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Odometry_descriptor_;
  metadata.reflection = Odometry_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Odometry

// required .gz_std_msgs.Header header = 1;
bool Odometry::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Odometry::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
void Odometry::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
void Odometry::clear_header() {
  if (header_ != NULL) header_->::gz_std_msgs::Header::Clear();
  clear_has_header();
}
const ::gz_std_msgs::Header& Odometry::header() const {
  // @@protoc_insertion_point(field_get:gz_geometry_msgs.Odometry.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
::gz_std_msgs::Header* Odometry::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::gz_std_msgs::Header;
  }
  // @@protoc_insertion_point(field_mutable:gz_geometry_msgs.Odometry.header)
  return header_;
}
::gz_std_msgs::Header* Odometry::release_header() {
  // @@protoc_insertion_point(field_release:gz_geometry_msgs.Odometry.header)
  clear_has_header();
  ::gz_std_msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
void Odometry::set_allocated_header(::gz_std_msgs::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_geometry_msgs.Odometry.header)
}

// required string child_frame_id = 2;
bool Odometry::has_child_frame_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Odometry::set_has_child_frame_id() {
  _has_bits_[0] |= 0x00000002u;
}
void Odometry::clear_has_child_frame_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void Odometry::clear_child_frame_id() {
  child_frame_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_child_frame_id();
}
 const ::std::string& Odometry::child_frame_id() const {
  // @@protoc_insertion_point(field_get:gz_geometry_msgs.Odometry.child_frame_id)
  return child_frame_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Odometry::set_child_frame_id(const ::std::string& value) {
  set_has_child_frame_id();
  child_frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz_geometry_msgs.Odometry.child_frame_id)
}
 void Odometry::set_child_frame_id(const char* value) {
  set_has_child_frame_id();
  child_frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz_geometry_msgs.Odometry.child_frame_id)
}
 void Odometry::set_child_frame_id(const char* value, size_t size) {
  set_has_child_frame_id();
  child_frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz_geometry_msgs.Odometry.child_frame_id)
}
 ::std::string* Odometry::mutable_child_frame_id() {
  set_has_child_frame_id();
  // @@protoc_insertion_point(field_mutable:gz_geometry_msgs.Odometry.child_frame_id)
  return child_frame_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Odometry::release_child_frame_id() {
  // @@protoc_insertion_point(field_release:gz_geometry_msgs.Odometry.child_frame_id)
  clear_has_child_frame_id();
  return child_frame_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Odometry::set_allocated_child_frame_id(::std::string* child_frame_id) {
  if (child_frame_id != NULL) {
    set_has_child_frame_id();
  } else {
    clear_has_child_frame_id();
  }
  child_frame_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), child_frame_id);
  // @@protoc_insertion_point(field_set_allocated:gz_geometry_msgs.Odometry.child_frame_id)
}

// required .gz_geometry_msgs.PoseWithCovariance pose = 3;
bool Odometry::has_pose() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Odometry::set_has_pose() {
  _has_bits_[0] |= 0x00000004u;
}
void Odometry::clear_has_pose() {
  _has_bits_[0] &= ~0x00000004u;
}
void Odometry::clear_pose() {
  if (pose_ != NULL) pose_->::gz_geometry_msgs::PoseWithCovariance::Clear();
  clear_has_pose();
}
const ::gz_geometry_msgs::PoseWithCovariance& Odometry::pose() const {
  // @@protoc_insertion_point(field_get:gz_geometry_msgs.Odometry.pose)
  return pose_ != NULL ? *pose_ : *default_instance_->pose_;
}
::gz_geometry_msgs::PoseWithCovariance* Odometry::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) {
    pose_ = new ::gz_geometry_msgs::PoseWithCovariance;
  }
  // @@protoc_insertion_point(field_mutable:gz_geometry_msgs.Odometry.pose)
  return pose_;
}
::gz_geometry_msgs::PoseWithCovariance* Odometry::release_pose() {
  // @@protoc_insertion_point(field_release:gz_geometry_msgs.Odometry.pose)
  clear_has_pose();
  ::gz_geometry_msgs::PoseWithCovariance* temp = pose_;
  pose_ = NULL;
  return temp;
}
void Odometry::set_allocated_pose(::gz_geometry_msgs::PoseWithCovariance* pose) {
  delete pose_;
  pose_ = pose;
  if (pose) {
    set_has_pose();
  } else {
    clear_has_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_geometry_msgs.Odometry.pose)
}

// required .gz_geometry_msgs.TwistWithCovariance twist = 4;
bool Odometry::has_twist() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void Odometry::set_has_twist() {
  _has_bits_[0] |= 0x00000008u;
}
void Odometry::clear_has_twist() {
  _has_bits_[0] &= ~0x00000008u;
}
void Odometry::clear_twist() {
  if (twist_ != NULL) twist_->::gz_geometry_msgs::TwistWithCovariance::Clear();
  clear_has_twist();
}
const ::gz_geometry_msgs::TwistWithCovariance& Odometry::twist() const {
  // @@protoc_insertion_point(field_get:gz_geometry_msgs.Odometry.twist)
  return twist_ != NULL ? *twist_ : *default_instance_->twist_;
}
::gz_geometry_msgs::TwistWithCovariance* Odometry::mutable_twist() {
  set_has_twist();
  if (twist_ == NULL) {
    twist_ = new ::gz_geometry_msgs::TwistWithCovariance;
  }
  // @@protoc_insertion_point(field_mutable:gz_geometry_msgs.Odometry.twist)
  return twist_;
}
::gz_geometry_msgs::TwistWithCovariance* Odometry::release_twist() {
  // @@protoc_insertion_point(field_release:gz_geometry_msgs.Odometry.twist)
  clear_has_twist();
  ::gz_geometry_msgs::TwistWithCovariance* temp = twist_;
  twist_ = NULL;
  return temp;
}
void Odometry::set_allocated_twist(::gz_geometry_msgs::TwistWithCovariance* twist) {
  delete twist_;
  twist_ = twist;
  if (twist) {
    set_has_twist();
  } else {
    clear_has_twist();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_geometry_msgs.Odometry.twist)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_geometry_msgs

// @@protoc_insertion_point(global_scope)
