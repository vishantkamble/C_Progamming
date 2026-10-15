#include<stdio.h>

int main()
{
    float radius; float C;

    printf("Enter Radius Of Circle: ");
    scanf("%f", &radius);

    C = 2 * 3.14 * radius;

    printf("Circumference Of Circle = %.2f\n",C);
    
    return 0;
}