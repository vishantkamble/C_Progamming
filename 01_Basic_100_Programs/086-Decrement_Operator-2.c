#include<stdio.h>

int main()
{
    int a;

    printf("Enter a Number: ");
    scanf("%d", &a);

    printf("\n Before Decrement = %d\n", a);

    a--;

    printf(" After Decrement = %d\n",a);

    return 0;
}