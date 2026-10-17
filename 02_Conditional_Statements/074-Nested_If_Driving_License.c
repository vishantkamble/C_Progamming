#include<stdio.h>

int main()
{
    int age; int marks;

    printf("Enter Your Age: ");
    if((scanf("%d", &age)) == 1)
    {
        if(age >= 18)
        {
            printf("Enter Your Marks: ");
            if((scanf("%d", &marks)) == 1)
            {
                if(marks >= 60)
                {
                    printf("Congratulations! You Are Eligible for a Driving License.\n");
                }
                else
                {
                    printf("Sorry! You Are Not Eligible for a Driving License.\n");
                    printf("Because You Scored %d Marks.\n", marks);
                }
            }
            else
            {
                printf("Invalid Marks Input!\n");
            }
        }
        else
        {
            printf("Sorry! You Are Not Eligible for a Driving License.\n");
            printf("You Must Be at Least 18 Years Old.\n");
        }
    }
    else
    {
        printf("Invalid Age Input!\n");
    }

    return 0;
}