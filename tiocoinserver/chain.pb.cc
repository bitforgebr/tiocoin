// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chain.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "chain.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* pb_transaction_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  pb_transaction_reflection_ = NULL;
const ::google::protobuf::Descriptor* pb_challenge_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  pb_challenge_reflection_ = NULL;
const ::google::protobuf::Descriptor* pb_chain_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  pb_chain_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_chain_2eproto() {
  protobuf_AddDesc_chain_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "chain.proto");
  GOOGLE_CHECK(file != NULL);
  pb_transaction_descriptor_ = file->message_type(0);
  static const int pb_transaction_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pb_transaction, id_),
  };
  pb_transaction_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      pb_transaction_descriptor_,
      pb_transaction::default_instance_,
      pb_transaction_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pb_transaction, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pb_transaction, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(pb_transaction));
  pb_challenge_descriptor_ = file->message_type(1);
  static const int pb_challenge_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pb_challenge, question_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pb_challenge, answer_),
  };
  pb_challenge_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      pb_challenge_descriptor_,
      pb_challenge::default_instance_,
      pb_challenge_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pb_challenge, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pb_challenge, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(pb_challenge));
  pb_chain_descriptor_ = file->message_type(2);
  static const int pb_chain_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pb_chain, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pb_chain, state_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pb_chain, transaction_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pb_chain, challenge_),
  };
  pb_chain_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      pb_chain_descriptor_,
      pb_chain::default_instance_,
      pb_chain_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pb_chain, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pb_chain, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(pb_chain));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_chain_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    pb_transaction_descriptor_, &pb_transaction::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    pb_challenge_descriptor_, &pb_challenge::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    pb_chain_descriptor_, &pb_chain::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_chain_2eproto() {
  delete pb_transaction::default_instance_;
  delete pb_transaction_reflection_;
  delete pb_challenge::default_instance_;
  delete pb_challenge_reflection_;
  delete pb_chain::default_instance_;
  delete pb_chain_reflection_;
}

void protobuf_AddDesc_chain_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013chain.proto\"\034\n\016pb_transaction\022\n\n\002id\030\001 "
    "\001(\t\"0\n\014pb_challenge\022\020\n\010question\030\001 \001(\t\022\016\n"
    "\006answer\030\002 \001(\t\"m\n\010pb_chain\022\n\n\002id\030\001 \001(\005\022\r\n"
    "\005state\030\002 \001(\t\022$\n\013transaction\030\003 \003(\0132\017.pb_t"
    "ransaction\022 \n\tchallenge\030\004 \001(\0132\r.pb_chall"
    "enge", 204);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "chain.proto", &protobuf_RegisterTypes);
  pb_transaction::default_instance_ = new pb_transaction();
  pb_challenge::default_instance_ = new pb_challenge();
  pb_chain::default_instance_ = new pb_chain();
  pb_transaction::default_instance_->InitAsDefaultInstance();
  pb_challenge::default_instance_->InitAsDefaultInstance();
  pb_chain::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_chain_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_chain_2eproto {
  StaticDescriptorInitializer_chain_2eproto() {
    protobuf_AddDesc_chain_2eproto();
  }
} static_descriptor_initializer_chain_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int pb_transaction::kIdFieldNumber;
#endif  // !_MSC_VER

pb_transaction::pb_transaction()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb_transaction)
}

void pb_transaction::InitAsDefaultInstance() {
}

pb_transaction::pb_transaction(const pb_transaction& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:pb_transaction)
}

void pb_transaction::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

pb_transaction::~pb_transaction() {
  // @@protoc_insertion_point(destructor:pb_transaction)
  SharedDtor();
}

void pb_transaction::SharedDtor() {
  if (id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete id_;
  }
  if (this != default_instance_) {
  }
}

void pb_transaction::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* pb_transaction::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return pb_transaction_descriptor_;
}

const pb_transaction& pb_transaction::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

pb_transaction* pb_transaction::default_instance_ = NULL;

pb_transaction* pb_transaction::New() const {
  return new pb_transaction;
}

void pb_transaction::Clear() {
  if (has_id()) {
    if (id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      id_->clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool pb_transaction::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pb_transaction)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->id().data(), this->id().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "id");
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
  // @@protoc_insertion_point(parse_success:pb_transaction)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pb_transaction)
  return false;
#undef DO_
}

void pb_transaction::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pb_transaction)
  // optional string id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pb_transaction)
}

::google::protobuf::uint8* pb_transaction::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb_transaction)
  // optional string id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb_transaction)
  return target;
}

int pb_transaction::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
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

void pb_transaction::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const pb_transaction* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const pb_transaction*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void pb_transaction::MergeFrom(const pb_transaction& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void pb_transaction::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void pb_transaction::CopyFrom(const pb_transaction& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool pb_transaction::IsInitialized() const {

  return true;
}

void pb_transaction::Swap(pb_transaction* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata pb_transaction::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = pb_transaction_descriptor_;
  metadata.reflection = pb_transaction_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int pb_challenge::kQuestionFieldNumber;
const int pb_challenge::kAnswerFieldNumber;
#endif  // !_MSC_VER

pb_challenge::pb_challenge()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb_challenge)
}

void pb_challenge::InitAsDefaultInstance() {
}

pb_challenge::pb_challenge(const pb_challenge& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:pb_challenge)
}

void pb_challenge::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  question_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  answer_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

pb_challenge::~pb_challenge() {
  // @@protoc_insertion_point(destructor:pb_challenge)
  SharedDtor();
}

void pb_challenge::SharedDtor() {
  if (question_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete question_;
  }
  if (answer_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete answer_;
  }
  if (this != default_instance_) {
  }
}

void pb_challenge::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* pb_challenge::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return pb_challenge_descriptor_;
}

const pb_challenge& pb_challenge::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

pb_challenge* pb_challenge::default_instance_ = NULL;

pb_challenge* pb_challenge::New() const {
  return new pb_challenge;
}

void pb_challenge::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_question()) {
      if (question_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        question_->clear();
      }
    }
    if (has_answer()) {
      if (answer_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        answer_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool pb_challenge::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pb_challenge)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string question = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_question()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->question().data(), this->question().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "question");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_answer;
        break;
      }

      // optional string answer = 2;
      case 2: {
        if (tag == 18) {
         parse_answer:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_answer()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->answer().data(), this->answer().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "answer");
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
  // @@protoc_insertion_point(parse_success:pb_challenge)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pb_challenge)
  return false;
#undef DO_
}

void pb_challenge::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pb_challenge)
  // optional string question = 1;
  if (has_question()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->question().data(), this->question().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "question");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->question(), output);
  }

  // optional string answer = 2;
  if (has_answer()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->answer().data(), this->answer().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "answer");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->answer(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pb_challenge)
}

::google::protobuf::uint8* pb_challenge::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb_challenge)
  // optional string question = 1;
  if (has_question()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->question().data(), this->question().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "question");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->question(), target);
  }

  // optional string answer = 2;
  if (has_answer()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->answer().data(), this->answer().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "answer");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->answer(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb_challenge)
  return target;
}

int pb_challenge::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string question = 1;
    if (has_question()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->question());
    }

    // optional string answer = 2;
    if (has_answer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->answer());
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

void pb_challenge::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const pb_challenge* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const pb_challenge*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void pb_challenge::MergeFrom(const pb_challenge& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_question()) {
      set_question(from.question());
    }
    if (from.has_answer()) {
      set_answer(from.answer());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void pb_challenge::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void pb_challenge::CopyFrom(const pb_challenge& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool pb_challenge::IsInitialized() const {

  return true;
}

void pb_challenge::Swap(pb_challenge* other) {
  if (other != this) {
    std::swap(question_, other->question_);
    std::swap(answer_, other->answer_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata pb_challenge::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = pb_challenge_descriptor_;
  metadata.reflection = pb_challenge_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int pb_chain::kIdFieldNumber;
const int pb_chain::kStateFieldNumber;
const int pb_chain::kTransactionFieldNumber;
const int pb_chain::kChallengeFieldNumber;
#endif  // !_MSC_VER

pb_chain::pb_chain()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb_chain)
}

void pb_chain::InitAsDefaultInstance() {
  challenge_ = const_cast< ::pb_challenge*>(&::pb_challenge::default_instance());
}

pb_chain::pb_chain(const pb_chain& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:pb_chain)
}

void pb_chain::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  state_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  challenge_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

pb_chain::~pb_chain() {
  // @@protoc_insertion_point(destructor:pb_chain)
  SharedDtor();
}

void pb_chain::SharedDtor() {
  if (state_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete state_;
  }
  if (this != default_instance_) {
    delete challenge_;
  }
}

void pb_chain::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* pb_chain::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return pb_chain_descriptor_;
}

const pb_chain& pb_chain::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chain_2eproto();
  return *default_instance_;
}

pb_chain* pb_chain::default_instance_ = NULL;

pb_chain* pb_chain::New() const {
  return new pb_chain;
}

void pb_chain::Clear() {
  if (_has_bits_[0 / 32] & 11) {
    id_ = 0;
    if (has_state()) {
      if (state_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        state_->clear();
      }
    }
    if (has_challenge()) {
      if (challenge_ != NULL) challenge_->::pb_challenge::Clear();
    }
  }
  transaction_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool pb_chain::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pb_chain)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_state;
        break;
      }

      // optional string state = 2;
      case 2: {
        if (tag == 18) {
         parse_state:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_state()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->state().data(), this->state().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "state");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_transaction;
        break;
      }

      // repeated .pb_transaction transaction = 3;
      case 3: {
        if (tag == 26) {
         parse_transaction:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_transaction()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_transaction;
        if (input->ExpectTag(34)) goto parse_challenge;
        break;
      }

      // optional .pb_challenge challenge = 4;
      case 4: {
        if (tag == 34) {
         parse_challenge:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_challenge()));
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
  // @@protoc_insertion_point(parse_success:pb_chain)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pb_chain)
  return false;
#undef DO_
}

void pb_chain::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pb_chain)
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string state = 2;
  if (has_state()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->state().data(), this->state().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "state");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->state(), output);
  }

  // repeated .pb_transaction transaction = 3;
  for (int i = 0; i < this->transaction_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->transaction(i), output);
  }

  // optional .pb_challenge challenge = 4;
  if (has_challenge()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->challenge(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pb_chain)
}

::google::protobuf::uint8* pb_chain::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb_chain)
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string state = 2;
  if (has_state()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->state().data(), this->state().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "state");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->state(), target);
  }

  // repeated .pb_transaction transaction = 3;
  for (int i = 0; i < this->transaction_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->transaction(i), target);
  }

  // optional .pb_challenge challenge = 4;
  if (has_challenge()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->challenge(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb_chain)
  return target;
}

int pb_chain::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional string state = 2;
    if (has_state()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->state());
    }

    // optional .pb_challenge challenge = 4;
    if (has_challenge()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->challenge());
    }

  }
  // repeated .pb_transaction transaction = 3;
  total_size += 1 * this->transaction_size();
  for (int i = 0; i < this->transaction_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->transaction(i));
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

void pb_chain::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const pb_chain* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const pb_chain*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void pb_chain::MergeFrom(const pb_chain& from) {
  GOOGLE_CHECK_NE(&from, this);
  transaction_.MergeFrom(from.transaction_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_state()) {
      set_state(from.state());
    }
    if (from.has_challenge()) {
      mutable_challenge()->::pb_challenge::MergeFrom(from.challenge());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void pb_chain::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void pb_chain::CopyFrom(const pb_chain& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool pb_chain::IsInitialized() const {

  return true;
}

void pb_chain::Swap(pb_chain* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(state_, other->state_);
    transaction_.Swap(&other->transaction_);
    std::swap(challenge_, other->challenge_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata pb_chain::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = pb_chain_descriptor_;
  metadata.reflection = pb_chain_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
