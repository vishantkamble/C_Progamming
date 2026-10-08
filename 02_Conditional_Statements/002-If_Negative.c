#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    if(n < 0)
    printf("Number is Negative\n");
    
    return 0;
}