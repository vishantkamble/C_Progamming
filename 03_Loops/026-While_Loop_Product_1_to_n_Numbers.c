#include <stdio.h>

int main()
{
    int i = 1, n, product = 1;

    printf("Enter a Number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        product = product * i;
        printf("%d\n", i);
        i++;
    }

    printf("Product of Number from %d to %d is: %d\n", i, n, product);

    return 0;
}