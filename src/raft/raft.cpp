/*
 * @Date: 2022-11-29 18:01:43
 * @LastEditors: Yunxiao Du yunxiao.du@zju.edu.cn
 * @LastEditTime: 2022-11-29 20:57:04
 * @FilePath: /ZJURaft/src/raft/raft.cpp
 * Copyright (c) 2022 by Yunxiao Du yunxiao.du@zju.edu.cn, All Rights Reserved.
 */

#include "include/raft.h"
#include <iostream>

namespace ZJURaft {

ZJURaft::ZJURaft() {}

ZJURaft::~ZJURaft() {}

Status ZJURaft::StartElection() { return Status::OK(); };
Status ZJURaft::SendRequestVote() { return Status::OK(); };
Status ZJURaft::SendHeartBeat() { return Status::OK(); };
Status ZJURaft::SendLogEntries() { return Status::OK(); };
Status ZJURaft::ChangeRole() { return Status::OK(); };

}  // namespace ZJURaft
