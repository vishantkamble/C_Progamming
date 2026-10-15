#include<stdio.h>

int main()
{
    int hours; int second;

    printf("Enter Time in Hours: ");
    scanf("%d", &hours);

    second = hours * 3600;

    printf("%d Hours is equal to %d Second\n",hours,second);
    
    return 0;
}