#include<stdio.h>

int main()
{
    int i = 1, sum = 0, n ;

    printf("Enter a Number: ");
    scanf("%d",&n);

    while(i <= n)
        {
            printf("Square of %d = %d\n",i, i * i);
            i++;
        }
    
    return 0;
}