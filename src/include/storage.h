/*
 * @Date: 2022-11-29 19:55:47
 * @LastEditors: Yunxiao Du yunxiao.du@zju.edu.cn
 * @LastEditTime: 2022-11-30 00:18:30
 * @FilePath: /ZJURaft/src/include/storage.h
 * Copyright (c) 2022 by Yunxiao Du yunxiao.du@zju.edu.cn, All Rights Reserved.
 */

#pragma once

#include <string>
#include "include/status.h"

namespace zju_raft {

class Storage {
 public:
  Storage() = default;
  ~Storage() = default;
  Status Put(const std::string &key, const std::string &value) {
    return Status::OK();
  }

  Status Get(const std::string &key, std::string *value) {
    return Status::OK();
  }
};

}  // namespace zju_raft
