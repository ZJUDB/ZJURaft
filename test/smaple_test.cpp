/*
 * @Date: 2022-11-29 17:03:29
 * @LastEditors: Yunxiao Du yunxiao.du@zju.edu.cn
 * @LastEditTime: 2022-11-29 19:29:30
 * @FilePath: /ZJURaft/test/smaple_test.cpp
 * Copyright (c) 2022 by Yunxiao Du yunxiao.du@zju.edu.cn, All Rights Reserved.
 */
#include <iostream>
#include "gtest/gtest.h"
#include "include/raft.h"

namespace ZJURaft {

TEST(SampleTest, SampleTest) {
  ZJURaft raft;
  std::cout << "### SampleTest ###\n";
}

}  // namespace ZJURaft
