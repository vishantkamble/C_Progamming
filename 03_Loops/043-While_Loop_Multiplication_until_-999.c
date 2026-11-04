#include <stdio.h>

int main()
{
    int n, mul = 1;

    while (1)
    {
        printf("Enter a Number: ");

        if (scanf("%d", &n) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        // Enter -999 to stop the program
        if (n == -999)
        {
            break;
        }
        else
        {
            mul = mul * n;
        }
    }

    printf("Multiplication = %d\n", mul);

    return 0;
}