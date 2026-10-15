#include<stdio.h>

int main()
{
    int a; int b;

    printf("Enter Value of a & b: \n");

    printf("Enter Value of a: ");
    scanf("%d", &a);

    printf("Enter Value of b: ");
    scanf("%d", &b);

    printf("a | b = %d\n", a | b);
    return 0;
}