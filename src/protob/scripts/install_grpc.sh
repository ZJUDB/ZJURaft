
#!/usr/bin/env bash

###
 # @Date: 2022-11-30 16:51:51
 # @LastEditors: Yunxiao Du yunxiao.du@zju.edu.cn
 # @LastEditTime: 2022-11-30 16:52:08
 # @FilePath: /ZJURaft/src/protob/install_grpc.sh
 # Copyright (c) 2022 by Yunxiao Du yunxiao.du@zju.edu.cn, All Rights Reserved. 
### 
apt-get install build-essential autoconf libtool pkg-config
cd ~
git clone --recurse-submodules -b v1.50.0 --depth 1 --shallow-submodules https://github.com/grpc/grpc
cd grpc
mkdir -p cmake/build
cmake -DgRPC_INSTALL=ON \
      -DgRPC_BUILD_TESTS=OFF \
      -DCMAKE_INSTALL_PREFIX=/usr/local .. \
      ../..
make -j 4
make install
cp grpc_cpp_plugin /usr/local/bin/