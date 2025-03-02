#include <stdio.h>

int main(int argc, char* argv[])
{
    // 类型 变量名=变量值

    /*
        多行注释
    */
    char c = 'a'; // 字符，通常是 1bytes，即 8bit

    char ct; // 声明
    ct = 't'; // 定义

    int i = 1; // 整数，通常是 4bytes
    float f = 0.5; // 单精度浮点数
    double d = 0.123456789; // 双精度浮点数
    char* str = "Hello World\0"; // 字符串
    int arr[10]; // 数组
    printf("%c, %d, %f, %f\n", c, i, f, d);
    printf("%s\n", str);

    void* p = NULL; // 空指针

    int pi = i; // allocate memory，copy value

    // 类型只是解释数据的格式，数据就是二进制
    int A = 'A'; // ASCII 码
    printf("%d, %c\n", A, A);

    return 0;
}