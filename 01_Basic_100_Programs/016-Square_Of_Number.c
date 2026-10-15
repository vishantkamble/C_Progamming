#include<stdio.h>

int main()
{
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    number = number * number;

    printf("Square Of Number = %d\n",number);
    
    return 0;
}