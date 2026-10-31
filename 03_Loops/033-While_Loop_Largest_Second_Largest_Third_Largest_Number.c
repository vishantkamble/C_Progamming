#include<stdio.h>

int main()
{
    int n; int max = -1, sec = -1, third = -1; int digit;

    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n < 0)
    {
        n = -n;
    }
    if(n == 0)
    {
        max = 0;
    }
    while(n != 0)
        {
            digit = n % 10;
            if(digit >= max)
            {
                third = sec; 
                sec = max;
                max = digit;
            }
            else if(digit >= sec && digit < max)
            {
                third = sec; 
                sec = digit;
            }
        else if(digit >= third && digit < sec && digit < max)
            {
                third = digit;
            }
            n = n / 10;
        }

    printf("Largest Number: %d\n",max);
    printf("Second Largest = %d\n",sec);

    if(third == -1)
    {
        printf("Third Largest Number does not Exit!\n");
    }
    else
    {
        printf("Third Largest Number = %d\n",third);
    }
     if(max == sec && sec == third && third == digit)
           {
        printf("All are Same Number");
           }
    return 0;
}