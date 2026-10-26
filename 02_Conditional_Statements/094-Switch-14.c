#include <stdio.h>

int main()
{
    int choice, size;

    printf("1. Pizza\n");
    printf("2. Burger\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("1. Small\n2. Medium\n3. Large\n");
        printf("Choose size: ");
        scanf("%d", &size);

        switch (size)
        {
        case 1:
            printf("Small Pizza");
            break;
        case 2:
            printf("Medium Pizza");
            break;
        case 3:
            printf("Large Pizza");
            break;
        default:
            printf("Invalid size");
        }
        break;

    case 2:
        printf("1. Small\n2. Medium\n3. Large\n");
        printf("Choose size: ");
        scanf("%d", &size);

        switch (size)
        {
        case 1:
            printf("Small Burger");
            break;
        case 2:
            printf("Medium Burger");
            break;
        case 3:
            printf("Large Burger");
            break;
        default:
            printf("Invalid size");
        }
        break;

    default:
        printf("Invalid choice");
    }

    return 0;
}