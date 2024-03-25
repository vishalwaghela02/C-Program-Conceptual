#include <stdio.h>

int main(void)
{
    int iAns;
    int iNo = 10;

    printf("%d\n", iNo);  // 10
    
    iAns = iNo--;
    printf("%d\n", iAns); // 10
    printf("%d\n", iNo); // 9

    iAns = --iNo;
    printf("%d\n", --iNo); // 8
    printf("%d\n", iNo); // 8

    printf("%d\n", --iNo); // 7
    printf("%d\n", iNo);   // 7

    printf("%d\n", iNo--);
    printf("%d\n", iNo);

    printf("%d\n", iNo - 1);
    printf("%d\n", iNo);

    return 0;
}