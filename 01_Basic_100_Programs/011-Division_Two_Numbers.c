#include<stdio.h>

int main()
{
    float a; float b; float division;

    printf("Enter Two Number:\n");

    printf("Enter First Number:");
    scanf("%f", &a);

    printf("Enter Second Number:");
    scanf("%f", &b);

    division = a / b;

    printf("Division = %.2f\n",division);
    
    return 0;
}