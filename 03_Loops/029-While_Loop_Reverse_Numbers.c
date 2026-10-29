#include <stdio.h>

int main()
{
    int n, rev = 0, digit;

    printf("Enter a Number: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }

    printf("\nYour Entered Number: %d\n", n);

    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    printf("Reverse Number = %d\n", rev);

    return 0;
}