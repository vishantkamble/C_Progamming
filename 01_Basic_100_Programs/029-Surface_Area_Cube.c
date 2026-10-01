#include<stdio.h>

int main()
{
    float side; float area;

    printf("Enter Side Of Cube: ");
    scanf("%f", &side);

    area = 6 * (side * side);

    printf("Surface Area Of Cube = %.2f\n",area);
    
    return 0;
}