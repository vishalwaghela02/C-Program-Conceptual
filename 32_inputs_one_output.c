#include <stdio.h>

int Addition(int, int);

int main(void)
{
    int iNo1; 
    int iNo2;
    int iAns;

    printf("Enter two number:\n");
    scanf("%d%d", &iNo1, &iNo2);

    iAns = Addition(iNo1, iNo2);

    printf("Addition is %d", iAns);

    return 0;
}

int Addition(int iNo1, int iNo2)
{
    int iResult;

    iResult = iNo1 + iNo2;

    return iResult;
}

