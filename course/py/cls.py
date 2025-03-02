# coding=utf-8

class Test(object):
    """
    成员变量命名默认规则
    __ 开头的是私有成员
    _ 开头的是受保护的成员
    """

    #类成员
    TTT = 1

    def __init__(self, value):
        """
        构造函数
        """
        self.value = value

        #私有成员和受保护的成员
        self.__pi = 1
        self._proi = 2

    # 受保护的成员
    def _foo():
        print("fffff")

    # 重载 + 运算符
    def __add__(self, other):
        return Test(self.value + other.value)
    
    # 静态函数
    @staticmethod
    def static_foo(x):
        print("static===", x)

    # 类函数
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