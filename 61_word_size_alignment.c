#include <stdio.h>

struct demo1
{
    char chChar;
    double dNo;

}Obj1;

struct demo2
{
    int iNo;
    double dNo;

}Obj2;

struct  demo3
{
    char chChar;
    int iNo;

}Obj3;

struct demo4
{
    char chChar1;
    char chChar2;

}Obj4;

int main(void)
{
    printf("Obj1 = %d\n", sizeof(Obj1)); // 16
    printf("Obj2 = %d\n", sizeof(Obj2)); // 16
    printf("Obj3 = %d\n", sizeof(Obj3)); // 8 
    printf("Obj4 = %d\n", sizeof(Obj4)); // 2

    return 0;
}
