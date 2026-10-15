#include<stdio.h>

int main()
{
    float centimeters; float meters;

    printf("Enter Lenght in Centimeters: ");
    scanf("%f", &centimeters);

    meters = centimeters / 100;

    printf("Centimeters_To_Meters = %.2f\n",meters);
    
    return 0;
}