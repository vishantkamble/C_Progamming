#include <stdio.h>

int main()
{
    float n, div = 0;
    int count = 0;

    while (1)
    {
        printf("Enter a Number: ");

        if (scanf("%f", &n) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        // Enter -999 to stop the program
        if (n == -999)
        {
            break;
        }

        if (n == 0)
        {
            printf("Division by zero is not allowed!\n");
            continue;
        }

        if (count == 0)
        {
            div = n;
            count++;
        }
        else
        {
            div = div / n;
        }
    }

    if (count == 0)
    {
        printf("No numbers entered!\n");
    }
    else
    {
        printf("Division = %.2f\n", div);
    }

    return 0;
}