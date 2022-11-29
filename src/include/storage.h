/*
 * @Date: 2022-11-29 19:55:47
 * @LastEditors: Yunxiao Du yunxiao.du@zju.edu.cn
 * @LastEditTime: 2022-11-29 20:08:10
 * @FilePath: /ZJURaft/src/include/storage.h
 * Copyright (c) 2022 by Yunxiao Du yunxiao.du@zju.edu.cn, All Rights Reserved.
 */

#ifndef ZJU_RAFT_STORAGE_H
#define ZJU_RAFT_STORAGE_H

#include <string>

namespace ZJURaft {

class Storage {
 public:
  Storage() {}
  ~Storage() {}
};

bool Put(std::string key, std::string value) { return true; }

bool Get(std::string key, std::string *value) { return true; }

}  // namespace ZJURaft

#endif  // ZJU_RAFT_STORAGE_H