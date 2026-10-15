#include<stdio.h>
int main()
{
    float sp, cp, percentage;

    printf("Enter Selling Price & Celling Price: \n");
    printf("Enter a Selling Price: ");
    scanf("%f", &sp);
    printf("Enter a Cost Price: ");
    scanf("%f", &cp);

    float profit = sp - cp; float loss = cp - sp;
    float profitPercentage = (profit / cp) * 100;
    float lossPercentage = (loss / cp) * 100;

    if(sp <= 0 && cp <= 0)
    {
        printf("Invalid Price!\n");
    }
    else if(sp > cp)
    {
        printf("Profit = %.2frs.\n",profit);
        printf("Percentage = %.2f\n",profitPercentage);
    }
    else if(cp > sp)
    {
        printf("Loss = %.2frs.\n",loss);
        printf("percentage = .%.2f\n",lossPercentage);
    }
    else
    {
        printf("Not Profit, Not Loss!\n");
    }
    return 0;
}