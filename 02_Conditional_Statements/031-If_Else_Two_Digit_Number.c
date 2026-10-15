#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    if( n >= 9 && n <= 99)
    {
        printf("%d is Two digit Number.\n",n);
    }
    else
    {
        printf("%d is Not Two Digit Number.\n",n);
    }
    return 0;
}