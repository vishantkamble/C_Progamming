#include<stdio.h>

int main()
{
    float a; float b; float sum; float average;

    printf("Enter Two Numbers:\n");

    printf("Enter First Number:");
    scanf("%f", &a);

    printf("Enter Second Number:");
    scanf("%f", &b);

    sum = a + b;
    printf("Sum = %.2f\n",sum);

    average = sum / 2;
    printf("Average = %.2f\n",average);
    
    return 0;
}