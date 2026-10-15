#include<stdio.h>

int main(){

    int n;

    printf("Enter a Number: ");

    if(scanf("%d",&n) != 1)
    {
        printf("Invalid Number!\n");
        return 0;
    }
    if(n >= 0)
    {
        if(n == 0)
        {
            printf("Number is Zero!\n");
        }
        else
        {
            printf("%d is a Positive Number.\n",n);
        }
    }
        else
    {
        printf("%d is a Negative Number.\n",n);
    }
    return 0;
}