#include<stdio.h>

int main()
{
    float a; float b; float c; float sum; float average;

    printf("Enter Three Numbers:\n");

    printf("Enter First Number:");
    scanf("%f", &a);

    printf("Enter Second Number:");
    scanf("%f", &b);

    printf("Enter Third Number:");
    scanf("%f", &c);

    sum = a + b + c;
    printf("Sum = %.2f\n",sum);

    average = sum / 3;
    printf("Average = %.2f\n",average);
    
    return 0;
}