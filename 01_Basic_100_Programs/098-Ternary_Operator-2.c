#include<stdio.h>

int main()
{
    int a; int b; int result;

    printf("Enter Value Of a & b: \n");

    printf("Enter Value Of a: ");
    scanf("%d", &a);

    printf("Enter Value Of b: ");
    scanf("%d", &b);

    result = (a > b) ? a : b;

    printf("Result = %d\n", result);
    
    return 0;
}