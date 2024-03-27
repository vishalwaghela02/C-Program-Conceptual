#include <stdio.h>

int main(void)
{
    int iNo = 5;   // 1
    if(iNo < 10)
        printf("One\n");  // Simple statement
    else
        printf("Two\n");  // simple satement

    // o/p - One

    iNo = 15;   // 2
    if(iNo < 10)
        printf("One\n"); // simple satement
    else
        printf("Two\n"); // simple statement    

    // o/p - Two

    /*
    iNo = 5;     // 3
    if(iNo < 10)
        printf("One\n");  // simple statement
        printf("Two\n");  // simple statement
    else                  // Error, because only one statement must be present before 'else' and after 'if' which can be simple or compund.
        printf("Three\n"); 
    
    */

    iNo = 15;    // 4
    if(iNo < 10)
    {                     // compound statement
        printf("One\n");
        printf("Two\n");
    }
    else
        printf("Three\n");  // simple statement

    // o/p - Three

    /*
    iNo = 15;    // 5
    if(iNo < 10);  // Null statement
    {              // compund statement  
        printf("One\n");
        printf("Two\n");
    }
    else                  // Error, because only one statement must be present before 'else' and after 'if' which can be simple or compund.
        printf("Three\n");

    */    
}   
