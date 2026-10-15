#include<stdio.h>

int main()
{
    float length; float breath; float height; float volume;

    printf("Enter Length, Breath & Height Of Cuboid:\n");

    printf("Enter Length Of Cuboid: ");
    scanf("%f", &length);

    printf("Enter Breath Of Cuboid: ");
    scanf("%f", &breath);

    printf("Enter Height Of Cuboid: ");
    scanf("%f", &height);

    volume = length * breath *height;
    
    printf("Volume Of Cuboid = %.2f\n",volume);
    
    return 0;
}