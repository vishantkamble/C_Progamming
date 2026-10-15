#include<stdio.h>

int main()
{
    int minutes; int second;

    printf("Enter Time in Minutes: ");
    scanf("%d", &minutes);

    second = minutes * 60;

    printf("%d Minutes is equal to %d second\n",minutes, second);
    
    return 0;
}