#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a Character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    printf("%c is Uppercase Character\n", ch);

    return 0;
}