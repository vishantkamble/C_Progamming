#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    if(scanf("%d",&n) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }
    for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                printf("%d is an Even Number.\n",i);
            }
        }
    return 0;
}