#include<stdio.h>

int main()
{
    int a,b,choice;

    printf("Enter Two Number: \n");
    printf("Enter First Number: ");
    if(scanf("%d", &a) != 1)
    {
        printf("Invalid Choice!\n");
        return 0;
    }
    printf("Enter Second Number: ");
    if(scanf("%d", &b) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Remainder\n");
    printf("Enter Your Choice: ");
    if(scanf("%d", &choice) != 1)
    {
        printf("Invalid Choice!\n");
        return 0;
    }
    switch(choice)
        {
            case 1:
            printf("Sum = %d\n",a + b);
            break;

            case 2:
            printf("Subtraction = %d\n", a- b);
            break;

            case 3:
            printf("Multiplication = %d\n", a * b);
            break;

            case 4:
            if(b != 0)
            printf("Division = %d\n", a / b);
            else
            printf("Error: Remainder by Zero!\n");
            break;

            case 5:
            printf("Remainder = %d\n", a % b);
            break;

            default:
            printf("Invalid Choice!, Enter Your Choice Betweeb 1to 5 Only.\n");
        }
    return 0;
}