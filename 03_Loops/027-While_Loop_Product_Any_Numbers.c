#include <stdio.h>

int main()
{
    int n, product = 1, digit;

    printf("Enter a Number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        product = product * digit;
        n = n / 10;
    }
    printf("Product of Number = %d\n", product);

    return 0;
}