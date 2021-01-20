//Program to find the greatest of three numbers using ternary operator.
#include <stdio.h>

int main()
{
  int a,b,c,d;

  printf("Enter three integers :");
  scanf("%d%d%d", &a, &b, &c);

  d = (a > b)? ((a > c)? a : c) : ((b>c) ? b:c);

  printf("Greatest of %d, %d and %d is %d\n", a,b,c,d);

  return 0;
}