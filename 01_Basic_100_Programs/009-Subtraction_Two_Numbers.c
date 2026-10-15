#include<stdio.h>

int main()
{
    int a; int b; int sub;

    printf("Enter Two Number:\n");

    printf("Enter First Number:");
    scanf("%d", &a);

    printf("Enter Second Number:");
    scanf("%d", &b);

    sub = a - b;

    printf("Subtraction = %d\n",sub);
    
    return 0;
}