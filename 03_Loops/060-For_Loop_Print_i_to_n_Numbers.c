#include<stdio.h>

int main()
{
    int i, n;

    printf("Enter Greter Number: ");
    if(scanf("%d",&i) != 1)
    {
        printf("Invalid Number!\n");
        return 0;
    }
    printf("Enter Smaller Number: ");
    if(scanf("%d",&n) != 1)
    {
        printf("Invalid Number: ");
        return 0;
    }
    for(i; i >= n; i--)
        {
            printf("%d\t",i);
        }
    
    return 0;
}