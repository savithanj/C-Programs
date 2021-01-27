// 32.	Write a C program to check maximum between three numbers using conditional operators.
#include <stdio.h>
int main()
{
  int x,y,z;
  printf("Enter three integers: ");
  scanf("%d%d%d", &x,&y,&z);

  if (x > y)
  {
    if (x > z)
    {
      printf("%d is greatest\n", x);
    }
    else
    {
      printf("%d is greatest\n",z);
    }
  }
  else
  {
    if (y > z)
    {
      printf("%d is greatest\n",y);
    }
    else
    {
      printf("%d is greatest\n",z);
    }
  }
  return 0;
}