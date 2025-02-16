
#include <stdio.h>

int main(int argc, char* argv[])
{
    int a = 1;

    // while
    int count = 10;
    while (count > a) {
        count -= 1;
    }
    printf("count: %d\n", count);

    // for
    for(int i = 0;i < 10;++i) {
        printf("%d ", i);
    }
    printf("\n");

    // do-while
    count = 10;
    do {
        count -= 1;
        printf("%d ", count);
    }while(count > 5);

    return 0;
}