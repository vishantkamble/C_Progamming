#include<stdio.h>

int main()
{
    int prime = 1, n;

    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n <= 1)
    {
        prime = 0;
    }
    for(int i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    if(prime)
    {
        printf("%d is Prime Number\n",n);
    }
    else
    {
        printf("%d is not Prime Number\n", n);
    }
    return 0;
}