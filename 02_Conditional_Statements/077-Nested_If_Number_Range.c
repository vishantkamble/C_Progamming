#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    if((scanf("%d", &n)) == 1)
    {
        if(n > 0)
        {
            if(n > 100)
            {
                printf("The Number is Greater Than 100.\n");
            }
            else
            {
                printf("The Number Is Positive and Less Than or Equal to 100.\n");
            }
        }
    else
    {
        printf("%d is a Zero or Negative Number.\n",n);
    }
    }
    else
    {
        printf("Invalid Input!\n");
    }
    return 0;
}