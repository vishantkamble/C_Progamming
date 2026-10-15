#include<stdio.h>

int main()
{
     int a; int b; int c;

    printf("Enter Two Numbers: \n");
    
    printf("Enter First Number: ");
    scanf("%d", &a);
    
    printf("Enter Seocnd Number: ");
    scanf("%d", &b);
    
    printf("Enter Third Number: ");
    scanf("%d", &c);

    if( a == b && b == c)
    {
        a = a * b * c;
        printf("%d is Cube of %d.\n",a, b);
    }
    else
    {
        a = a * b * c;
        printf("%d is Not Cube of %d.\n", a, b);
    }
    return 0;
}