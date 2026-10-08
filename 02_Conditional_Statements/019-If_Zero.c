#include<stdio.h>

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    if(n != 0)
    {
    printf("You can entered only Zero!\n");
    
    return 0;
    }
    printf("You entered Zero!\n");

    return 0;
}