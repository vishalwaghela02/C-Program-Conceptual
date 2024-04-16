#include <stdio.h>

int main(void)
{
    int iNo1 = 10;

    printf("iNo1 = %d\n", iNo1);  // allowed
    //printf("%d", iNo2);  // error

    {                      // block scope
        int iNo2 = 20;
        printf("iNo1 = %d\n", iNo1); // allowed
        printf("iNo2 = %d\n", iNo2); // allowed
    }

    printf("iNo1 = %d\n", iNo1); // allowed
    //printf("%d\n", iNo2); // error

    return 0;
}