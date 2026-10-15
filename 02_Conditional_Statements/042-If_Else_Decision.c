#include<stdio.h>

int main()
{
    int age;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You can make your own Decision!\n");
    }
    else
    {
        printf("Take guidance from your Parents!\n");
    }
    return 0;
}