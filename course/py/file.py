# coding=utf-8

# 导入模块
import sys
import os

i = 1

# 定义函数
def add(a, b):
    return a + b

# 入口函数
if __name__ == "__main__":
    # 打印 Hello World
    print("Hello World!")

    # 定义变量
    d = 1.5

    """
    多行注释
    输入字符串，然后切分成列表
    """
    input_list = input().split(' ')
    ans = add(int(input_list[0]), int(input_list[1])) # 调用函数
    print(ans) # 打印输出
