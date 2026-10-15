#include<stdio.h>

int main()
{
    int a; int b; int sum = 0; 

    printf("Enter Two Number:");
    scanf("%d%d", &a, &b);

    sum = a + b; 

    printf("Sum = %d\n",sum);
    
    return 0;
}