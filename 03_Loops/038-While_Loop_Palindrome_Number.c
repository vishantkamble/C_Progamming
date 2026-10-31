#include<stdio.h>

int main()
{
    int n, temp, digit, rev = 0;

    printf("Enter a Number: ");
    if(scanf("%d",&n) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }
    temp = n;

    while(n != 0)
        {
            digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }
    
    printf("Reverse Number = %d\n",rev);
    if(temp == rev)
    {
        printf("%d is Palindrome Number!\n", rev);
    }
    else
    {
        printf("%d is not Palindrome Number!\n",rev);
    }
    
    return 0;
}