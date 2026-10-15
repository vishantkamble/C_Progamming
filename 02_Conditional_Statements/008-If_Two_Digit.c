#include<stdio.h>

int main()
{
    int a;

    printf("Enter a Number: ");
    scanf("%d", &a);

    if(a >= 10 && a <= 99)
    printf("%d is Two Digit Number\n",a);
    
    return 0;
}