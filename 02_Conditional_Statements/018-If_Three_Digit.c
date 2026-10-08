#include<stdio.h>

int main()
{
    int a;

    printf("Enter a Number: ");
    scanf("%d", &a);

    if(a >= 100 && a <= 999)
    printf("%d is Three Digit Number\n", a);
    
    return 0;
}