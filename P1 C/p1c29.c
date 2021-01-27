// 29.	Write a C program to check maximum between two numbers using conditional operators.
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
