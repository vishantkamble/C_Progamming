#include <stdio.h>

int main()
{
    int n, sum = 0;

    while (1)
    {
        printf("Enter a Number: ");
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }
        else
        {
            sum = sum + n;
        }
    }
    printf("Sum = %d\n", sum);
    return 0;
}