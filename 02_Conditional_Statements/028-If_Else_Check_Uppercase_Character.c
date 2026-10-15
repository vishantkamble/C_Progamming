#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a Character: ");
    scanf("%c", &ch);

    if(!((ch >= 'a' && ch <= 'z') ||
         (ch >= '0' && ch <= '9')))
    {
        printf("%c is a Uppercase Character.\n", ch);
    }
    else
    {
        printf("%c is not Uppercase Character.\n", ch);
    }
         
    return 0;
}