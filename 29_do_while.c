#include <stdio.h>

int main(void)
{
    int iCounter;

    iCounter = 0;
    do
    {
        printf("%d\t", iCounter);  // 0 1 2
        iCounter++;
    
    }while(iCounter < 3);

    printf("\n");

    iCounter = 3;
    do
    {
        printf("%d\t", iCounter); // 3
        iCounter++;

    }while(iCounter < 3);

    return 0;
}