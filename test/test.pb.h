// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef PROTOBUF_test_2eproto__INCLUDED
#define PROTOBUF_test_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_test_2eproto();
void protobuf_AssignDesc_test_2eproto();
void protobuf_ShutdownFile_test_2eproto();

class Arg;
class Header;
class Request;

// ===================================================================

class Header : public ::google::protobuf::Message {
 public:
  Header();
  virtual ~Header();

  Header(const Header& from);

  inline Header& operator=(const Header& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Header& default_instance();

  enum TestoneCase {
    kTestone1 = 4,
    kTestone2 = 5,
    TESTONE_NOT_SET = 0,
  };

  void Swap(Header* other);

  // implements Message ----------------------------------------------

  inline Header* New() const { return New(NULL); }

  Header* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Header& from);
  void MergeFrom(const Header& from);
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
  void InternalSwap(Header* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string user = 1;
  void clear_user();
  static const int kUserFieldNumber = 1;
  const ::std::string& user() const;
  void set_user(const ::std::string& value);
  void set_user(const char* value);
  void set_user(const char* value, size_t size);
  ::std::string* mutable_user();
  ::std::string* release_user();
  void set_allocated_user(::std::string* user);

  // optional string passwd = 2;
  void clear_passwd();
  static const int kPasswdFieldNumber = 2;
  const ::std::string& passwd() const;
  void set_passwd(const ::std::string& value);
  void set_passwd(const char* value);
  void set_passwd(const char* value, size_t size);
  ::std::string* mutable_passwd();
  ::std::string* release_passwd();
  void set_allocated_passwd(::std::string* passwd);

  // optional bool aa = 3;
  void clear_aa();
  static const int kAaFieldNumber = 3;
  bool aa() const;
  void set_aa(bool value);

  // optional string testone1 = 4;
  private:
  bool has_testone1() const;
  public:
  void clear_testone1();
  static const int kTestone1FieldNumber = 4;
  const ::std::string& testone1() const;
  void set_testone1(const ::std::string& value);
  void set_testone1(const char* value);
  void set_testone1(const char* value, size_t size);
  ::std::string* mutable_testone1();
  ::std::string* release_testone1();
  void set_allocated_testone1(::std::string* testone1);

  // optional int32 testone2 = 5;
  private:
  bool has_testone2() const;
  public:
  void clear_testone2();
  static const int kTestone2FieldNumber = 5;
  ::google::protobuf::int32 testone2() const;
  void set_testone2(::google::protobuf::int32 value);

  TestoneCase testone_case() const;
  // @@protoc_insertion_point(class_scope:Header)
 private:
  inline void set_has_testone1();
  inline void set_has_testone2();

  inline bool has_testone() const;
  void clear_testone();
  inline void clear_has_testone();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr user_;
  ::google::protobuf::internal::ArenaStringPtr passwd_;
  bool aa_;
  union TestoneUnion {
    TestoneUnion() {}
    ::google::protobuf::internal::ArenaStringPtr testone1_;
    ::google::protobuf::int32 testone2_;
  } testone_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static Header* default_instance_;
};
// -------------------------------------------------------------------

class Arg : public ::google::protobuf::Message {
 public:
  Arg();
  virtual ~Arg();

  Arg(const Arg& from);

  inline Arg& operator=(const Arg& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Arg& default_instance();

  void Swap(Arg* other);

  // implements Message ----------------------------------------------

  inline Arg* New() const { return New(NULL); }

  Arg* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Arg& from);
  void MergeFrom(const Arg& from);
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
  void InternalSwap(Arg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string f1 = 1;
  void clear_f1();
  static const int kF1FieldNumber = 1;
  const ::std::string& f1() const;
  void set_f1(const ::std::string& value);
  void set_f1(const char* value);
  void set_f1(const char* value, size_t size);
  ::std::string* mutable_f1();
  ::std::string* release_f1();
  void set_allocated_f1(::std::string* f1);

  // optional string f2 = 2;
  void clear_f2();
  static const int kF2FieldNumber = 2;
  const ::std::string& f2() const;
  void set_f2(const ::std::string& value);
  void set_f2(const char* value);
  void set_f2(const char* value, size_t size);
  ::std::string* mutable_f2();
  ::std::string* release_f2();
  void set_allocated_f2(::std::string* f2);

  // @@protoc_insertion_point(class_scope:Arg)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr f1_;
  ::google::protobuf::internal::ArenaStringPtr f2_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static Arg* default_instance_;
};
// -------------------------------------------------------------------

class Request : public ::google::protobuf::Message {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Request& default_instance();

  void Swap(Request* other);

  // implements Message ----------------------------------------------

  inline Request* New() const { return New(NULL); }

  Request* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
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
  void InternalSwap(Request* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::Header& header() const;
  ::Header* mutable_header();
  ::Header* release_header();
  void set_allocated_header(::Header* header);

  // optional int32 arg1 = 2;
  void clear_arg1();
  static const int kArg1FieldNumber = 2;
  ::google::protobuf::int32 arg1() const;
  void set_arg1(::google::protobuf::int32 value);

  // repeated int64 arg2 = 3;
  int arg2_size() const;
  void clear_arg2();
  static const int kArg2FieldNumber = 3;
  ::google::protobuf::int64 arg2(int index) const;
  void set_arg2(int index, ::google::protobuf::int64 value);
  void add_arg2(::google::protobuf::int64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      arg2() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_arg2();

  // optional double arg3 = 4;
  void clear_arg3();
  static const int kArg3FieldNumber = 4;
  double arg3() const;
  void set_arg3(double value);

  // repeated .Arg args = 5;
  int args_size() const;
  void clear_args();
  static const int kArgsFieldNumber = 5;
  const ::Arg& args(int index) const;
  ::Arg* mutable_args(int index);
  ::Arg* add_args();
  ::google::protobuf::RepeatedPtrField< ::Arg >*
      mutable_args();
  const ::google::protobuf::RepeatedPtrField< ::Arg >&
      args() const;

  // @@protoc_insertion_point(class_scope:Request)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::Header* header_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > arg2_;
  mutable int _arg2_cached_byte_size_;
  double arg3_;
  ::google::protobuf::RepeatedPtrField< ::Arg > args_;
  ::google::protobuf::int32 arg1_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static Request* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Header

// optional string user = 1;
inline void Header::clear_user() {
  user_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Header::user() const {
  // @@protoc_insertion_point(field_get:Header.user)
  return user_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Header::set_user(const ::std::string& value) {
  
  user_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Header.user)
}
inline void Header::set_user(const char* value) {
  
  user_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Header.user)
}
inline void Header::set_user(const char* value, size_t size) {
  
  user_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Header.user)
}
inline ::std::string* Header::mutable_user() {
  
  // @@protoc_insertion_point(field_mutable:Header.user)
  return user_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Header::release_user() {
  
  return user_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Header::set_allocated_user(::std::string* user) {
  if (user != NULL) {
    
  } else {
    
  }
  user_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user);
  // @@protoc_insertion_point(field_set_allocated:Header.user)
}

// optional string passwd = 2;
inline void Header::clear_passwd() {
  passwd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Header::passwd() const {
  // @@protoc_insertion_point(field_get:Header.passwd)
  return passwd_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Header::set_passwd(const ::std::string& value) {
  
  passwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Header.passwd)
}
inline void Header::set_passwd(const char* value) {
  
  passwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Header.passwd)
}
inline void Header::set_passwd(const char* value, size_t size) {
  
  passwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Header.passwd)
}
inline ::std::string* Header::mutable_passwd() {
  
  // @@protoc_insertion_point(field_mutable:Header.passwd)
  return passwd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Header::release_passwd() {
  
  return passwd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Header::set_allocated_passwd(::std::string* passwd) {
  if (passwd != NULL) {
    
  } else {
    
  }
  passwd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), passwd);
  // @@protoc_insertion_point(field_set_allocated:Header.passwd)
}

// optional bool aa = 3;
inline void Header::clear_aa() {
  aa_ = false;
}
inline bool Header::aa() const {
  // @@protoc_insertion_point(field_get:Header.aa)
  return aa_;
}
inline void Header::set_aa(bool value) {
  
  aa_ = value;
  // @@protoc_insertion_point(field_set:Header.aa)
}

// optional string testone1 = 4;
inline bool Header::has_testone1() const {
  return testone_case() == kTestone1;
}
inline void Header::set_has_testone1() {
  _oneof_case_[0] = kTestone1;
}
inline void Header::clear_testone1() {
  if (has_testone1()) {
    testone_.testone1_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_testone();
  }
}
inline const ::std::string& Header::testone1() const {
  // @@protoc_insertion_point(field_get:Header.testone1)
  if (has_testone1()) {
    return testone_.testone1_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void Header::set_testone1(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:Header.testone1)
  if (!has_testone1()) {
    clear_testone();
    set_has_testone1();
    testone_.testone1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  testone_.testone1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Header.testone1)
}
inline void Header::set_testone1(const char* value) {
  if (!has_testone1()) {
    clear_testone();
    set_has_testone1();
    testone_.testone1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  testone_.testone1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Header.testone1)
}
inline void Header::set_testone1(const char* value, size_t size) {
  if (!has_testone1()) {
    clear_testone();
    set_has_testone1();
    testone_.testone1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  testone_.testone1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Header.testone1)
}
inline ::std::string* Header::mutable_testone1() {
  if (!has_testone1()) {
    clear_testone();
    set_has_testone1();
    testone_.testone1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:Header.testone1)
  return testone_.testone1_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Header::release_testone1() {
  if (has_testone1()) {
    clear_has_testone();
    return testone_.testone1_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return NULL;
  }
}
inline void Header::set_allocated_testone1(::std::string* testone1) {
  if (!has_testone1()) {
    testone_.testone1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_testone();
  if (testone1 != NULL) {
    set_has_testone1();
    testone_.testone1_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        testone1);
  }
  // @@protoc_insertion_point(field_set_allocated:Header.testone1)
}

// optional int32 testone2 = 5;
inline bool Header::has_testone2() const {
  return testone_case() == kTestone2;
}
inline void Header::set_has_testone2() {
  _oneof_case_[0] = kTestone2;
}
inline void Header::clear_testone2() {
  if (has_testone2()) {
    testone_.testone2_ = 0;
    clear_has_testone();
  }
}
inline ::google::protobuf::int32 Header::testone2() const {
  // @@protoc_insertion_point(field_get:Header.testone2)
  if (has_testone2()) {
    return testone_.testone2_;
  }
  return 0;
}
inline void Header::set_testone2(::google::protobuf::int32 value) {
  if (!has_testone2()) {
    clear_testone();
    set_has_testone2();
  }
  testone_.testone2_ = value;
  // @@protoc_insertion_point(field_set:Header.testone2)
}

inline bool Header::has_testone() const {
  return testone_case() != TESTONE_NOT_SET;
}
inline void Header::clear_has_testone() {
  _oneof_case_[0] = TESTONE_NOT_SET;
}
inline Header::TestoneCase Header::testone_case() const {
  return Header::TestoneCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// Arg

// optional string f1 = 1;
inline void Arg::clear_f1() {
  f1_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Arg::f1() const {
  // @@protoc_insertion_point(field_get:Arg.f1)
  return f1_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Arg::set_f1(const ::std::string& value) {
  
  f1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Arg.f1)
}
inline void Arg::set_f1(const char* value) {
  
  f1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Arg.f1)
}
inline void Arg::set_f1(const char* value, size_t size) {
  
  f1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Arg.f1)
}
inline ::std::string* Arg::mutable_f1() {
  
  // @@protoc_insertion_point(field_mutable:Arg.f1)
  return f1_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Arg::release_f1() {
  
  return f1_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Arg::set_allocated_f1(::std::string* f1) {
  if (f1 != NULL) {
    
  } else {
    
  }
  f1_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), f1);
  // @@protoc_insertion_point(field_set_allocated:Arg.f1)
}

// optional string f2 = 2;
inline void Arg::clear_f2() {
  f2_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Arg::f2() const {
  // @@protoc_insertion_point(field_get:Arg.f2)
  return f2_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Arg::set_f2(const ::std::string& value) {
  
  f2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Arg.f2)
}
inline void Arg::set_f2(const char* value) {
  
  f2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Arg.f2)
}
inline void Arg::set_f2(const char* value, size_t size) {
  
  f2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Arg.f2)
}
inline ::std::string* Arg::mutable_f2() {
  
  // @@protoc_insertion_point(field_mutable:Arg.f2)
  return f2_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Arg::release_f2() {
  
  return f2_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Arg::set_allocated_f2(::std::string* f2) {
  if (f2 != NULL) {
    
  } else {
    
  }
  f2_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), f2);
  // @@protoc_insertion_point(field_set_allocated:Arg.f2)
}

// -------------------------------------------------------------------

// Request

// optional .Header header = 1;
inline bool Request::has_header() const {
  return !_is_default_instance_ && header_ != NULL;
}
inline void Request::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
inline const ::Header& Request::header() const {
  // @@protoc_insertion_point(field_get:Request.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::Header* Request::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::Header;
  }
  // @@protoc_insertion_point(field_mutable:Request.header)
  return header_;
}
inline ::Header* Request::release_header() {
  
  ::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void Request::set_allocated_header(::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Request.header)
}

// optional int32 arg1 = 2;
inline void Request::clear_arg1() {
  arg1_ = 0;
}
inline ::google::protobuf::int32 Request::arg1() const {
  // @@protoc_insertion_point(field_get:Request.arg1)
  return arg1_;
}
inline void Request::set_arg1(::google::protobuf::int32 value) {
  
  arg1_ = value;
  // @@protoc_insertion_point(field_set:Request.arg1)
}

// repeated int64 arg2 = 3;
inline int Request::arg2_size() const {
  return arg2_.size();
}
inline void Request::clear_arg2() {
  arg2_.Clear();
}
inline ::google::protobuf::int64 Request::arg2(int index) const {
  // @@protoc_insertion_point(field_get:Request.arg2)
  return arg2_.Get(index);
}
inline void Request::set_arg2(int index, ::google::protobuf::int64 value) {
  arg2_.Set(index, value);
  // @@protoc_insertion_point(field_set:Request.arg2)
}
inline void Request::add_arg2(::google::protobuf::int64 value) {
  arg2_.Add(value);
  // @@protoc_insertion_point(field_add:Request.arg2)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
Request::arg2() const {
  // @@protoc_insertion_point(field_list:Request.arg2)
  return arg2_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
Request::mutable_arg2() {
  // @@protoc_insertion_point(field_mutable_list:Request.arg2)
  return &arg2_;
}

// optional double arg3 = 4;
inline void Request::clear_arg3() {
  arg3_ = 0;
}
inline double Request::arg3() const {
  // @@protoc_insertion_point(field_get:Request.arg3)
  return arg3_;
}
inline void Request::set_arg3(double value) {
  
  arg3_ = value;
  // @@protoc_insertion_point(field_set:Request.arg3)
}

// repeated .Arg args = 5;
inline int Request::args_size() const {
  return args_.size();
}
inline void Request::clear_args() {
  args_.Clear();
}
inline const ::Arg& Request::args(int index) const {
  // @@protoc_insertion_point(field_get:Request.args)
  return args_.Get(index);
}
inline ::Arg* Request::mutable_args(int index) {
  // @@protoc_insertion_point(field_mutable:Request.args)
  return args_.Mutable(index);
}
inline ::Arg* Request::add_args() {
  // @@protoc_insertion_point(field_add:Request.args)
  return args_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Arg >*
Request::mutable_args() {
  // @@protoc_insertion_point(field_mutable_list:Request.args)
  return &args_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Arg >&
Request::args() const {
  // @@protoc_insertion_point(field_list:Request.args)
  return args_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_test_2eproto__INCLUDED
