#include <bits/stdc++.h> // 万能头文件

// 引入 cpp 标准库的命名空间
using namespace std;

// 声明、定义类
class Cat;
class Dog;

/** 封装成类 **/
class Animal {
    // 公共成员，外部可访问
public:
    Animal() {
        name = "Animal"; // 给成员赋值
    }
    virtual ~Animal() {}
    virtual void Wow() {
        cout << "what??" << endl;
    }

    // 受保护的成员，子类可访问
protected:
    string name;

    // 私有成员，只有自己能访问
private:
};

/** 继承 **/
class Cat : public Animal {
public:
    /** 多态 **/
    virtual void Wow() {
        cout << "miaowu~~~~" << "====" << name << endl;
    }
};

class Dog : public Animal {
public:
    /** 多态 **/
    virtual void Wow() {
        cout << "wuwang~~~~" << "====" << name << endl;
    }
};

//  g++ oop.cpp -o oop.exe
int main() {
    Animal* animal = new Animal();
    Cat* cat = new Cat();
    Dog* dog = new Dog();
    animal->Wow();
    cat->Wow();
    dog->Wow();
    return 0;
}

