#include<stdio.h>

int main()
{
  int n;

  printf("Enter a Number: ");
  scanf("%d",&n);

  for(int i = 5; i <= n; i+=5)
    {
      printf("%d\n",i);
    }
  return 0;
}