#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    if((scanf("%d", &n)) == 1)
    {
        if(n > 0)
        {
            if((n % 5) == 0)
            {
                printf("%d is Divisible by 5.\n",n);
            }
            else
            {
                printf("%d is not Divisible by 5.\n",n);
            }
        }
        else
        {
            printf("%d is Zero or Negative Number.\n",n);
        }
    }
    else
    {
        printf("Invalid Input!\n");
    }
    return 0;
}