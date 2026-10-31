#include<stdio.h>

int main()
{
    int n, prime = 1, i = 2;

    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n <= 1)
    {
        prime = 0;
    }
    while( i <= n / 2)
        {
            if(n % i == 0)
            {
            prime = 0;
            break;
            }
            i++;
        }
    if(prime)
    {
        printf("%d is a Prime Number!\n",n);
    }
    else 
    {
        printf("%d is Not a Prime Number!\n",n);
    }
    return 0;
}