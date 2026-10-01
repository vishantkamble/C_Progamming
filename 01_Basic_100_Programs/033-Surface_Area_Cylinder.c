#include<stdio.h>

int main()
{
    float radius; float height; float area;

    printf("Enter Radius & Heigth Of Cylinder:\n");

    printf("Enter Radius Of Cylinder: ");
    scanf("%f", &radius);

    printf("Enter Height Of Cylinder: ");
    scanf("%f", &height);

    area = 2 * 3.14 * radius * (radius + height);

    printf("Surface Area Of Cylinder = %.2f\n",area);
    
    return 0;
}