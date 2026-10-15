#include<stdio.h>

int main()
{
    float celsius; float fahrenheit;

    printf("Enter Temperature in Celcius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0 * celsius) + 32;

    printf("%.2f Celsius is equal to %.2f Fahrenheit\n",celsius,fahrenheit);
    
    return 0;
}