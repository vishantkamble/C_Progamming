#include<stdio.h>

int main()
{
    int a = 10; float b = 80.98; char c = 'A';


    printf("Size Of int = %zu bytes\n", sizeof(a));
    printf("Size if float = %zu bytes\n", sizeof(b));
    printf("Size of char = %zu bytes\n", sizeof(c));

    return 0;
}