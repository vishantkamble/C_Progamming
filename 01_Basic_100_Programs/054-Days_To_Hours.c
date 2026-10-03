#include<stdio.h>

int main()
{
    int days; int hours;

    printf("Enter Time in Days: ");
    scanf("%d", &days);

    hours = days * 24;

    printf("%d Days is equal to %d Hours\n",days,hours);
    
    return 0;
}