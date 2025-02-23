// 这是注释
// 头文件
#include <stdio.h>

// 全局作用域，全局变量
int i = 0;

// 入口函数
int main(int argc, char* argv[])
{
    printf("%d\n", i);

    {
        // 局部作用域，局部变量
        int i = 2;
        printf("%d\n", i);
    }

    printf("%d\n", i);

    return 0; // 函数返回值
}
