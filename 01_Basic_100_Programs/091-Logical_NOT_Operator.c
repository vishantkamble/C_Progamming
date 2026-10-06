#include<stdio.h>

int main()
{
    int a = 5; int result;

    result = (a > 10);

    printf("Result = %d\n", result);

    printf("Result_by_!_Operator = %d\n", !(result));
    
    return 0;
}