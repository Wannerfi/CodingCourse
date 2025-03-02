# coding=utf-8

# 带有类型提示的函数
def test_list(l: list) -> None:
    l.append('test_list')

def test_tuple(t):
    t = (2, 3, "4")

if __name__ == "__main__":
    # ====== 不可变类型 ===========
    i = 1 # int
    d = 1.5 # double
    ss = 'single_string' # 字符串
    ds = "doule_string" # 字符串

    t = (0, 1.5, "a", 'c') # tuple 元组，不可变类型
    # ======== ============

    l = [0, 1.5, "a", 'c'] # list 列表，可变类型
    d = {"1": "a", 1: "b"} # dict 字典，可变类型
    s = set() # 集合，无重复元素，可变类型

    """
    多行注释
    类型测试
    """
    # 可变类型测试
    print(l[0], l[-1], l[0: -1])
    print(l)
    test_list(l)
    print(l)

    print("============")

    # 不可变类型测试
    print(t)
    test_tuple(t)
    print(t)
    
