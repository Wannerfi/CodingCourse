# coding=utf-8

def bar(i: int) -> int:
    return foo(i) * 2

def foo(i: int):
    return i + 2

def test(*args, **kwargs):
    """
    args: 将传入实参组装成 tuple 给 args
    kwargs: 将 key=value 的参数传递给 kwargs
    """
    print(args)
    print(kwargs)

# 入口函数
if __name__ == "__main__":
    print(bar(3))    
    
    # 可变参数
    test(35, 12, a = 1, c = 24)

    l = [1, 2, 3]
    d = {"1": "a"}
    test(*l, **d) # 解包/拆包

    # 匿名函数 lambda，匿名函数本质是重载了函数调用运算符的类
    func = lambda x: x ** 2
    print(func(3))
