#include<stdio.h>

int main()
{
    int a = 10; int b = 5; int result;

    result = a > b && b < a;

    printf("Result = %d\n", result);
    return 0;
}