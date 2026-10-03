#include<stdio.h>

int main()
{
    float diameter; float radius;

    printf("Enter Radius Of Cirlce: ");
    scanf("%f", &radius);

    diameter = 2 * radius;

    printf("Diameter = %.2f m\n",diameter);
    
    return 0;
}