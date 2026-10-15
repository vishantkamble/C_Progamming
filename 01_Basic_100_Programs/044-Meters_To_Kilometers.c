#include<stdio.h>

int main()
{
    float meters; float kilometers;

    printf("Enter Distance in Meters: ");
    scanf("%f", &meters);

    kilometers = meters / 1000;

    printf("Meters_To_Kilometers = %.2f\n",kilometers);
    
    return 0;
}