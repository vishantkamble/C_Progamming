
#include <stdio.h>

int main()
{
    int choice, animal;

    printf("1. Wild Animals\n");
    printf("2. Domestic Animals\n");
    printf("Enter Your Choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }

    switch (choice)
    {
    case 1:
        printf("1. Lion\n");
        printf("2. Tiger\n");
        printf("Enter Your Choice: ");

        if (scanf("%d", &animal) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (animal)
        {
        case 1:
            printf("You selected a Lion!\n");
            break;

        case 2:
            printf("You selected a Tiger!\n");
            break;

        default:
            printf("Invalid Animal Choice!\n");
        }
        break;

    case 2:
        printf("1. Dog\n");
        printf("2. Cat\n");
        printf("Enter Your Choice: ");

        if (scanf("%d", &animal) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (animal)
        {
        case 1:
            printf("You selected a Dog!\n");
            break;

        case 2:
            printf("You selected a Cat!\n");
            break;

        default:
            printf("Invalid Animal Choice!\n");
        }
        break;

    default:
        printf("Invalid Choice! Please enter 1 or 2.\n");
    }

    return 0;
}
