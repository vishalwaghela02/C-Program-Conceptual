#include <stdio.h>

int main(void)
{
    int iCounter;
    

    for(iCounter = 0; iCounter < 3; iCounter++)
        printf("%d\t", iCounter);  // 0 1 2

    printf("\n");

    for(iCounter = 3; iCounter < 3; iCounter++)
        printf("%d\t", iCounter);  // No Output

    printf("\n");

    // Version 1
    iCounter = 0;                   
    for(; iCounter < 3; iCounter++)
        printf("%d\t", iCounter);  // 0 1 2

        printf("\n");

    // Version 2
    for(iCounter = 0; ; iCounter++)  
    {
        if(iCounter == 3)
            break;
            printf("%d\t", iCounter); // 0 1 2
    }

    printf("\n");

    // Version 3
    for(iCounter = 0; iCounter < 3;)
    {
        printf("%d\t", iCounter);  // 0 1 2
        iCounter++;
    }

    printf("\n");

    // Version 4      // Useless
    iCounter = 0;
    for(; ;)              
    {
        if(iCounter == 3)
            break;

        printf("%d\t", iCounter);  // 0 1 2
        iCounter++;    
    }

    printf("\n");

    // Version 5      // 'while' version of 'for'
    iCounter = 0;         
    for(; iCounter < 3;)
    {
        printf("%d\t", iCounter);  // 0 1 2
        iCounter++;
    }

    printf("\n");

    return 0;
}
