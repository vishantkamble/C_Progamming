#include<stdio.h>

int main()
{
    int n, digit, count = 0;

    printf("Enter a Number: ");
    scanf("%d",&n);

    for(; n != 0; n = n / 10)
        {
            digit = n % 10;
            count++;
           
        }
    printf("Number of Digit in Integer: %d\n",count);

    return 0;
}