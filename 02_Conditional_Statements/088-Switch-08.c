
#include <stdio.h>

int main()
{
    char color;

    printf("Enter traffic light color (R/Y/G): ");
    scanf(" %c", &color);

    switch (color)
    {
    case 'R':
    case 'r':
        printf("STOP!\n");
        break;

    case 'Y':
    case 'y':
        printf("GET READY!\n");
        break;

    case 'G':
    case 'g':
        printf("GO!\n");
        break;

    default:
        printf("Invalid Traffic Light Color!\n");
    }

    return 0;
}
