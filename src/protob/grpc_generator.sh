#!/usr/bin/env bash
###
 # @Date: 2022-11-29 21:03:45
 # @LastEditors: Yunxiao Du yunxiao.du@zju.edu.cn
 # @LastEditTime: 2022-11-29 21:07:23
 # @FilePath: /ZJURaft/src/protob/grpc_generator.sh
 # Copyright (c) 2022 by Yunxiao Du yunxiao.du@zju.edu.cn, All Rights Reserved. 
### 

SCRIPTS_DIR=$(dirname "$0")

echo "generate cpp code..."

KVPROTO_ROOT="$SCRIPTS_DIR/.."
GRPC_INCLUDE=.:../include
GRPC_CPP_PLUGIN=$(which grpc_cpp_plugin)

cd $KVPROTO_ROOT
rm -rf proto-cpp && mkdir -p proto-cpp
rm -rf eraftio && mkdir eraftio

cp proto/* proto-cpp/

sed_inplace '/gogo.proto/d' proto-cpp/*
sed_inplace '/option\ *(gogoproto/d' proto-cpp/*
sed_inplace -e 's/\[.*gogoproto.*\]//g' proto-cpp/*

push proto-cpp
protoc -I${GRPC_INCLUDE} --cpp_out ../eraftio/ *.proto || exit $?
protoc -I${GRPC_INCLUDE} --grpc_out ../eraftio/ --plugin=protoc-gen-grpc=${GRPC_CPP_PLUGIN} *.proto || exit $?
pop

rm -rf proto-cpp