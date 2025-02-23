# coding=utf-8

if __name__ == "__main__":
    """
    算数运算符
    +, -, *, / 就不介绍了
    """
    print(13 % 3) # 取模
    print(2 ** 4) # 2 的 4 次方
    print(13 // 3) # 整除
    print('===========')

    """
    比较运算符
    ==, !=, <, >, <=, >= 就不介绍了
    """

    """
    逻辑运算符
    """
    print(True and False)
    print(True or False)
    print(not False)
    print('===========')

    """
    成员运算符
    """
    l = [1, '2', 3]
    print(1 in l)
    print('1' in l)
    print('===========')

    """
    身份运算符，判断两个对象是否指向同一个内存地址
    """
    cl = l
    print(cl is l)
    print(cl is not l.copy())