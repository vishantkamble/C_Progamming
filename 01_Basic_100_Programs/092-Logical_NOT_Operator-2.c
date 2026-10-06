#include<stdio.h>

int main()
{
    int a; int n; int result;

    printf("Enter Value Of a & n: \n");

    printf("Enter Value Of a: ");
    scanf("%d", &a);

    printf("Enter Value Of n: ");
    scanf("%d", &n);

    result = (a < n);

    printf("Result = %d\n", result);

    printf("Result_by_!_Operaotor = %d\n", !(result));
    
    return 0;
}