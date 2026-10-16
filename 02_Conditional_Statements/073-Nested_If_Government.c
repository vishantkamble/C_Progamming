#include<stdio.h>

int main()
{
    int age, marks;

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
                    printf("Congratulations! You Are Eligible for the Government Exam.\n");
                }
                else
                {
                    printf("Your Marks Are Insufficient!\n");
                }
            }
            else
            {
                printf("Invalid Input! Please Enter Valid Marks.\n");
            }
        }
        else
        {
            printf("Your Age Is Insufficient!\n");
        }
    }
    else
    {
        printf("Invalid Input! Please Enter a Valid Age.\n");
    }

    return 0;
}