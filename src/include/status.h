/*
 * @Date: 2022-11-29 20:22:36
 * @LastEditors: Yunxiao Du yunxiao.du@zju.edu.cn
 * @LastEditTime: 2022-11-29 20:32:13
 * @FilePath: /ZJURaft/src/include/status.h
 * Copyright (c) 2022 by Yunxiao Du yunxiao.du@zju.edu.cn, All Rights Reserved.
 */
#pragma once

#include <string>

namespace ZJURaft {

class Status {
 public:
  // Create a success status.
  Status() noexcept : state_(nullptr) {}
  ~Status() { delete[] state_; }

  Status(const Status &rhs);
  Status &operator=(const Status &rhs);

  Status(Status &&rhs) noexcept : state_(rhs.state_) { rhs.state_ = nullptr; }
  Status &operator=(Status &&rhs) noexcept;

  // Return a success status.
  static Status OK() { return Status(); }

  // Return error status of an appropriate type.
  static Status NotFound(const std::string &msg,
                         const std::string &msg2 = std::string()) {
    return Status(kNotFound, msg, msg2);
  }
  static Status Corruption(const std::string &msg,
                           const std::string &msg2 = std::string()) {
    return Status(kCorruption, msg, msg2);
  }
  static Status NotSupported(const std::string &msg,
                             const std::string &msg2 = std::string()) {
    return Status(kNotSupported, msg, msg2);
  }
  static Status InvalidArgument(const std::string &msg,
                                const std::string &msg2 = std::string()) {
    return Status(kInvalidArgument, msg, msg2);
  }
  static Status IOError(const std::string &msg,
                        const std::string &msg2 = std::string()) {
    return Status(kIOError, msg, msg2);
  }

  static Status SplitUnderflow(const std::string &msg,
                               const std::string &msg2 = std::string()) {
    return Status(kSplitUnderflow, msg, msg2);
  }

  static Status LeafEmpty(const std::string &msg,
                          const std::string &msg2 = std::string()) {
    return Status(kLeafEmpty, msg, msg2);
  }

  // Returns true iff the status indicates success.
  bool ok() const { return (state_ == nullptr); }

  // Returns true iff the status indicates a NotFound error.
  bool IsNotFound() const { return code() == kNotFound; }

  // Returns true iff the status indicates a Corruption error.
  bool IsCorruption() const { return code() == kCorruption; }

  // Returns true iff the status indicates an IOError.
  bool IsIOError() const { return code() == kIOError; }

  // Returns true iff the status indicates a NotSupportedError.
  bool IsNotSupportedError() const { return code() == kNotSupported; }

  // Returns true iff the status indicates an InvalidArgument.
  bool IsInvalidArgument() const { return code() == kInvalidArgument; }

  // Returns true iff the status indicates an SplitUnderflow.
  bool IsSplitUnderflow() const { return code() == kSplitUnderflow; }

  // Returns true iff the status indicates an LeafEmpty.
  bool IsLeafEmpty() const { return code() == kLeafEmpty; }

  // Return a string representation of this status suitable for printing.
  // Returns the string "OK" for success.
  std::string ToString() const;

 private:
  // OK status has a null state_.  Otherwise, state_ is a new[] array
  // of the following form:
  //    state_[0..3] == length of message
  //    state_[4]    == code
  //    state_[5..]  == message
  const char *state_;

  enum Code {
    kOk = 0,
    kNotFound = 1,
    kCorruption = 2,
    kNotSupported = 3,
    kInvalidArgument = 4,
    kIOError = 5,
    kSplitUnderflow = 6,
    kLeafEmpty = 7
  };

  Code code() const {
    return (state_ == nullptr) ? kOk : static_cast<Code>(state_[4]);
  }

  Status(Code code, const std::string &msg, const std::string &msg2);
  static const char *CopyState(const char *s);
};

inline Status::Status(const Status &rhs) {
  state_ = (rhs.state_ == nullptr) ? nullptr : CopyState(rhs.state_);
}
inline Status &Status::operator=(const Status &rhs) {
  // The following condition catches both aliasing (when this == &rhs),
  // and the common case where both rhs and *this are ok.
  if (state_ != rhs.state_) {
    delete[] state_;
    state_ = (rhs.state_ == nullptr) ? nullptr : CopyState(rhs.state_);
  }
  return *this;
}
inline Status &Status::operator=(Status &&rhs) noexcept {
  std::swap(state_, rhs.state_);
  return *this;
}

}  // namespace ZJURaft
