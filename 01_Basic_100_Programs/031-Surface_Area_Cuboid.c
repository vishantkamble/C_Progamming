#include<stdio.h>

int main()
{
    float length; float breath; float height; float area;

    printf("Enter Length, Breath & Height: \n");

    printf("Enter Length Of Cuboid: ");
    scanf("%f", &length);

    printf("Enter Breath Of Cuboid: ");
    scanf("%f", &breath);

    printf("Enter Height Of Cuboid: ");
    scanf("%f", &height);

    area = 2 * (length * breath + breath * height + height * length);

    printf("Surface Of Cuboid = %.2f\n",area);
    
    return 0;
}