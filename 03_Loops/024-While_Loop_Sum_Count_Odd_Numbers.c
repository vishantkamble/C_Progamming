#include <stdio.h>

int main()
{
    int n, count = 0, i = 1, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        printf("%d\t", i);
        count++;
        i = i + 2;
    }

    printf("\nNumber of Even Numbers = %d", count);
    printf("\nSum of Even Number = %d", sum);

    return 0;
}