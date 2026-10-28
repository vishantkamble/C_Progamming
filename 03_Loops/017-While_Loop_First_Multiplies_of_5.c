#include<stdio.h>

int main()
{
    int i = 5, n;

    printf("Enter a Number: ");
    scanf("%d",&n);
    
    while(i <= n)
        {
            printf("%d\n",i);
            i+= 5;
        }
    return 0;
}