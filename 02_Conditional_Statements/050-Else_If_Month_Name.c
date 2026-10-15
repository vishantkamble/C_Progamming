#include<stdio.h>

int main()
{
    int month;

    printf("Enter Month Number(1-12): ");
    scanf("%d", &month);

    if(month == 1)
    {
        printf("1.January\n");
    }
    else if(month == 2)
    {
        printf("2.February\n");
    }
    else if(month == 3)
    {
        printf("3.March\n");
    }
    else if(month == 4)
    {
        printf("4.April\n");
    }
    else if(month == 5)
    {
        printf("5.May\n");
    }
    else if(month == 6)
    {
        printf("6.June\n");
    }
    else if(month == 7)
    {
        printf("7.July\n");
    }
    else if(month == 8)
    {
        printf("8.August\n");
    }
    else if(month == 9)
    {
        printf("9.September\n");
    }
    else if(month == 10)
    {
        printf("10.Octomber\n");
    }
    else if(month == 11)
    {
        printf("11.November\n");
    }
    else if(month == 12)
    {
        printf("12.December\n");
    }
    else 
    {
        printf("Invalid!\n");
    }
    return 0;
}