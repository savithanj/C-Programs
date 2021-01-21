//Program to find the greatest of two numbers
// Example program for if else statement
#include <stdio.h>

int main()
{
  int a,b;

  printf("Enter two integers: ");
  scanf("%d%d", &a, &b);

  if (a>b)
  {
    printf("%d > %d\n", a,b);
  }
  else
  {
    printf("%d > %d\n", b,a);
  }
  return 0;
}