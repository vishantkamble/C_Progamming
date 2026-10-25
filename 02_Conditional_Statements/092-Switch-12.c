#include <stdio.h>

int main()
{
    int choice, select;
    int a, b;

    printf("Enter Two Numbers:\n");

    printf("Enter First Number: ");
    if (scanf("%d", &a) != 1)
    {
        printf("Invalid Value of a!\n");
        return 0;
    }

    printf("Enter Second Number: ");
    if (scanf("%d", &b) != 1)
    {
        printf("Invalid Value of b!\n");
        return 0;
    }

    printf("1. Calculator\n");
    printf("Enter Your Choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid Choice!\n");
        return 0;
    }

    switch (choice)
    {
    case 1:
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Remainder\n");

        printf("Enter Your Choice: ");

        if (scanf("%d", &select) != 1)
        {
            printf("Invalid Choice!\n");
            return 0;
        }

        switch (select)
        {
        case 1:
            printf("Sum = %d\n", a + b);
            break;

        case 2:
            printf("Subtraction = %d\n", a - b);
            break;

        case 3:
            printf("Multiplication = %d\n", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Remainder = %d\n", a % b);
            else
                printf("Cannot calculate remainder by zero!\n");
            break;

        default:
            printf("Invalid Select! Select Between 1 to 4 Only!\n");
        }
        break;

    default:
        printf("Invalid Choice! You have Only 1 Option to Select.\n");
    }

    return 0;
}