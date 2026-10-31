#include<stdio.h>

int main()
{
    int a, b, x, y, r, gcd, lcm;

    printf("Enter Two Numbers: \n");
    printf("Enter First Number: ");
    scanf("%d",&a);
    
    printf("Enter Second Number: ");
    scanf("%d",&b);

    x = a;
    y = b;

    while( y != 0)
        {
            r = x % y;
            x = y;
            y = r;
        }
    gcd = x;
    lcm = (a * b) / gcd;
    printf("GCD = %d\n",x);
    printf("LCM = %d\n",lcm);
    
    return 0;
}