#include<stdio.h>

int main()
{
    float mililiters; float liters;

    printf("Enter Volume in Mililiters: ");
    scanf("%f", &mililiters);

    liters = mililiters / 1000;

    printf("%.2f Mililiters is equal to %.2f Liters\n",mililiters,liters);
    
    return 0;
}