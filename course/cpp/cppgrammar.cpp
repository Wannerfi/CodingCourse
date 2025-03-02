#include <bits/stdc++.h> // 万能头文件

// 引入 cpp 标准库的命名空间
using namespace std;

/** 封装成类 **/
class A {
public: // 公共成员，外部可访问
    A() { // 构造函数，在实例化的时候调用
        cout << "Hello World" << endl;
    }
    virtual void foo() { // 虚函数
        cout << "AAA" << endl;
    }

protected: // 受保护的成员，子类可访问
private: // 私有成员，只有自己能访问
};

/** 公开继承A **/
class B : public A {
public:
    B() { cout << "===" << endl;}
    virtual void foo() { cout << "BBB" << endl;}
};

//  g++ oop.cpp -o oop.exe
int main() {
    A *a = new A(); // 实例化
    B b; // 实例化
    B &tb = b; // 引用，即别名，指向同一块地址
    cout << (&tb) << " " << &b << endl;

    // 匿名函数 lambda
    class Lambda {
    public:
        // 重载函数操作符
        int operator() (int a, int b) {
            return a + b;
        }
    };
    Lambda ab = Lambda();
    auto ac = [](int a, int b) {return a + b;};
    cout << ab(1, 2) << " " << ac(1, 2) << endl;

    return 0;
}

