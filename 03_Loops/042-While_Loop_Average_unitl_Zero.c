#include <stdio.h>

int main()
{
    float n, sum = 0, average;
    int count = 0;

    while (1)
    {
        printf("Enter a Number: ");
        scanf("%f", &n);

        if (n == 0)
        {
            break;
        }
        else
        {
            sum = sum + n;
            count++;
        }
    }
    if (count > 0)
    {
        average = sum / count;
    }
    else
    {
        printf("No Number Entered!\n");
        return 0;
    }
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}