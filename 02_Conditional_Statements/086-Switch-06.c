#include <stdio.h>

int main()
{
    int choice;

    printf("===== FOOD MENU =====\n");
    printf("1.Pizza\n");
    printf("2.Burger\n");
    printf("3.Drink\n");
    printf("Enter Your Choice: ");
    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }
    switch (choice)
    {
    case 1:
        printf("1. Margherita — Rs.150\n");
        printf("2. Cheese Pizza — Rs.200\n");
        break;

    case 2:
        printf("1.Veg Burger — Rs.80\n");
        printf("2.Cheese Burger — Rs.120\n");
        break;

    case 3:
        printf("1.Cold Drink — Rs.40\n");
        printf("2.Juice — Rs.60\n");
        break;

    default:
        printf("Invalid Choice Enter Your Choice Between 1 to 3 Only!\n");
    }
    return 0;
}