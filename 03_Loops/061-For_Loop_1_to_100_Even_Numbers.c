#include<stdio.h>

int main()
{
    for(int i = 1; i <= 100; i++)
        {
            if(i % 2 == 0)
            {
                printf("%d is an Even Number.\n",i);
            }
        }
    return 0;
}