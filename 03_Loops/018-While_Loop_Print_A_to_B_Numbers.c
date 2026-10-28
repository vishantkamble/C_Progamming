#include<stdio.h>

int main()
{
    int A, B;

    printf("Enter a Number for A: ");
    if(scanf("%d",&A) != 1)
    {
        printf("Invalid Input For A!\n");
        return 0;
    }
    printf("Enter a Number for B: ");
    if(scanf("%d",&B) != 1)
    {
        printf("Invalid Input For B!\n");
        return 0;
    }
    while(A <= B)
        {
            printf("%d\t",A);
            A++;
        }
    return 0;
}