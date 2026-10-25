#include <stdio.h>

int main()
{
    int choice, topic;

    printf("===== Main Menu =====\n");
    printf("1. Programming Language\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }

    switch (choice)
    {
    case 1:
        printf("\n===== Programming Languages =====\n");
        printf("1. C\n");
        printf("2. C++\n");
        printf("3. Python\n");
        printf("4. Java\n");
        printf("5. JavaScript\n");

        printf("Select a language (1-5): ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (choice)
        {
        case 1:
            printf("\n===== C Topics =====\n");
            printf("1. Variables\n");
            printf("2. Loops\n");
            printf("3. Functions\n");
            printf("Choose a topic: ");

            if (scanf("%d", &topic) != 1)
            {
                printf("Invalid Input!\n");
                return 0;
            }

            switch (topic)
            {
            case 1:
                printf("You selected Variables in C.\n");
                break;
            case 2:
                printf("You selected Loops in C.\n");
                break;
            case 3:
                printf("You selected Functions in C.\n");
                break;
            default:
                printf("Invalid Topic!\n");
            }
            break;

        case 2:
            printf("\n===== C++ Topics =====\n");
            printf("1. Classes\n");
            printf("2. Objects\n");
            printf("3. Inheritance\n");
            printf("Choose a topic: ");

            if (scanf("%d", &topic) != 1)
            {
                printf("Invalid Input!\n");
                return 0;
            }

            switch (topic)
            {
            case 1:
                printf("You selected Classes in C++.\n");
                break;
            case 2:
                printf("You selected Objects in C++.\n");
                break;
            case 3:
                printf("You selected Inheritance in C++.\n");
                break;
            default:
                printf("Invalid Topic!\n");
            }
            break;

        case 3:
            printf("\n===== Python Topics =====\n");
            printf("1. Variables\n");
            printf("2. Loops\n");
            printf("3. Functions\n");
            printf("Choose a topic: ");

            if (scanf("%d", &topic) != 1)
            {
                printf("Invalid Input!\n");
                return 0;
            }

            switch (topic)
            {
            case 1:
                printf("You selected Variables in Python.\n");
                break;
            case 2:
                printf("You selected Loops in Python.\n");
                break;
            case 3:
                printf("You selected Functions in Python.\n");
                break;
            default:
                printf("Invalid Topic!\n");
            }
            break;

        case 4:
            printf("You selected Java.\n");
            break;

        case 5:
            printf("You selected JavaScript.\n");
            break;

        default:
            printf("Invalid Language Choice!\n");
        }
        break;

    default:
        printf("Invalid Main Menu Choice!\n");
    }

    return 0;
}