#include<stdio.h>

int main()
{
    int a; int b; int remainder;

    printf("Enter Two Numbers:\n");

    printf("Enter First Number:");
    scanf("%d", &a);

    printf("Enter Second Number:");
    scanf("%d", &b);

    remainder = a % b;

    printf("Remainder = %d\n",remainder);
    
    return 0;
}