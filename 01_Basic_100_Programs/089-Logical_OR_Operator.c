#include<stdio.h>

int main()
{
    int a = 5; int b = 6; int result;

    result = a < b || b < a;

    printf("Result = %d\n", result);
    
    return 0;
}