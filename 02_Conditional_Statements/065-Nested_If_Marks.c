#include<stdio.h>

int main()
{
    int marks;

    printf("Enter a Number: ");
    scanf("%d", &marks);

    if(marks >= 100 || marks < 0)
            {
                printf("Invalid Input!\n");
                return 0;
            }
    if(marks >= 35)
    {
        if(marks >= 75)
        {
            printf("Distinction!\n");
        }
        else if(marks >= 60)
        {
            printf("First Class\n");
        }
            
        else
        {
            printf("Pass!\n");
        }
    }
    else 
    {
        printf("FAIl!\n");
    }
    return 0;
}