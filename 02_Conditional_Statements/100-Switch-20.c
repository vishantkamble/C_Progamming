
#include <stdio.h>

int main()
{
    int choice, subject;

    printf("1. Science\n");
    printf("2. Commerce\n");
    printf("Enter Your Choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }

    switch (choice)
    {
    case 1:
        printf("1. Physics\n");
        printf("2. Chemistry\n");
        printf("Enter Your Subject: ");

        if (scanf("%d", &subject) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (subject)
        {
        case 1:
            printf("You selected Physics!\n");
            break;

        case 2:
            printf("You selected Chemistry!\n");
            break;

        default:
            printf("Invalid Subject Choice!\n");
        }
        break;

    case 2:
        printf("1. Accountancy\n");
        printf("2. Economics\n");
        printf("Enter Your Subject: ");

        if (scanf("%d", &subject) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (subject)
        {
        case 1:
            printf("You selected Accountancy!\n");
            break;

        case 2:
            printf("You selected Economics!\n");
            break;

        default:
            printf("Invalid Subject Choice!\n");
        }
        break;

    default:
        printf("Invalid Choice! Please enter 1 or 2.\n");
    }

    return 0;
}
