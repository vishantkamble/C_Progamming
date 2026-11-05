#include<stdio.h>

int main()
{
    /*
    int i = 1;
    int j;

    while(i <= 5)
        {
            j = 1;
            while(j <= 5 - i)
                {
                    printf(" ");
                    j++;
                }
            j = 1;
            while(j <= i)
                {
                    printf("*");
                    j++;
                }
            printf("\n");
            i++;
        }
    */
    int  i = 5; int j;

    while(i >= 1)
        {
            j = 1;
            while(j <= 5 - i)
                {
                    printf(" ");
                    j++;
                }
            j = 1;
            while(j <= i)
                {
                    printf("*");
                    j++;
                }
            printf("\n");
            i--;
        }
    return 0;
}