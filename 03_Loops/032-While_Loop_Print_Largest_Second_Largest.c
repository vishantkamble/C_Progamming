
#include <stdio.h>

int main()
{
    int n, digit;
    int max = -1, sec = -1;

    printf("Enter a Number: ");
    scanf("%d", &n);

    if(n < 0)
        n = -n;

    if(n == 0)
        max = 0;

    while(n != 0)
    {
        digit = n % 10;

        if(digit > max)
        {
            sec = max;
            max = digit;
        }
        else if(digit > sec && digit < max)
        {
            sec = digit;
        }

        n = n / 10;
    }

    printf("Largest Number = %d\n", max);

    if(sec == -1)
        printf("Second Largest Number does not exist\n");
    else
        printf("Second Largest Number = %d\n", sec);

    return 0;
}
