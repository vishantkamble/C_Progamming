#include<stdio.h>

int main()
{
    int a; int b; int result;

    printf("Enter Two Number: \n");

    printf("Enter First Number ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    result = a != b;

    printf("Result = %d\n", result);
    
    return 0;
}