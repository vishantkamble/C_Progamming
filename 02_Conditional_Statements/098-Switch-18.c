
#include <stdio.h>

int main()
{
    int choice, drink;

    printf("1. Hot Drinks\n");
    printf("2. Cold Drinks\n");
    printf("Enter Your Choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }

    switch (choice)
    {
    case 1:
        printf("1. Tea\n");
        printf("2. Coffee\n");
        printf("Enter Your Choice: ");

        if (scanf("%d", &drink) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (drink)
        {
        case 1:
            printf("You selected Tea!\n");
            break;

        case 2:
            printf("You selected Coffee!\n");
            break;

        default:
            printf("Invalid Drink Choice!\n");
        }
        break;

    case 2:
        printf("1. Juice\n");
        printf("2. Milkshake\n");
        printf("Enter Your Choice: ");

        if (scanf("%d", &drink) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (drink)
        {
        case 1:
            printf("You selected Juice!\n");
            break;

        case 2:
            printf("You selected Milkshake!\n");
            break;

        default:
            printf("Invalid Drink Choice!\n");
        }
        break;

    default:
        printf("Invalid Choice! Please enter 1 or 2.\n");
    }

    return 0;
}
