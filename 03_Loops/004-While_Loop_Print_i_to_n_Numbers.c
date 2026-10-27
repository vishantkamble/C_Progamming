#include<stdio.h>

int main()
{
    int i, n;

    printf("Enter Greater Number: ");
    scanf("%d",&i);

    printf("Enter Smaller Number: ");
    scanf("%d",&n);

    while(i >= n)
        {
            printf("%d\t",i);
            i--;
        }
    return 0;
}