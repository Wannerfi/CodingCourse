# coding=utf-8

a = 1
if __name__ == "__main__":

    print(a, '>>>>111')
    a = 2
    print(a, '>>>>222')

    def foo():
        a = 3
        print(a, '>>>>333')

    foo()
    print(a, '>>>>444')

print(a, '>>>>555')
