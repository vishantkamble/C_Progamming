#include<stdio.h>

int main()
{
    float number; float Triple;

    printf("Enter Number:");
    scanf("%f", &number);

    Triple = number * 3;

    printf("Triple Of Number = %.2f\n",Triple);
    
    return 0;
}