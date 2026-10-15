#include<stdio.h>

int main()
{
    float length; float breath; float perimeter;

    printf("Enter Length & Breath:\n");

    printf("Enter Length:");
    scanf("%f", &length);

    printf("Enter Breath:");
    scanf("%f", &breath);

    perimeter = 2 * (length + breath);

    printf("Perimter = %.2f\n",perimeter);

    return 0;
}