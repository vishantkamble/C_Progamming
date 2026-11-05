#include<stdio.h>

int main()
{
    int i = 1, j;

    while(i <= 5)
        {
            j = 1;
            while(j <= i)
                {
                    if(j == 1 || j == i || i == 5)
                    {
                    printf("*");
                    }
                    else
                    {
                    printf(" ");
                    }
                    j++;
                }
            printf("\n");
            i++;
        }
    return 0;
}