
#include <stdio.h>

int main(int argc, char* argv[])
{
    int a = 1;
    if (a == 1) {
        printf("a is 1\n");
    } else if (a == 2) {
        printf("a is 2\n");
    } else {
        printf("aaaaa====\n");
    }

    switch(a) {
        case 0: printf("a is 0\n"); break;
        case 1: printf("a is 1\n"); break;
        case 2: printf("a is 2\n"); break;
        default: printf("a is default\n");
    }
    return 0;
}