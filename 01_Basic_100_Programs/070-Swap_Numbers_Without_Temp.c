#include<stdio.h>

int main()
{
    int num1; int num2;

    printf("Enter Two Number: \n");

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("\n Before Swapping num1 = %d\n",num1);
    printf(" Before Swapping num2 = %d\n",num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\n After Swapping num1 = %d\n",num1);
    printf(" After Swapping num2 = %d\n",num2);
    
    return 0;
}