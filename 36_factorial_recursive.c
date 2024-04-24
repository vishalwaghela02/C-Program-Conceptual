#include <stdio.h>

int Fact(int);

int main(void)
{
    int iNo;
    int iAns;

    printf("Enter number:\t");
    scanf("%d", &iNo);

    iAns = Fact(iNo);

    printf("Factorial is: %d\n", iAns);

    return 0;
}

int Fact(int iNo)
{
    if(iNo == 1)
        return 1;

    return iNo*Fact(iNo - 1);    
}