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
            printf("%d\t",i);
        }
    return 0;
}