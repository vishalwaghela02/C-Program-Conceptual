#include <stdio.h>

struct outer1
{
    int iNo1;
    float fNo1;

    struct inner1
    {
        int iNo2;
        float fNo2;
    };
    
}oObj1;

struct outer2
{
    int iNo;
    float fNo;

    struct  inner2
    {
        int iNo;
        float fNo;
    }iObj;

}oObj2;

struct outer3
{
    char chChar;
    int iNo;

    struct inner3
    {
        int iNo;
        float fNo;

    }iObj1, iObj2;

}oObj3;



int main(void)
{
    printf("oObj1 = %d\n", sizeof(oObj1)); // 16 

    printf("oObj2 = %d\n", sizeof(oObj2)); // 16

    printf("oObj3 = %d\n", sizeof(oObj3)); // 24
    
    return 0;
}