#include<stdio.h>

int main()
{
    int temperature;

    printf("Enter a Temperature: ");
    scanf("%d", &temperature);

    if(temperature < 80)
    {
        printf("Patient Warning: Normal\n");
    }
    else if(temperature < 100)
    {
        printf("Patient Status: Warning\n");
    }
    else
    {
        printf("Patient Status: Critical\n");
    }
    return 0;
}