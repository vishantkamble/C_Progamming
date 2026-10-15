#include<stdio.h>

int main()
{
    int a; int b;

    printf("Enter Two Number: \n");

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    if(a > b)
    printf("%d is Greater than %d\n", a, b);
    
    return 0;
}