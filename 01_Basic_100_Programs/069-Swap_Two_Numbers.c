#include<stdio.h>

int main()
{
    float num1; float num2; float temp;

    printf("Enter Two Number: \n");

    printf("Enter First Number: ");
    scanf("%f", &num1);
    printf("Before Swapping = %.2f\n",num1);

    printf("Enter Second Number: ");
    scanf("%f", &num2);
    
    printf("\n Before Swapping num1 = %.2f\n",num1);
    printf(" Before Swapping num2 = %.2f\n",num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n After Swapping num1 = %.2f\n",num1);
    printf(" After Swapping num2 = %.2f\n",num2);
    
    return 0;
}