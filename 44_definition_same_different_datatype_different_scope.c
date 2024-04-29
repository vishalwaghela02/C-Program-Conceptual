#include <stdio.h>

void Fun(void);

int iNo = 10;

int main(void)
{
    int iNo = 20;

    printf("iNo = %d\n", iNo); // 20

    {
        char chChar = 'A';

        printf("chChar = %d\n", chChar); // 65
    }

    printf("iNo = %d\n", iNo); // 20

    Fun();

    return 0;
}

void Fun(void)
{
    printf("In fun: %d\n", iNo); // 10
}