#include <stdio.h>

int main(void)
{
    int iAns;
    int iNo = 10;

    printf("%d\n", iNo);   //10

    iAns = ++iNo;
    printf("%d\n", iAns);  // 11
    printf("%d\n", iNo);  // 11

    iAns = iNo++;
    printf("%d\n", iAns);  // 11
    printf("%d\n", iNo);  // 12

    iAns = iNo++;
    printf("%d\n", iAns);  // 11
    printf("%d\n", iNo);  // 12

    ++iNo;
    printf("%d\n", iNo);  // 13

    iNo++;
    printf("%d\n", iNo); // 14

    printf("%d\n", iNo++); // 14
    printf("%d\n", iNo); // 15

    printf("%d\n", ++iNo); // 16
    printf("%d\n", iNo);  // 16

    printf("%d\n", iNo+1); // 17
    printf("%d\n", iNo); // 16

    printf("%d\n", + +iNo); // 16
    printf("%d\n", iNo);  // 16

    //printf("%d\n", ++10);
    //printf("%d\n", 10++);

    return 0;
}