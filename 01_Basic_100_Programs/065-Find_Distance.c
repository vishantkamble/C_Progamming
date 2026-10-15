#include<stdio.h>

int main()
{
    float speed; float time; float distance;

    printf("Enter Speed & Time: \n");

    printf("Enter Speed in Meters per Second: ");
    scanf("%f", &speed);

    printf("Enter Time in Second: ");
    scanf("%f", &time);

    distance = speed * time;

    printf("Distance = %.2f m \n",distance);
    
    return 0;
}