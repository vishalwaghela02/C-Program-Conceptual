#include <stdio.h>

union outer1
{
    char chChar;
    double dNo;

    union inner1
    {
        int iNo;
        float fNo;

    }iObj1, iObj2;

}oObj1;

union outer2
{
    char chChar;
    double dNo;

    union inner2
    {
        int iNo;
        int fNo;

    }iObj;

}oObj2;

int main(void)
{
    printf("oObj1 = %d\n", sizeof(oObj1)); // 8

    printf("oObj2 = %d\n", sizeof(oObj2)); // 8

    return 0;
}