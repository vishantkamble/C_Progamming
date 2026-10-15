#include<stdio.h>

int main()
{
    float radius; float area;

    printf("Enter Radius Of Circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area Of Circle = %.2f\n",area);
    
    return 0;
}