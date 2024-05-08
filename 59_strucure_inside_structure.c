#include <stdio.h>

union outer1
{
    char chChar;
    double dNo;

    struct inner1
    {
        char chChar;
        double dNo;

    }iObj1, iObj2;

}oObj1;

union outer2
{
    char chChar;
    double dNo;

    struct inner2
    {
        int iNo;
        float fNo;

    }iObj[3];

}oObj2;


int main(void)
{
    printf("oObj1 = %d\n", sizeof(oObj1)); // 16

    printf("oObj2 = %d\n", sizeof(oObj2)); // 24
}