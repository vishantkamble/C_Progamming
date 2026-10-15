#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a Number: ");
    scanf("%c", &ch);

    if(((ch >= 'a' || ch >= 'A') && (ch <= 'z' || ch >= 'Z')))
    printf("%c is a Character\n", ch);
    
    return 0;
}