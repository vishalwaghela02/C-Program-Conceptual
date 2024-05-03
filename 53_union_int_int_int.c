#include<stdio.h>

union demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
    union demo obj;

    printf("obj.iNo1 = %d\nobj.iNo2 = %d\nobj.iNo3 = %d\n", obj.iNo1, obj.iNo2, obj.iNo3); // G G G

    obj.iNo1 = 10;

    printf("obj.iNo1 = %d\nobj.iNo2 = %d\nobj.iNo3 = %d\n", obj.iNo1, obj.iNo2, obj.iNo3); // 10 10 10

    obj.iNo2 = 20;

    printf("obj.iNo1 = %d\nobj.iNo2 = %d\nobj.iNo3 = %d\n", obj.iNo1, obj.iNo2, obj.iNo3); // 20 20 20

    obj.iNo3 = 30;

    printf("obj.iNo1 = %d\nobj.iNo2 = %d\nobj.iNo3 = %d\n", obj.iNo1, obj.iNo2, obj.iNo3); // 30 30 30

    return 0;
}