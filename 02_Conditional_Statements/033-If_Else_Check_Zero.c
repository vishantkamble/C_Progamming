#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    if(!(n > 0 || n < 0))
    {
        printf("The Given Number %d is Zero.\n", n);
    }
    else
    {
        printf("The Given Number %d is not Zero.\n");
    }
    return 0;
}