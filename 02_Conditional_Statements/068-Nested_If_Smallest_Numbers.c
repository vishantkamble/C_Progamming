#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter Three Number: \n");
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("Enter Third Number: ");
    scanf("%d", &c);

    if(a < b)
    {
        if(a < c)
        {
            printf("%d is Smallest Number.\n",a);
        }
        else 
        {
            printf("%d is Smaller Number.\n",c);
        }
    }
        else if( a == b == c)
        {
            printf("Equal Numbers.\n");
        }
    else if(b < c)
    {
        printf("%d is Smaller Number.\n",b);
    }
    else
    {
        printf("%d is Smallest Number.\n",c);
    }
    return 0;
}