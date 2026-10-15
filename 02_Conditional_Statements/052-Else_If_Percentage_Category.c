#include<stdio.h>

int main()
{
    int percentage;

    printf("Enter Your Percentage: ");
    scanf("%d", &percentage);

    if(percentage < 0 || percentage > 100)
    {
        printf("Invalid Percentage!\n");
    }
    else if(percentage >= 75)
    {
        printf("Distinction");
    }
    else if(percentage >= 60)
    {
            printf("First Class\n");
    }
    else if(percentage >= 45)
    {
        printf("Second Class\n");
    }
    else if(percentage >= 35)
    {
        printf("Pass Class\n");
    }
    else
    {
        printf("Fail!\n");
    }
    return 0;
}