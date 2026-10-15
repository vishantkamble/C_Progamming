#include<stdio.h>

int main()
{
    int a; int b;

    printf("Enter Two Numbers: \n");

    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);

    if(a < b)
    {
        printf("%d is Smaller than %d.\n",a ,b);
    }
    else
    {
        printf("%d is Smaller than %d.\n",b,a);
    }
    return 0;
}