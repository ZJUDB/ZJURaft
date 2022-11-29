/*
 * @Date: 2022-11-29 19:55:47
 * @LastEditors: Yunxiao Du yunxiao.du@zju.edu.cn
 * @LastEditTime: 2022-11-29 20:31:04
 * @FilePath: /ZJURaft/src/include/storage.h
 * Copyright (c) 2022 by Yunxiao Du yunxiao.du@zju.edu.cn, All Rights Reserved.
 */

#pragma once

#include <string>

#include "include/status.h"

namespace ZJURaft {

class Storage {
 public:
  Storage() {}
  ~Storage() {}
};

Status Put(std::string key, std::string value) { return Status::OK(); }

Status Get(std::string key, std::string *value) { return Status::OK(); }

}  // namespace ZJURaft
