#include <stdio.h>

struct demo
{
    char chChar;
    int iNo;
    double dNo;
}Obj;

int main(void)
{
    printf("Obj = %d", sizeof(Obj));

    return 0;
}