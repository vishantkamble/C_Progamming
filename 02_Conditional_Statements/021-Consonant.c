#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a Character: ");
    scanf("%c", &ch);

  if(!(ch == 'a' || ch == 'e' || ch == 'o'|| ch == 'i'||
     ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I'|| 
     ch == 'O' ||ch == 'U'));
    
    printf("%c is a Conosant\n", ch);
    
    return 0;
}