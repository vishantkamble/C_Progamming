#include<stdio.h>

int main()
{
    int choice; float sum, sub, mul, div, a, b;
    
    printf("Enter Two Number: \n");
    scanf("%f%f",&a,&b);
    
    printf("Enter Your Choice: ");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter Your Choice: ");
    if(scanf("%d",&choice) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }
    switch(choice)
        {
            case 1:
                sum = a + b;
            printf("Addition = %.2f\n", sum);
            break;

            case 2:
            sub = a - b;
            printf("Subtraction = %.2f\n",sub);
            break;

            case 4:
            mul = a * b;
            printf("Multiplication = %.2f\n",mul);
            break;

            case 5:
            div = a /b;
            printf("Division = %.2f\n",div);
            break;

            default:
            printf("Invalid Choice Input!\n");
        }
    return 0;
}