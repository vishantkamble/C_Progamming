#include<stdio.h>

int main()
{
    int a;

    printf("Enter a Number: ");
    scanf("%d", &a);

    if(a % 7 == 0)
    printf("%d is Multiple of 7\n", a);
    
    return 0;
}