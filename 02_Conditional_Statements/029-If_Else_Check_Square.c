#include<stdio.h>

int main()
{
    int n; int a; int b;

    printf("Enter Two Numbers: \n");
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Seocnd Number: ");
    scanf("%d", &b);

    if( a == b)
    {
        a = a * b;
        printf("%d is Square of %d.\n",a, b);
    }
    else
    {
        a = a * b;
        printf("%d is Not Square of %d.\n", a, b);
    }
    return 0;
}