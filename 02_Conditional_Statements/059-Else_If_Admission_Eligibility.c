#include<stdio.h>

int main()
{
    int age, percentage;

    printf("Enter Your Age & Percentage: \n");
    printf("Enter Your Age: ");
    scanf("%d", &age);
    printf("Enter Your Percentage: ");
    scanf("%d", &percentage);

    if(age < 0 || percentage < 0 || percentage > 100)
    {
        printf("Invalid Input!\n");
    }
    else if(age > 18)
    {
        printf("Not Eligile: Your age is %d\n",age);
    }
    else if(percentage < 60)
    {
        printf("Not Eligible: Your Percentage is %d\n", percentage);
    }
    else
    {
        printf("Congratulation! You are Eligile for Admission.\n");
    }
    return 0;
}