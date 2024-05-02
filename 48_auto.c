#include <stdio.h>

int main(void)
{
    int iNo1;         // both iNo1 and iNo2 have auto storage class
    auto int iNo2;

    printf("iNo1 = %d\niNo2 = %d\n", iNo1, iNo2); // garbage

    return 0;
}