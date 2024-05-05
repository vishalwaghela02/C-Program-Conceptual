#include <stdio.h>

union demo
{
    char chChar;
    int iNo;
    double dNo;
};

int main(void)
{
    union demo obj;

    printf("obj.chChar = %c\nobj.iNo = %d\nobj.dNo = %lf\n", obj.chChar, obj.iNo, obj.dNo); // G1 G1 G3

    obj.chChar = 'A';

    printf("obj.chChar = %c\nobj.iNo = %d\nobj.dNo = %lf\n", obj.chChar, obj.iNo, obj.dNo); // A G2 G3
 
    obj.iNo = 10;

    printf("obj.chChar = %c\nobj.iNo = %d\nobj.dNo = %lf\n", obj.chChar, obj.iNo, obj.dNo); // A 10 G3

    obj.dNo = 99.99;

    printf("obj.chChar = %c\nobj.iNo = %d\nobj.dNo = %lf\n", obj.chChar, obj.iNo, obj.dNo); // A 10 99.99

    return 0;
}    