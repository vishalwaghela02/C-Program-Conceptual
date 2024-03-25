#include <stdio.h>

int multiplication(void);
int addition(int, int);
int modulus(int, int);
void division(void);
void subtraction(int, int);
 

int main(void)
{
    int no1;
    int no2;
    int ans;

    printf("Enter two number:\t");
    scanf("%d%d", &no1, &no2); 

    ans = addition(no1, no2);  //function call
    printf("\n Addition is %d\n", ans);

    subtraction(no1, no2);

    ans = multiplication();
    printf("\n multiplication is %d\n", ans);

    division();

    printf("\n For Modulus \n");
    printf("Enter Numerator:\t");
    scanf("%d", &no1);
    printf("Enter Denominator:\t");
    scanf("%d", &no2);

    ans = modulus(no1, no2);
    printf("\n Remainder is %d\n", ans);

    return 0;
}

int multiplication(void)
{
    int no1;
    int no2;
    int ans;

    printf("\n For multiplication\n");
    printf("Enter two number:\t");
    scanf("%d%d", &no1, &no2);

    ans = no1 * no2;

    return ans;
}

int addition(int no1, int no2)  //Function Definition
{
    return no1 + no2;
}

int modulus(int no1, int no2)
{
    return no1 % no2;
}

void division(void)
{
    int Numerator;
    int Denominator;
    int Quotient;

    printf("\n For Division \n Enter Numerator:\t");
    scanf("%d", &Numerator);
    printf("Enter Denominater:\t");
    scanf("%d", &Denominator);

    Quotient = Numerator / Denominator;

    printf("Quotient is %d \n", Quotient);
}

void subtraction(int no1, int no2)
{
    printf("\n Subtraction is %d", no1 - no2);
}

