#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter a Number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        if( n % 5 == 0)
        {
            printf("%d is Divisible by both 2 & 5.\n",n);
        }
        else
        {
            printf("%d is Divisible Only by 2.\n",n);
            printf("%d is not Divisible by 5.\n",n);
        }
    }
         else if(n % 5 == 0)
    {
        printf("%d is Divisible by  5.\n",n);
        printf("%d is not Divisible by 2.\n",n);
    }
        else
    {
        printf("%d is not Divisible by both 2 & 5.\n",n);
    }
   
    return 0;
}