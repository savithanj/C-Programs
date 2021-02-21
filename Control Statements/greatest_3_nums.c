// Program to print the greatest of 3 numbers
// Example program for nested if statement

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