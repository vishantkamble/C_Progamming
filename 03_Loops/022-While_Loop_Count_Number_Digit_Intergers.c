#include<stdio.h>

int main()
{
    int count = 0, n;

    printf("Enter a Number: ");
    scanf("%d",&n);

    while(n != 0)
    {
    count++;
    n = n / 10;
    }
    printf("Number of Digit in Integer = %d\n",count);
    return 0;
}