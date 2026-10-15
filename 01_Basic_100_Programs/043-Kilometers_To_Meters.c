#include<stdio.h>

int main()
{
    float kilometers; float meters; 

    printf("Enter Distance in Kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;

    printf("Kilometers_To_Meters = %.2f\n",meters);
    
    return 0;
}