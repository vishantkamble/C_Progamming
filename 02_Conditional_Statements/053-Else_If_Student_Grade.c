#include<stdio.h>

int main()
{
    int marks;

    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    if(marks > 100)
    {
        printf("Invalid Marks!\n");
    }
    else if(marks >= 90)
    {
        printf("Grade: A\n");
    }
    else if(marks >= 89)
    {
        printf("Grade: B\n");
    }
    else if(marks >= 74)
    {
        printf("Grade: C\n");
    }
    else if(marks >= 59)
    {
        printf("Grade: D\n");
    }
      else if(marks >= 35)
      {
          printf("Grade: D\n");
      }
    else
      {
          printf("FAIl!\n");
      }
    return 0;
}