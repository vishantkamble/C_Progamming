#include<stdio.h>

int main()
{
    float distance; float speed; float time;

    printf("Enter Distance & Time: \n");

    printf("Enter Distance in Meter: ");
    scanf("%f", &distance);

    printf("Enter Speed in Meters per Second: ");
    scanf("%f", &speed);

    time = distance / speed;

    printf("Time = %.2f s\n",time);
    
    return 0;
}