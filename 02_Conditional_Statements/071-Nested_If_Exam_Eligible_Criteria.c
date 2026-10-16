
#include<stdio.h>

int main()
{
 int age; int marks;

    printf("Please Enter Your Age: ");
    if((scanf("%d", &age)) == 1)
    {
        if(age >= 18)
        {
        printf("Please Enter Your Marks: ");

        if((scanf("%d", &marks)) == 1)
        {
            if(marks >= 50)
            {
                printf("Congratulations! You Are Eligible for the Exam!\n");
            }
            else
            {
                printf("Sorry! You Are Not Eligible for the Exam.\n");
                printf("Reason: You Scored Only %d Marks.\n", marks);
            }
        }
            else
        {
            printf("Invalid Input! Please Enter Valid Marks.\n");
        }
        }
        else
        {
            printf("Sorry! You Are Not Eligible for the Exam.\n");
            printf("Reason: You Must Be at Least 18 Years Old. Your Age Is %d.\n", age);
        }
    }
    else
    {
        printf("Invalid Input! Please Enter a Valid Age.\n");
    }
    return 0;
}
