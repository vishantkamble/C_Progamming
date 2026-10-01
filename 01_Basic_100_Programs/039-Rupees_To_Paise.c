#include<stdio.h>

int main()
{
    float rupees; float paise;

    printf("Enter Rupees: ");
    scanf("%f", &rupees);

    paise = rupees * 100;

    printf("Rupees_To_Paise = %.2f\n",paise);
    
    return 0;
}