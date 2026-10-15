#include<stdio.h>

int main()
{
    int attendance;

    printf("Enter Your Attendance: ");
    scanf("%d", &attendance);

    if(attendance >= 75)
    {
        printf("You are eligible for Examination.\n");
    }
    else
    {
        printf("You are not eligible for Examination.\n");
    }
    return 0;
}