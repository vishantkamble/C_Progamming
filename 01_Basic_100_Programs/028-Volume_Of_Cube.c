#include<stdio.h>

int main()
{
    float side; float volume;

    printf("Enter Side Of Cube: ");
    scanf("%f", &side);

    volume = side * side * side;

    printf("Volume Of Cube = %.2f\n",volume);
    
    return 0;
}