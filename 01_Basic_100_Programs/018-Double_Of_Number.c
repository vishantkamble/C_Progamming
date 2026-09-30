#include<stdio.h>

int main()
{
    float number; float Double;

    printf("Enter Number:");
    scanf("%f", &number);

    Double = number * 2;

    printf("Double Of Number = %.2f\n",Double);
    
    return 0;
}