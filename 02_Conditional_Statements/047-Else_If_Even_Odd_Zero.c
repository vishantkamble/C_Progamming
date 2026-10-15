#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    if( n == 0)
    {
        printf("Number is Zero!\n");
    }
    else if(n % 2 == 0)
    {
        printf("%d is an Even Number.\n");
    }
    else if(n % 2 != 0)
    {
        printf("%d is an Odd Number.\n");
    }
    return 0;
}