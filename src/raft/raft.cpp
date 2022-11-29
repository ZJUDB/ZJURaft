/*
 * @Date: 2022-11-29 18:01:43
 * @LastEditors: Yunxiao Du yunxiao.du@zju.edu.cn
 * @LastEditTime: 2022-11-30 00:18:12
 * @FilePath: /ZJURaft/src/raft/raft.cpp
 * Copyright (c) 2022 by Yunxiao Du yunxiao.du@zju.edu.cn, All Rights Reserved.
 */
#include <iostream>

#include "include/raft.h"

namespace zju_raft {

Status ZJURaft::StartElection() { return Status::OK(); }
Status ZJURaft::SendRequestVote() { return Status::OK(); }
Status ZJURaft::SendHeartBeat() { return Status::OK(); }
Status ZJURaft::SendLogEntries() { return Status::OK(); }
Status ZJURaft::ChangeRoleTo(RaftRole role) {
  role_ = role;
  return Status::OK();
}
Status ZJURaft::ApplyLog() {
  storage_.Put("key", "value");
  return Status::OK();
}

}  // namespace zju_raft
