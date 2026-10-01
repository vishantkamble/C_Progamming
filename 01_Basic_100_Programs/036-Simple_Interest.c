#include<stdio.h>

int main()
{
    float principal; float rate; float time; float interest;

    printf("Enter Principal, Rate & Time: \n");

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n",interest);
    
    return 0;
}