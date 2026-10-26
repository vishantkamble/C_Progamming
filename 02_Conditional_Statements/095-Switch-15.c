#include <stdio.h>

int main()
{
    int choice, items;

    printf("1. Fruits\n");
    printf("2. Vegetables\n");
    printf("Enter Your Choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }

    switch (choice)
    {
    case 1:
        printf("1. Apple\n");
        printf("2. Banana\n");
        printf("Enter Your Choice: ");

        if (scanf("%d", &items) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (items)
        {
        case 1:
            printf("You selected an Apple!\n");
            break;

        case 2:
            printf("You selected a Banana!\n");
            break;

        default:
            printf("Invalid Choice! Please enter a number between 1 and 2.\n");
        }
        break;

    case 2:
        printf("1. Tomato\n");
        printf("2. Potato\n");
        printf("Enter Your Choice: ");

        if (scanf("%d", &items) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (items)
        {
        case 1:
            printf("You selected a Tomato!\n");
            break;

        case 2:
            printf("You selected a Potato!\n");
            break;

        default:
            printf("Invalid Choice! Please enter a number between 1 and 2.\n");
        }
        break;

    default:
        printf("Invalid Choice! Please enter 1 or 2.\n");
    }

    return 0;
}
