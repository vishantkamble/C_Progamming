#include<stdio.h>

int main()
{
    float number; float half;

    printf("Enter Number:");
    scanf("%f", &number);

    half = number / 2;

    printf("Half Of Number = %.2f\n",half);
    
    return 0;
}