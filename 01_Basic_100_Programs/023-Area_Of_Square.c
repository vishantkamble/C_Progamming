#include<stdio.h>

int main()
{
    float side; float area;

    printf("Enter Side: ");
    scanf("%f", &side);

    area = side * side;

    printf("Area Of Square = %.2f\n",area);
    
    return 0;
}