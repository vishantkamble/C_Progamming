#include<stdio.h>

int main()
{
    float kilograms; float grams; 

    printf("Enter Weight in Kilograms: ");
    scanf("%f", &kilograms);

    grams = kilograms * 1000;

    printf("%.2f Kilograms is equal %.2f grams\n",kilograms,grams);
    
    return 0;
}