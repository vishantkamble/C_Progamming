#include<stdio.h>

int main()
{
    int i = 1, n;

    printf("Enter a Number: ");
    scanf("%d",&n);

    while(i <= n)
        {
            printf("%d\t",i);
            i = i + 2;
        }
    return 0;
}