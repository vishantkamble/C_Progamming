#include<stdio.h>

int main()
{
    int age;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    if(age <= 35)
    {
        printf("Young!\n");
    }
    else
    {
        printf("Old!\n");
    }
    return 0;
}