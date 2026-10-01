#include<stdio.h>

int main()
{
    float principal; float rate; float time; float interest; float total_amount;

    printf("Enter Principal, Rate & Time: \n");

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n",interest);

    total_amount = principal + interest;
    printf("Total Amount = %.2f\n",total_amount);
    
    return 0;
}