
#include <stdio.h>

int main()
{
    int choice, vehicle;

    printf("1. Two Wheeler\n");
    printf("2. Four Wheeler\n");
    printf("Enter Your Choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }

    switch (choice)
    {
    case 1:
        printf("1. Bike\n");
        printf("2. Scooter\n");
        printf("Enter Your Choice: ");

        if (scanf("%d", &vehicle) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (vehicle)
        {
        case 1:
            printf("You selected a Bike!\n");
            break;

        case 2:
            printf("You selected a Scooter!\n");
            break;

        default:
            printf("Invalid Vehicle Choice!\n");
        }
        break;

    case 2:
        printf("1. Car\n");
        printf("2. Jeep\n");
        printf("Enter Your Choice: ");

        if (scanf("%d", &vehicle) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (vehicle)
        {
        case 1:
            printf("You selected a Car!\n");
            break;

        case 2:
            printf("You selected a Jeep!\n");
            break;

        default:
            printf("Invalid Vehicle Choice!\n");
        }
        break;

    default:
        printf("Invalid Choice! Please enter 1 or 2.\n");
    }

    return 0;
}
