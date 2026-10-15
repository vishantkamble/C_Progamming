#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter Three Numbers: \n");
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("Enter Third Number: ");
    scanf("%d", &c);

    if(a > b)
    {
        if(a > c)
        {
            printf("%d is a Largest Number.\n",a);
        }
        else
        {
            printf("%d is a Largest Number.\n",c);
        }
    }
    else 
    {
        if(b > c)
        {
        printf("%d is Largest Number.\n",b);
    }
    else 
    {
        printf("%d is Largest Number.\n",c);
    }
    }
    return 0;
}