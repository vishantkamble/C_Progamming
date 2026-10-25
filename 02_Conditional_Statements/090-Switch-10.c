#include <stdio.h>

int main()
{
    int choice;

    printf("===== Greeting Program =====\n\n");

    printf("1. Good Morning (5:00 AM - 11:59 AM)\n");
    printf("2. Good Afternoon (12:00 PM - 4:59 PM)\n");
    printf("3. Good Evening (5:00 PM - 8:59 PM)\n");
    printf("4. Good Night (9:00 PM - 4:59 AM or when going to bed)\n");

    printf("\nChoose your greeting: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid input!\n");
        return 0;
    }

    switch (choice)
    {
        case 1:
            printf("Good Morning!\n");
            break;

        case 2:
            printf("Good Afternoon!\n");
            break;

        case 3:
            printf("Good Evening!\n");
            break;

        case 4:
            printf("Good Night!\n");
            break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}