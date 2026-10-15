#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    if( n > 0)
    {
        printf("%d is Positive Number.\n",n);
    }
    else if(n < 0)
    {
        printf("%d is Smaller Number.\n",n);
    }
    else
    {
        printf("%d is neither Positive nor Negative Number!\n",n);
    }
    return 0;
}