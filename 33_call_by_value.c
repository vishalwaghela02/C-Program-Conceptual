#include <stdio.h>

void Fun(int);

int main(void)
{
    int iNo = 10;

    printf("Before calling, iNo is: %d\n", iNo); // 10

    Fun(iNo); // call by value
     
    return 0;
}

void Fun(int iNo)
{
    printf("In Fun, iNo is: %d\n", iNo); // 10

    ++iNo; 

    printf("Leaving fun, iNo is: %d\n", iNo); // 11
}