#include <stdio.h>

int main(void)
{
    int iNo = 10;
    char chChar = 'A';
    float fNo = 57.33f;
    double dNo = 69.33;

    printf("Integer size = %d\n", sizeof(int)); // 4
    printf("Character size = %d\n", sizeof(char)); // 1
    printf("Float size = %d\n", sizeof(float)); // 4
    printf("Double size = %d\n", sizeof(double)); // 8

    printf("iNo = %d\n", sizeof(iNo)); // 4
    printf("chChar = %d\n", sizeof(chChar)); // 1
    printf("fNo = %d\n", sizeof(float)); // 4
    printf("dNo = %d\n", sizeof(dNo)); // 8

    printf("%d\n", sizeof(20)); // 4
    printf("%d\n", sizeof('A')); // 4 in C, 1 in C++
    printf("%d\n", sizeof(99.99)); // 8
    printf("%d\n", sizeof(99.99f)); // 4

    printf("%d\n", sizeof 20); // 4
    printf("%d\n", sizeof iNo); // 4
    //printf("%d\n", sizeof int); // error

    printf("%d\n", iNo); // 10
    printf("%d\n", sizeof(++iNo)); // 4
    printf("%d\n", iNo); // 10

    printf("%d\n", sizeof(void));

    return 0;
}