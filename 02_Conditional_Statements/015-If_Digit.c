#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a Character: ");
    scanf("%c", &ch);

    if(ch >= '0' && ch <= '9')
    printf("%c is a Digit\n", ch);
    
    return 0;
}