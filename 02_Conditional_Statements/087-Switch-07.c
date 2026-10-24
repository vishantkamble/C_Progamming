
#include <stdio.h>

int main()
{
    float a, b, area;
    int choice;

    printf("1. Area of Rectangle\n");
    printf("2. Area of Square\n");
    printf("3. Area of Circle\n");
    printf("Enter Your Choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }

    switch (choice)
    {
    case 1:
        printf("Enter length and breadth: ");
        if (scanf("%f %f", &a, &b) != 2)
        {
            printf("Invalid Input!\n");
            return 0;
        }
        area = a * b;
        printf("Area of Rectangle = %.2f\n", area);
        break;

    case 2:
        printf("Enter side: ");
        if (scanf("%f", &a) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }
        area = a * a;
        printf("Area of Square = %.2f\n", area);
        break;

    case 3:
        printf("Enter radius: ");
        if (scanf("%f", &a) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }
        area = 3.14f * a * a;
        printf("Area of Circle = %.2f\n", area);
        break;

    default:
        printf("Invalid Choice! Enter a choice between 1 and 3.\n");
    }

    return 0;
}
