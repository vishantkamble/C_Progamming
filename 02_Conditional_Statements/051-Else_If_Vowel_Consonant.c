#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a Character: ");
    scanf("%c", &ch);

    if(ch == 'A' || ch == 'E' || ch == 'I'||
       ch == 'O' || ch == 'U' || ch == 'a'||
       ch == 'e' || ch == 'i' || ch == 'o'||
        ch == 'u')
    {
        printf("%c is a Vowel\n", ch);
    }
    else if(ch >= 'a' && ch <= 'z' ||
            ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a Consonat\n", ch);
    }
    else
    {
        printf("Invalid Character!\n");
    }
    return 0;
}