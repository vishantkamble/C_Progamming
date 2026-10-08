#include<stdio.h>

int main()
{
    float temperature;

    printf("Enter Temperature: ");
    scanf("%f", &temperature);

    if(temperature > 35)
    printf("Temperature is High\n");

    return 0;
}