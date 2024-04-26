#include <stdio.h>

int main(void)
{
    extern int iNo;
    extern int iNo; // allowed
    extern int iNo;

    printf("iNo = %d\n", iNo); // 10

    return 0; 
}

int iNo = 10; // global variable