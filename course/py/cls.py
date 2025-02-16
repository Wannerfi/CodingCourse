# coding=utf-8

"""
装饰器就先不讲了，有点复杂
@custom_name
"""
class Test(object):
    #类成员
    TTT = 1

    def __init__(self, value):
        self.value = value

    # 重载 + 运算符
    def __add__(self, other):
        return Test(self.value + other.value)
    
    @staticmethod
    def static_foo(x):
        print("static===", x)

    @classmethod
    def cls_foo(cls):
        print(cls.TTT)

# 入口函数
if __name__ == "__main__":
    a = Test(1)
    b = Test(2)
    c = a + b
    print(c.value)
    Test.static_foo(300)
    Test.cls_foo()