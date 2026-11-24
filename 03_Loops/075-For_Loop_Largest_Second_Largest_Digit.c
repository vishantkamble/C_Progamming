#include<stdio.h>

int main()
{
    int max = -1, min = -1, digit, n;

    printf("Enter a Number: ");
    scanf("%d",&n);

    for(; n != 0; n = n / 10)
        {
            digit = n % 10;
            if(digit > max)
            {
                min = max;
                max = digit;
            }
            else if(digit > min && digit != max)
            {
                min = digit;
            }
    
        }
    printf("Largest Number = %d\n",max);
    printf("Second Largest = %d\n",min);

    return 0;
}