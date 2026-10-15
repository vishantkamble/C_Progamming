#include<stdio.h>

int main()
{
    float radius; float volume;

    printf("Enter Radius Of Circle: ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * 3.14 * radius * radius *radius;

    printf("Volume Of Circle = %.2f\n",volume);
    
    return 0;
}