#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter Value of a,b,&c: \n");
    
    printf("Enter a Value of a: ");
    scanf("%d",&a);
    
    printf("Enter a Valur of b: ");
    scanf("%d", &b);
    
    printf("Enter a value of c: ");
    scanf("%d", &c);

    if(a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid Side!\n");
    }
    else if(a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Triangle are not Possible!\n");
    }
    else if(a == b && b == c)
    {
        printf("Equilateral Triangle.\n");
    }
    else if(a == b || b == c || a == c)
    {
        printf("Isoscelus Triangle.\n");
    }
    else
    {
        printf("Scalene Triangle");
    }
    return 0;
}