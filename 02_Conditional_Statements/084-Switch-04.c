#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a Character: ");
    if (scanf("%c", &ch) != 1)
    {
        printf("Invalid Choice!\n");
        return 0;
    }
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a Vowel.\n", ch);
        break;

    default:
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            printf("%c is a Consonant\n", ch);
        }
        else
        {
            printf("Inalid Input! Enter an Alphabet.\n");
        }
    }
    return 0;
}