#include<stdio.h>

int main()
{
    int max = -1, min = -1, min1 = -1, digit, n;

    printf("Enter a Number: ");
    scanf("%d",&n);

    for(; n != 0; n = n / 10)
        {
            digit = n % 10;
            if(digit > max)
            {
                min1 = min;
                min = max;
                max = digit;
            }
            else if(digit > min && digit != max)
            {
                min1 = min;
                min = digit;
            }
            else if(digit >min1 && digit != min)
            {
                min1 = digit;
            }
        }
    printf("Largest Number = %d\n",max);
    printf("Second Largest = %d\n",min);
    printf("Third Largest = %d\n",min1);

    return 0;
}