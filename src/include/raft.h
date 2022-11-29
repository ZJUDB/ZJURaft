/*
 * @Date: 2022-11-29 18:10:55
 * @LastEditors: Yunxiao Du yunxiao.du@zju.edu.cn
 * @LastEditTime: 2022-11-29 20:57:35
 * @FilePath: /ZJURaft/src/include/raft.h
 * Copyright (c) 2022 by Yunxiao Du yunxiao.du@zju.edu.cn, All Rights Reserved.
 */

#pragma once

#include <vector>

#include "include/status.h"
#include "include/storage.h"
namespace ZJURaft {

enum RaftRole { LEADER, CANDIDATE, FOLLOWER };

class RaftConfig {
  // ip address used for rpc communication.
  std::string ip_address;
  // port used by for rpc communication.
  size_t rpc_port;
  //  Leader sends heartbeat messages to maintain its leadership every
  //  heartbeat_tick.
  size_t heartbeat_tick;
  // If a follower does not receive any message from the leader of current term
  // before election_tick has elapsed, it will become candidate and start an
  // election.
  uint64_t election_tick;
};

class ZJURaft {
 public:
  ZJURaft();
  ~ZJURaft();

  Status StartElection();
  Status SendRequestVote();
  Status SendHeartBeat();
  Status SendLogEntries();
  Status ChangeRole();

 private:
  RaftConfig config_;
  RaftRole role_;
  Storage storage_;
  std::vector<size_t> raft_servers_;
};

}  // namespace ZJURaft
