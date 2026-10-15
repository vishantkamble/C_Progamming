#include<stdio.h>

int main()
{
    float kmph; float mps;

    printf("Enter Speed in kmph: ");
    scanf("%f", &kmph);

    mps = kmph * 5.0 / 18.0;

    printf("%.2f Km/h is equal to %.2f m/s\n",kmph,mps);

    return 0;
}