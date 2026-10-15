#include<stdio.h>

int main()
{
    int x, y;
    
    printf("Enter x & y Coordinates: \n");
    printf("Enter x coordinate: ");
    scanf("%d", &x);
    printf("Enter y Coordinate: ");
    scanf("%d", &y);

    if(x > 0 && y > 0)
    {
        printf("First Quadrant.\n");
    }
    else if(x < 0 && y > 0)
    {
        printf("Second Quadrant.\n");
    }
    else if(x < 0 && y < 0)
    {
        printf("Third Quadrant.\n");
    }
    else if(x > 0 && y < 0)
    {
        printf("Fouth Quadrant.\n");
    }
    else if(x == 0 && y == 0)
    {
        printf("At Origin");
    }
    else
    {
        printf("Invalid!\n");
    }
    return 0;
}