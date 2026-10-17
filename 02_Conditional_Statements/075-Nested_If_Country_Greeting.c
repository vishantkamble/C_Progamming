
#include<stdio.h>

int main()
{
    char ch;

    printf("Enter Your Country ('i' for India & 'f' for France): ");

    if(scanf(" %c", &ch) == 1)
    {
        if(ch == 'i' || ch == 'I')
        {
            printf("Namaste! Welcome to India.\n");
        }
        else
        {
            if(ch == 'f' || ch == 'F')
            {
                printf("Bonjour! Welcome to France.\n");
            }
            else
            {
                printf("Invalid Choice! Please Enter 'i' or 'f'.\n");
            }
        }
    }
    else
    {
        printf("Invalid Input!\n");
    }

    return 0;
}
