#include<stdio.h>

int main()
{
    int number; int square;

    printf("Enter Number: ");
    scanf("%d", &number);

    square = number * number;

    printf("Square Of Number = %d\n",square);
    
    return 0;
}