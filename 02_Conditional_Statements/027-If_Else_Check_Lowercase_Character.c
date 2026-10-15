#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a Character: ");
    scanf("%c", &ch);

    if(!((ch >= 'A' && ch <= 'Z') ||
         (ch >= '0' && ch <= '9')))
    {
        printf("%c is a Lowercase Character.\n", ch);
    }
    else
    {
        printf("%c is not Lowercase Character.\n", ch);
    }
         
    return 0;
}