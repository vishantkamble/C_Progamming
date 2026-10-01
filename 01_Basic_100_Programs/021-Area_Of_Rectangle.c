#include<stdio.h>

int main()
{
    float length; float breath; float area;

    printf("Enter Length & Breath:\n");

    printf("Enter Length:");
    scanf("%f", &length);

    printf("Enter Breath:");
    scanf("%f", &breath);

    area = length * breath;

    printf("Area Of Rectangle = %.2f\n",area);

    return 0;
}