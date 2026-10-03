#include<stdio.h>

int main()
{
    float liters; float mililiters;

    printf("Enter Volume in Liters: ");
    scanf("%f", &liters);

    mililiters = liters * 1000;

    printf("%.2f Liters is equal to %.2f Mililiters\n",liters,mililiters);

    return 0;
}