#include<stdio.h>

int main()
{
    int i = 1, sum = 0, n ;

    printf("Enter a Number: ");
    scanf("%d",&n);

    while(i <= n)
        {
            sum = sum + i;
            printf("%d\n",i);
            i++;
        }
    printf("Sum = %d\n",sum);
    
    return 0;
}