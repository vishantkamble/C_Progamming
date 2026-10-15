#include<stdio.h>

int main()
{
    float a; float b; float sum; float sub; float mul; float division;

    printf("Enter Two Numbers:\n");

    printf("Enter First Number:");
    scanf("%f", &a);

    printf("Enter Second Number:");
    scanf("%f", &b);

    sum = a + b;
    printf("Sum = %.2f\n",sum);
    
    sub = a - b;
    printf("Subtraction = %.2f\n",sub);

    mul = a * b;
    printf("Multiplication = %.2f\n",mul);

    division = a / b;
    printf("Division = %.2f\n",division);

    return 0;
}