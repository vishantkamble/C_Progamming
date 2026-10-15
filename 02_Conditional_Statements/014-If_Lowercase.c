#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a Character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')
    printf("%c is Lowercase Character\n", ch);
    
    return 0;
}