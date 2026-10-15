#include<stdio.h>

int main()
{
    int a; int b; int mul;

    printf("Enter Two Numbers:\n");
    
    printf("Enter First Number:");
    scanf("%d", &a);

    printf("Enter Second Number:");
    scanf("%d", &b);

    mul = a * b;

    printf("Multiplication = %d\n",mul);
    
    return 0;
}