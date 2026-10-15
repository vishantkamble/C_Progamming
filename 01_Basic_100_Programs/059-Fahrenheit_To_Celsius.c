#include<stdio.h>

int main()
{
    float fahrenheit; float celsius;

    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    printf("%.2f Fahrenheit is equal to %.2f Celsius\n",fahrenheit,celsius);
    
    return 0;
}