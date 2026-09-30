#include<stdio.h>

int main()
{
    int number; int cube;

    printf("Enter Number:");
    scanf("%d", &number);

    cube = number * number * number;

    printf("Cube Of Number = %d\n",cube);
    
    return 0;
}