#include <stdio.h>

void Fun(void);

int main(void)
{
    extern int g_iNo;

    printf("In Main: %d\n", g_iNo); // error

    Fun();

    return 0;
}

int g_iNo = 20;
