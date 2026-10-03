#include<stdio.h>

int main()
{
    float distance; float time; float speed;

    printf("Enter Distance & Time: \n");

    printf("Enter Distance in Meters: ");
    scanf("%f", &distance);

    printf("Enter Time in Second: ");
    scanf("%f", &time);

    speed = distance / time;

    printf("Speed = %.2f m/s\n",speed);

    return 0;
}