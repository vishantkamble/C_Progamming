#include<stdio.h>

int main()
{
    float meters; float centimeters;

    printf("Enter Lenght in Meters: ");
    scanf("%f", &meters);

    centimeters = meters * 100;

    printf("Meters_To_Centimeters = %.2f\n",centimeters);
    
    return 0;
}