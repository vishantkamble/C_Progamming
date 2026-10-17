
#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    if(scanf("%d", &n) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }

    if(n > 100)
    {
        printf("The Number Is Greater Than 100.\n");
    }
    else if(n > 0 && n <= 100)
    {
        printf("The Number Is Positive and Less Than or Equal to 100.\n");
    }
    else if(n == 0)
    {
        printf("The Number Is Zero.\n");
    }
    else
    {
        printf("The Number Is Negative.\n");
    }

    return 0;
}
