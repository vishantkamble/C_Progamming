#include<stdio.h>

int main()
{
    int a; 

    printf("Enter a Number: ");
    scanf("%d", &a);

    if(a % 2 == 0)
    printf("%d is Even Number\n",a);
    
    return 0;
}