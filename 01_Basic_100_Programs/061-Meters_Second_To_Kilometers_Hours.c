#include<stdio.h>

int main()
{
    float mps; float kmph;

    printf("Enter Speed in mps: ");
    scanf("%f", &mps);

    kmph = (18.0 / 5.0) * mps;

    printf("%.2f m/s is equal to %.2f km/h\n",mps,kmph);
    
    return 0;
}