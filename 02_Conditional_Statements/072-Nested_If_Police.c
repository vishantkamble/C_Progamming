#include<stdio.h>

int main()
{
    int age; int height;

    printf("Enter Your Age: ");
    if((scanf("%d", &age)) == 1)
    {
        if(age >= 18)
        {
            printf("Enter Your Height: ");
            if((scanf("%d", &height)) == 1)
            {
                if(height >= 165)
                {
                    printf("Congratulations! You Are Eligible for Police Recruitment.\n");
                }
                else
                {
                    printf("Your Height Is Not Enough!\n");
                }
            }
            else
            {
                printf("Invalid Input! Please Enter a Valid Height.\n");
            }
        }
        else
        {
            printf("Your Age Is Not Enough!\n");
        }
    }
    else
    {
        printf("Invalid Input! Please Enter a Valid Age.\n");
    }
    return 0;
}