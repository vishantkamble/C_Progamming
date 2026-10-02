#include<stdio.h>

int main()
{
    int hours; int  minutes;

    printf("Enter Time in Hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;

    printf("%d Hours is equal to %d Minutes\n",hours,minutes);
    
    return 0;
}