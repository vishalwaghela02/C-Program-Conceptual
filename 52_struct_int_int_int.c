#include <stdio.h>

struct demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
    struct demo obj;

    printf("obj.iNo1 = %d\nobj.iNo2 = %d\nobj.iNo3 = %d\n", obj.iNo1, obj.iNo2, obj.iNo3); // G G G

    obj.iNo1 = 10;

    printf("obj.iNo1 = %d\nobj.iNo2 = %d\nobj.iNo3 = %d\n", obj.iNo1, obj.iNo2, obj.iNo3); // 10 G G

    obj.iNo2 = 20;

    printf("obj.iNo1 = %d\nobj.iNo2 = %d\nobj.iNo3 = %d\n", obj.iNo1, obj.iNo2, obj.iNo3); // 10 20 G

    obj.iNo3 = 30;

    printf("obj.iNo1 = %d\nobj.iNo2 = %d\nobj.iNo3 = %d\n", obj.iNo1, obj.iNo2, obj.iNo3); // 10 20 30

    return 0;
}