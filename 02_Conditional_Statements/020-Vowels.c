#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a Character: ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || 
       ch == '0' || ch == 'u')
       printf("%c is a Vowel\n", ch);
       
    return 0;
}