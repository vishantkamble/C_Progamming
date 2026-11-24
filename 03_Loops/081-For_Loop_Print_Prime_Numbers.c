#include <stdio.h>

int main()
{
    int prime, n, i, num = 2;

    printf("Enter a Number: ");
    scanf("%d", &n);

    for (; num <= n; num++)
    {
        prime = 1, i = 2;

        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d\n", num);
        }
    }
    return 0;
}