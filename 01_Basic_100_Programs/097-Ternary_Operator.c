#include<stdio.h>

int main()
{
    int a = 10; int b = 20; int result;

    result = (a > b) ? a : b;

    printf("Result = %d\n", result);
    
    return 0;
}