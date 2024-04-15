#include <stdio.h>

int main(void)
{
    switch(2)   // its just the example, off course dont pass literal here.  
    {
        case 1:
            printf("One\n");
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");        
    }

    // o/p - Two Three

    switch(3)
    {
        case 1:
            printf("One\n");
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");        
    }

    // o/p - Three

    switch(5)
    {
        case 1:
            printf("One\n");
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");
        default:
            printf("default\n");            
    }

    // o/p - default

    switch(5)
    {
        case 1:
            printf("One\n");
        default:
            printf("default\n");    
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");
    }

    // o/p - default Two Three

    switch(5)
    {
        case 1:
            printf("One\n");
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");        
    }

    // o/p - No Output

    return 0;
}