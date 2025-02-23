# coding=utf-8
import sys # 使用系统库获取启动参数

if __name__ == "__main__":
    argv = sys.argv # 第一个参数一般是文件本身
    print("=====>>>", argv)

    # 用输入阻断进程
    input("按回车退出程序")