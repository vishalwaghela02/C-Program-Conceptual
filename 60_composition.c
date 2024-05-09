#include <stdio.h>

struct inner
{
    int iNo;
    float fNo;
};

struct outer
{
    int iNo;
    float fNo;

    struct inner iObj;

}oObj;

int main(void)
{
    printf("oObj = %d\n", sizeof(oObj)); // 16

    return 0;
}