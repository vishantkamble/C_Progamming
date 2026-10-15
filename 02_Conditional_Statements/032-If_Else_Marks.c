#include<stdio.h>

int main()
{
    int marks; int passingMarks = 35; int totalMarks = 100;

    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    if(marks >= passingMarks )
    {
        printf("You got %d marks. You have Passed!\n",marks);
    }
    else
    {
        printf("You got %d marks. You have Failed!\n",marks);
    }
    return 0;
}