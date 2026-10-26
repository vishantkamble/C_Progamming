
#include <stdio.h>

int main()
{
    int choice, food;

    printf("1. Vegetarian\n");
    printf("2. Non-Vegetarian\n");
    printf("Enter Your Choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }

    switch (choice)
    {
    case 1:
        printf("1. Pizza\n");
        printf("2. Burger\n");
        printf("Enter Your Choice: ");

        if (scanf("%d", &food) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (food)
        {
        case 1:
            printf("You selected Pizza!\n");
            break;

        case 2:
            printf("You selected a Burger!\n");
            break;

        default:
            printf("Invalid Food Choice!\n");
        }
        break;

    case 2:
        printf("1. Chicken\n");
        printf("2. Fish\n");
        printf("Enter Your Choice: ");

        if (scanf("%d", &food) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (food)
        {
        case 1:
            printf("You selected Chicken!\n");
            break;

        case 2:
            printf("You selected Fish!\n");
            break;

        default:
            printf("Invalid Food Choice!\n");
        }
        break;

    default:
        printf("Invalid Choice! Please enter 1 or 2.\n");
    }

    return 0;
}
