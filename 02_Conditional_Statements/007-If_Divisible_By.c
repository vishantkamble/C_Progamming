#include<stdio.h>

int main()
{
    int a; int b;

    printf("Enter Two Numbers: \n");

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    if(a % b == 0)
    printf("%d is Divisible by %d\n", a, b);

    return 0;
}