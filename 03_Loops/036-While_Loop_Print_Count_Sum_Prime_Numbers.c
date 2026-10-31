#include<stdio.h>

int main()
{
    int n, prime, i, num = 2; int sum = 0, count = 0;

    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");

    if(n <= 0 || n == 0)
    {
        printf("Prime Number does not exit!\n");
        return 0;
    }
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
    sum = sum + num;
    printf("%d\n",num);
        count++;
    }
    num++;
    }

    printf("Sum of Prime Number = %d\n",sum);
    printf("Number of Prime Number = %d\n",count);
    
    return 0;
}