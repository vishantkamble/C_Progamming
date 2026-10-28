#include<stdio.h>

int main()
{
    int i = 1, n;

    printf("Enter a Number: ");
    if(scanf("%d",&n) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }
    while(i <= n)
        {
            if(i % 7 == 0)
            {
                printf("%d\t",i);
            }
            i++;
        }
    return 0;
}