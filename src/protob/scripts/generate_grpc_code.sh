#!/usr/bin/env bash
###
 # @Date: 2022-11-29 21:03:45
 # @LastEditors: Yunxiao Du yunxiao.du@zju.edu.cn
 # @LastEditTime: 2022-11-30 16:57:06
 # @FilePath: /ZJURaft/src/protob/scripts/grpc_generator.sh
 # Copyright (c) 2022 by Yunxiao Du yunxiao.du@zju.edu.cn, All Rights Reserved. 
### 


protoc --cpp_out=../   --proto_path=../  raft.proto
protoc --grpc_out=../ --plugin=protoc-gen-grpc=`which grpc_cpp_plugin`  --proto_path=../ raft.proto