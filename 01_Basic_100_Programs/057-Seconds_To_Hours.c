#include<stdio.h>

int main()
{
    float second; float hours;

    printf("Enter Time in Second: ");
    scanf("%f", &second);

    hours = second / 3600;

    printf("%.2f Second is eqaul to %.2f Hours\n",second,hours);
    
    return 0;
}