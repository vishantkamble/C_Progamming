#include<stdio.h>

int main()
{
    int n, rem = 0, temp, sum = 0;

    printf("Enter a Number: ");
    if(scanf("%d",&n) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }
    temp = n;

    while(n != 0)
    {
            rem = n % 10;
            sum = sum + (rem * rem * rem);
            n /= 10;
    }
    
    if(temp == sum)
    {
        printf("Armstrong Number!\n");
    }
    else
    {
        printf("Not Armstrong Number!\n");
    }
    
    return 0;
}