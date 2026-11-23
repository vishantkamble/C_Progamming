#include<stdio.h>

int main()
{
  int n, sum = 0;

  printf("Enter a Number: ");
  scanf("%d",&n);

  for(int i = 1; i <= n; i = i + 2)
    {
      sum = sum + i;
      printf("%d\t",i);
     
    }
  printf("\nSum = %d\n",sum);
}