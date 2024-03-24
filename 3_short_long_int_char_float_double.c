#include <stdio.h>

int main(void)
{
    printf("Interger = %d\n", sizeof(int));  // 4
    printf("Short Integer = %d\n", sizeof(short int));  // 2
    printf("Long Interger = %d\n", sizeof(long int));  // 4
    printf("Long Long Interger = %d\n", sizeof(long long int));  // 8

    printf("Character = %d\n", sizeof(char));
    //printf("Short Character = %d\n", sizeof(short char));
    //printf("Long Character = %d\n", sizeof(long char));
    //printf("Long Long Character = %d\n", sizeof(long long char));s

    printf("Float = %d\n", sizeof(float));
    //printf("Short Float = %d\n", sizeof(short float));
    //printf("Long Float = %d\n", sizeof(long float));
    //printf("Long Long Float = %d\n", sizeof(long long float));

    printf("Double = %d\n", sizeof(double));
    //printf("Short Double = %d\n", sizeof(short double));
    printf("Long Double = %d\n", sizeof(long double));  // 12
    //printf("Long Long Double = %d\n", sizeof(long long double));

    return 0;
}