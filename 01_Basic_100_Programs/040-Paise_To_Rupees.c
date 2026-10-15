#include<stdio.h>

int main()
{
    float paise; float rupees;

    printf("Enter Paise: ");
    scanf("%f", &paise);

    rupees = paise / 100;

    printf("Paise_To_Rupees = %.2f\n",rupees);
    
    return 0;
}