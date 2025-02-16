#include <iostream>

int step = 0; // 全局变量，作用域在全局
int foo(int n) {
    //std::cout << "step" << step++ << ": " << n << std::endl;
    if (n <= 1)
        return n;
    return foo(n - 1) + foo(n - 2);
}

int main() {
    std::cout << foo(1) << " " << foo(2) << " " << foo(3) << " " << foo(4) << " "
            << foo(5) << " " << foo(6) << " " << foo(7) << " " << foo(8) << " " 
            << std::endl;
    step = 0;
    //foo(3);
    return 0;
}