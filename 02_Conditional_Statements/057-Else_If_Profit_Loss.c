#include<stdio.h>

int main()
{
    float sp, cp;
    /*
    sp - selling price
    cp - cost price
    */

    printf("Enter Selling Price & Cost Price: \n");
    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    printf("Enter Cost Price: ");
    scanf("%f",&cp);

    if(sp <= 0 || cp <= 0)
    {
        printf("Invalid Price!\n");
    }
    else if(sp > cp)
    {
        printf("Profit = %.2f rs\n", sp - cp);
    }
    else if(cp > sp)
    {
        printf("Loss = %.2f rs\n", cp - sp);
    }
    else
    {
        printf("No Profit, No Loss!\n");
    }
    return 0;
}