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
    int iAns;
    int iCounter;

    iAns = iNo;
    
    for(iCounter = iNo - 1; iCounter != 1; iCounter--)
        iAns = iAns * iCounter;

    return iAns;    
}