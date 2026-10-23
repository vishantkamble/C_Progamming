#include <stdio.h>

int main()
{
    int choice;
    printf("Enter Your Choice: \n");
    printf("1.January\n");
    printf("2.February\n");
    printf("3.March\n");
    printf("4.April\n");
    printf("5.May\n");
    printf("6.June\n");
    printf("7.Junly\n");
    printf("8.August\n");
    printf("9.September\n");
    printf("10.Octomber\n");
    printf("11.November\n");
    printf("12.December\n");
    printf("Enter a Month: ");
    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }
    switch (choice)
    {
    case 1:
        printf("January\n");
        break;

    case 2:
        printf("February\n");
        break;

    case 3:
        printf("March\n");
        break;

    case 4:
        printf("April\n");
        break;

    case 5:
        printf("May\n");
        break;

    case 6:
        printf("June\n");
        break;

    case 7:
        printf("Junly\n");
        break;

    case 8:
        printf("August\n");
        break;

    case 9:
        printf("September\n");
        break;

    case 10:
        printf("Octomber\n");
        break;

    case 11:
        printf("November\n");
        break;

    case 12:
        printf("December\n");
        break;

    default:
        printf("Invalid Choice Enter Your Choice Between (1 to 12).\n");
    }
    return 0;
}