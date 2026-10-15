#include<stdio.h>

int main()
{
    float base; float height; float area;

    printf("Enter Base & Height Of Triangle:\n");

    printf("Enter Base Of Triangle: ");
    scanf("%f", &base);

    printf("Enter Height Of Triangle: ");
    scanf("%f", &height);

    area = 0.5 * (base * height);

    printf("Area Of Triangle = %.2f\n",area);

    return 0;
}