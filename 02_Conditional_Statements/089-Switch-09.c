#include <stdio.h>

int main()
{
    int choice;

    printf("Favorite Programming Language: \n");
    printf("1. C\n");
    printf("2. C++\n");
    printf("3. Python\n");
    printf("4. Java\n");
    printf("5. JavaScript\n");
    printf("6. Other Language\n");

    printf("\nEnter your choice (1-6): ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid input! Please enter a number.\n");
        return 0;
    }

    switch (choice)
    {
        case 1:
            printf("Your favorite programming language is C.\n");
            break;

        case 2:
            printf("Your favorite programming language is C++.\n");
            break;

        case 3:
            printf("Your favorite programming language is Python.\n");
            break;

        case 4:
            printf("Your favorite programming language is Java.\n");
            break;

        case 5:
            printf("Your favorite programming language is JavaScript.\n");
            break;

        case 6:
            printf("Your favorite programming language is another language.\n");
            break;

        default:
            printf("Invalid choice! Please select a number from 1 to 6.\n");
    }

    return 0;
}
