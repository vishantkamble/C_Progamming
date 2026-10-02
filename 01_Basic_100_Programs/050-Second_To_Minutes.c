#include<stdio.h>

int main()
{
    float second; float minutes;

    printf("Enter Time in Second: ");
    scanf("%f", &second);

    minutes = second / 60;

    printf("%.2f Second is equal to %.2f Minutes\n",second,minutes);
    
    return 0;
}