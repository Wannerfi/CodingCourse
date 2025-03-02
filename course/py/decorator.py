# coding=utf-8

# 函数装饰器
def func_decorator(func):
    def wrapper():
        print("func_decorator")
        func()
    return wrapper

# 使用函数装饰器
@func_decorator
def foo():
    print("foooo")

# 类装饰器
def cls_decorator(cls):
    def wrapper():
        print("cls_decorator")
        return cls()
    return wrapper

# 使用类装饰器
@cls_decorator
class T(object):
    pass

# 入口函数
if __name__ == "__main__":
    foo()
    d = T()
