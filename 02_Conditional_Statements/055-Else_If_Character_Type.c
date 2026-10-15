#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a Character: ");
    scanf("%d", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c is Uppercase Character.\n",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is Lowercase Character.\n", ch);
    }
    else if(!((ch >= 'A' && ch <= 'Z') || 
              (ch >= 'a' && ch <= 'z')))
    {
        printf("%c is Special Character.\n", ch);
    }
    else
    {
        printf("This is a Number!\n");
    }
    return 0;
}