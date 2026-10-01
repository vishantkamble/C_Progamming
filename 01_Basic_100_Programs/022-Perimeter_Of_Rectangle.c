#include<stdio.h>

int main()
{
    float length; float breath; float perimeter;

    printf("Enter Length & Breath Of Rectangle:\n");

    printf("Enter Length Of Rectangle:");
    scanf("%f", &length);

    printf("Enter Breath Of Rectangle:");
    scanf("%f", &breath);

    perimeter = 2 * (length + breath);

    printf("Perimter = %.2f\n",perimeter);

    return 0;
}