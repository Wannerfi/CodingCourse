#include <stdio.h>

int main(int argc, char* argv[])
{
    int a = 1, b = 2; // 逗号运算符，将多个表达式放一起，返回最后一个表达式的值
    printf("%d %d\n", a, b);

    // 算术运算符
    printf("%d %d %d %d %d\n", a + b, a - b, a * b, a / b, a % b);
    // 关系运算符
    printf("%d %d %d %d\n", 1 == 1, 1.0 != 1, 1 < 1, 1 >= 1);
    // 逻辑运算符
    printf("%d %d %d\n", 1 && 1, 1 || 0, !(1 && 1));
    // 位运算符
    printf("%d %d %d %d %d, %d\n", 1 & 1, 1 | 0, 1 ^ 0, ~1, 2 << 1, 2 >> 1);

    // 赋值运算符
    int c = 1;
    c += a;
    printf("%d\n", c);

    // 其他
    int *pa = &a; // 指针，取地址符
    int is_true = (1 > 0) ? 10 : 100; // 三目运算符
    printf("%d %d\n", pa, is_true);
    return 0;
}