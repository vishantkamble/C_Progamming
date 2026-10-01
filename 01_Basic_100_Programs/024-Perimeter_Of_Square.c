#include<stdio.h>

int main()
{
    float side; float perimeter;

    printf("Enter Side of Square: ");
    scanf("%f", &side);

    perimeter = 4 * side;

    printf("Perimeter Of Square = %.2f\n",perimeter);
    
    return 0;
}