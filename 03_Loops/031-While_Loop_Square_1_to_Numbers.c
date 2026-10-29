#include <stdio.h>

int main()
{
    int n, i = 1, square;

    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("Number -> Square of Number\n");
    while (i <= n)
    {
        printf("%d -> ", i);
        square = i * i;
        i += 1;
        printf("%d\n", square);
    }
    return 0;
}