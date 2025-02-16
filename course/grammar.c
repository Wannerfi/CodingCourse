/**
 * 这里是注释
 * 头文件
 * */
#include <stdio.h>

// 宏定义
#define PI 3.1415926

// 声明
int add(int a, int b);
// 定义
const float HALF = 0.5;

// 入口函数（主函数）
int main(int argc, char *argv[])
{
    // 打印 Hello World
    printf("Hello World!\n");
    
    // 声明变量
    int num1, num2; //变量类型 变量名
    /**
     * 命名规则：
     * 必须以 下划线或字母，变量名只能包含字母、数字、下划线
     */

    // 输入两个 int 数
    scanf("%d %d", &num1, &num2);
    int ans = add(num1, num2); // 调用函数
    printf("%d\n", ans); // 打印输出

    return 0; // 函数返回值
}

// 函数定义
// 输入两个 int 值
int add(int a, int b)
{
    return a + b; // 返回它们的和
}