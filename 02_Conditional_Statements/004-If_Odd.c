#include<stdio.h>

int main()
{

    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    if(n % 2 != 0)
    printf("%d is  an Odd Number\n",n);
    
    return 0;
}