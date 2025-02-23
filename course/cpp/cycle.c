#include <stdio.h>

int main(int argc, char* argv[])
{
    int a = 1;

    // for
    for(int i = 0;i < 10;++i) {
        printf("%d ", i);
        if (2 <= i && i <= 5)
            continue;
    }
    printf("\n");
    
    // while
    int count = 10;
    while (count > a) {
        count -= 1;
        if (count < 8)
            break;
    }
    printf("count: %d\n", count);

    // do-while
    count = 10;
    do {
        count -= 1;
        printf("%d ", count);
    }while(count > 5);

    return 0;
}