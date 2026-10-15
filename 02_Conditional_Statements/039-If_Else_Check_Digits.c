#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    if(n >= 0 && n <= 9)
    {
        printf("%d is 1 Digit Number.\n",n);
    }
    else 
    {
            printf("%d is not 1 Digit Number.\n",n);
    }
    return 0;
}