#include<stdio.h>

int main()
{
    float diameter; float radius;

    printf("Enter Diameter Of Circle: ");
    scanf("%f", &diameter);

    radius = diameter / 2;

    printf("Radius = %.2f m\n",radius);
    
    return 0;
}