#include <stdio.h>
#include <string.h>

struct People {
    // 成员
    char name[100];
    int age;
    void (*printf)(struct People*); // 指向函数的指针，函数类型 void *(struct People* p)

};

void printfPeople(struct People* p) {
    printf("name: %s, age: %d\n", p->name, p->age);
}

int main(int argc, char* argv[])
{
    struct People me;
    me.printf = printfPeople;
    strcpy(me.name, "hui\0");
    me.age = 18;
    me.printf(&me);

    return 0;
}
