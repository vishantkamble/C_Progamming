#include<stdio.h>

int main()
{
    int age;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You can Drive!\n", age);
    }
    else
    {
        printf("You Cannot Drive!\n",age);
    }
    return 0;
}