#include <stdio.h>

int main()
{
    int n, sub = 0, digit;

    printf("Enter a Number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;    // Extract last digit (right to left)
        sub = digit - sub; // Subtract digit from previous result
        n = n / 10;        // Remove last digit
    }
    printf("Subtraction of Number = %d\n", sub);

    return 0;
}