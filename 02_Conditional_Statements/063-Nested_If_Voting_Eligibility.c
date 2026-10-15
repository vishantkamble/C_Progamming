#include<stdio.h>

int main()
{
    int age, citizen;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("Are you a Citizen? (Yes = 1, N0 = 0): ");
        scanf("%d", &citizen);


        if(citizen == 1)
        {
            printf("Are You Eligible to Vote!\n");
        }
        else
        {
            printf("You are not Eligible to Vote!\n");
        }
    }
    else
    {
        printf("You are not Eligible Vote!\n");
    }
    return 0;
}