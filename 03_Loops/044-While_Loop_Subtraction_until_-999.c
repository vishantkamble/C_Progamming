#include <stdio.h>

int main()
{
    int n, sub = 0, count = 0;

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

        if (count == 0)
        {
            sub = n;
            count++;
        }
        else
        {
            sub = sub - n;
        }
    }

    if (count == 0)
    {
        printf("No numbers entered!\n");
    }
    else
    {
        printf("Subtraction = %d\n", sub);
    }

    return 0;
}