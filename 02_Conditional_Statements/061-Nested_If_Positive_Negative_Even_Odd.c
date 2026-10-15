#include<stdio.h>

int main()
{
    int n;

    printf("Enter  a Number: ");
    scanf("%d", &n);

    if( n > 0)
    {
        printf("%d is a Positive Number.\n",n);

        if(n % 2 == 0)
        {
            printf("%d is an Even Number.\n",n);
        }
        else if(n < 0)
        {
            printf("%d is a Negative Number.\n",n);
        }
    }
    else
    {
        printf("%d is an Odd Number.\n");
    }
    return 0;
}