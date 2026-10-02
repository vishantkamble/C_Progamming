#include<stdio.h>

int main()
{
    float minutes; float hours;

    printf("Enter Time in Minutes: ");
    scanf("%f", &minutes);

    hours = minutes / 60;

    printf("%.2f Minutes is equal to %.2f Hours\n",minutes,hours);
    
    return 0;
}