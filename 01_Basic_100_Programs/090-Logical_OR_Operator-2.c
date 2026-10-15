#include<stdio.h>

int main()
{
    int a; int b; int result;

    printf("Enter Value of a & b:\n");

    printf("Enter Value of a: ");
    scanf("%d", &a);

    printf("Enter Value of b: ");
    scanf("%d", &b);

    result = a > b || b > a;

    printf("Result = %d\n", result);
    
    return 0;
}