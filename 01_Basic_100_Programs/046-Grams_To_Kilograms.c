#include<stdio.h>

int main()
{
    float grams; float kilograms;

    printf("Enter Weight in Grams: ");
    scanf("%f", &grams);

    kilograms = grams / 1000;

    printf("%.2f Grams is equal to %.2f Kilograms\n",grams,kilograms);
    return 0;
}