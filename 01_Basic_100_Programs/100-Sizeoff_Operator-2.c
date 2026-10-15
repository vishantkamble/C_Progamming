#include<stdio.h>

int main()
{
    int a; float b; char c;

    printf("Enter an interger: ");
    scanf("%d", &a);

    printf("Enter a float: ");
    scanf("%f", &b);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("\n Size_Of_int = %zu bytes\n", sizeof(a));
    printf(" Size_Of_float = %zu bytes\n", sizeof(b));
    printf(" Size_Of_char = %zu bytes\n", sizeof(c));
    
    return 0;
}