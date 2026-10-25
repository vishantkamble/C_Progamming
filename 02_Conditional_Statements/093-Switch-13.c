#include <stdio.h>

int main()
{
    int choice, select;
    int marks1, marks2;

    printf("===== Student Menu =====\n");
    printf("1. Student Result\n");
    printf("2. Student Grade\n");

    printf("Enter Your Choice: ");
    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }

    switch (choice)
    {
    case 1:
        printf("\n===== Student Result =====\n");
        printf("1. Total Marks\n");
        printf("2. Average Marks\n");

        printf("Enter Your Choice: ");
        if (scanf("%d", &select) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        printf("Enter Marks of Two Subjects: ");
        if (scanf("%d %d", &marks1, &marks2) != 2)
        {
            printf("Invalid Marks!\n");
            return 0;
        }

        switch (select)
        {
        case 1:
            printf("Total Marks = %d\n", marks1 + marks2);
            break;

        case 2:
            printf("Average Marks = %.2f\n",
                   (marks1 + marks2) / 2.0);
            break;

        default:
            printf("Invalid Selection!\n");
        }
        break;

    case 2:
        printf("\n===== Student Grade =====\n");
        printf("1. Pass\n");
        printf("2. Fail\n");

        printf("Enter Your Choice: ");
        if (scanf("%d", &select) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        switch (select)
        {
        case 1:
            printf("Student Passed!\n");
            break;

        case 2:
            printf("Student Failed!\n");
            break;

        default:
            printf("Invalid Selection!\n");
        }
        break;

    default:
        printf("Invalid Choice!\n");
    }

    return 0;
}