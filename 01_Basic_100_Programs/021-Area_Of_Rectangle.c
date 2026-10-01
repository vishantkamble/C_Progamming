#include<stdio.h>

int main()
{
    float length; float breath; float area;

    printf("Enter Length & Breath Rectangle:\n");

    printf("Enter Length Of Rectangle:");
    scanf("%f", &length);

    printf("Enter Breath Of Rectangle:");
    scanf("%f", &breath);

    area = length * breath;

    printf("Area Of Rectangle = %.2f\n",area);

    return 0;
}