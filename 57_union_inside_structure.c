#include <stdio.h>

struct outer1
{
    char chChar;
    int iNo;

    union inner1
    {
        char chChar;
        int iNo;

    }iObj1, iObj2;

}oObj1;

struct outer2
{
    int iNo;
    float fNo;

    union inner2
    {
        char chChar;
        double dNo;

    }iObj1, iObj2, iObj3;

}oObj2;

int main(void)
{
    printf("oObj1 = %d\n", sizeof(oObj1)); // 16

    printf("oObj2 = %d\n", sizeof(oObj2)); // 32 

    return 0;
}