#include<stdio.h>

int main()
{
    float hours; float days;

    printf("Enter Time in Hours: ");
    scanf("%f", &hours);

    days = hours / 24;

    printf("%.2f Hours is equal to %.2f Days\n",hours,days);
    
    return 0;
}