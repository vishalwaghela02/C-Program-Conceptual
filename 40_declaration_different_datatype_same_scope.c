#include <stdio.h>

int main(void)
{
    extern int iNo;
    extern float fNo; // error

    printf("iNo = %d\n", iNo);

    return 0;
}