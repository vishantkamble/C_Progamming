#include<stdio.h>

int main()
{
    int temperature;

    printf("Enter Temperature: ");
    scanf("%d", &temperature);

    if(temperature > 40)
    {
        printf("%d-c is Hot.\n");
    }
    else
    {
        printf("%d-c is not Hot.\n");
    }
    return 0;
}