#include<stdio.h>

int main()
{
    int n, prime, i, num = 2;

    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");

    while(num <= n)
    {
    prime = 1; i = 2;
    
    while( i <= num / 2)
    {
    if(num % i == 0)
    {
    prime = 0;
    break;
    }
    i++;
    }
        
    if(prime)
    {
        printf("%d\n",num);
    }
    num++;
    }
    
    return 0;
}