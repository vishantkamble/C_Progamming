#include<stdio.h>

int main()
{
    int marks;

    printf("Enter a Marks: ");
    scanf("%d", &marks);

    if(marks >= 75)
    {
        printf("Congratulation! You got Distincton!\n");
    }
    else if(marks >= 60)
    {
        printf("Execellent! You got First Class!\n");
    }
    else if(marks >= 35)
    {
        printf("Welldone! You are Pass!\n");
    }
    else
    {
        printf("You are Fail. Keep Tring!\n");
    }
    return 0;
}