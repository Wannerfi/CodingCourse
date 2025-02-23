# coding=utf-8

# 导入系统模块
import sys
import os

def Test():
    # 导入自定义模块
    # 采用 from .. import 导入
    from cls import Test
    a = Test(1)
    b = Test(2)
    c = a + b
    print(c.value)
    Test.static_foo(300)
    Test.cls_foo()

# 不用入口函数
Test()
