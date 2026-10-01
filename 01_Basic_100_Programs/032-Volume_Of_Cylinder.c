#include<stdio.h>

int main()
{
    float radius; float height; float volume;

    printf("Enter Radius & Height Of Cylinder:\n");

    printf("Enter Radius Of Cylinder: ");
    scanf("%f", &radius);

    printf("Enter Height Of Cylinder: ");
    scanf("%f", &height);

    volume = 3.14 * radius * radius * height;

    printf("Volume Of Cylinder = %.2f\n",volume);

    
    return 0;
}