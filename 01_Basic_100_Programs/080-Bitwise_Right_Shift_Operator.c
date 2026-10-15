#include<stdio.h>

int main()
{
    int a; int n;

    printf("Enter Value of a & n: \n");

    printf("Enter Value of a: ");
    scanf("%d", &a);

    printf("Enter Value of b: ");
    scanf("%d", &n);

    printf("a >> n = %d\n", a >> n);
    
    return 0;
}