#include <stdio.h>

int main(void)
{
    int iNo = 5;               // 1

    if(iNo < 10)
        printf("One\n");  // Simple Statement
        printf("Two\n");  // Simple statement
                                                                            
    // o/p - One, Two

    iNo = 15;                // 2
    if(iNo < 10)
        printf("One\n"); // Simple statement 
        printf("Two\n"); // simple statement

    // o/p - Two

    iNo = 5;               // 3
    if(iNo < 10)
    {                       // Compound statement
        printf("One\n");
        printf("Two\n");
    }

    // o/p - One, Two

    iNo = 15;             // 4
    if(iNo < 10)
    {                      // Compound statement
        printf("One\n");
        printf("Two\n");
    }

    // o/p - No Output

    iNo = 15;           // 5
    if(iNo < 10);    // Null Statement
    {                // Compound statement
        printf("One\n");
        printf("Two\n");
    }

    // o/p - One, Two

    return 0;
}