#include<stdio.h>

int main()
{
    int a; int b; int c;

    printf("Enter Three Number: \n");

    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("Enter Third Number: ");
    scanf("%d", &c);

    if(a >= b && a >= c)
    {
        printf("%d is Greatest.\n",a);
    }
    else if( b >= a && b >= c)
    {
        printf("%d is Greatest.\n",b);
    }
    else 
    {
        printf("%d is Greatest .\n",c);
    }
    return 0;
}