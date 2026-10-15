#include<stdio.h>

int main()
{
    int marks;

    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    if(marks >= 35)
    {
        if(marks >= 75)
        {
            printf("Grade: A\n");
        }
        else if(marks >= 60)
        {
            printf("Grade: B\n");
        }
        else
        {
            printf("Pass!\n");
        }
    }
        else 
    {
        printf("Fail!\n");
    }
    return 0;
}