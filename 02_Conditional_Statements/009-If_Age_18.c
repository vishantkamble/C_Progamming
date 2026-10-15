#include<stdio.h>

int main()
{
    int age;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    if(age >= 18)
    printf("Age is 18 or Above\n");
    
    return 0;
}