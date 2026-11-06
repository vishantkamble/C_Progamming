#include<stdio.h>

int main()
{
    int i = 1, j;

    while(i <= 5)
        {
            j = 1;
            while(j <= i)
                {
                    printf("*");
                    j++;
                }
            int space = 1;
            while(space <= 2 * (5 - i))
                {
                    printf(" ");
                    space++;
                }
            j = 1;
            while(j <=  i )
                {
                    printf("*");
                    j++;
                }
            printf("\n");
            i++;
        }
    i = 4;
    while(i >= 1)
        {
            j = 1;
            while(j <= i)
                {
                    printf("*");
                    j++;
                }
            int space = 1;
            while(space <= 2 * (5 - i))
                {
                    printf(" ");
                    space++;
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