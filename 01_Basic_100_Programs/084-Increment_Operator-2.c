#include<stdio.h>

int main()
{
    int a;

    printf("Enter a Number: ");
    scanf("%d", &a);

    printf("\n Before Increment = %d\n", a);

    a++;

    printf(" After Increment = %d\n", a);
    
    return 0;
}