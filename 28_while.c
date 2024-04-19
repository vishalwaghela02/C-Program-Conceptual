#include <stdio.h>

int main(void)
{
    int iCounter;

    iCounter = 0;   
    while(iCounter < 3)
    {
        printf("%d\t", iCounter); // 0 1 2
        iCounter++;
    }

    printf("\n");

    iCounter = 3;     
    while(iCounter < 3)
    {
        printf("%d\t", iCounter); // No Output
        iCounter++;
    }

    return 0;
}