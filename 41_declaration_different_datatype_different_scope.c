#include <stdio.h>

extern int iNo;

int main(void)
{
    extern float fNo; // error

    printf("iNo = %d\n", iNo);

    return 0;
}