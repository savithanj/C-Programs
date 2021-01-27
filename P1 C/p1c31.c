// 31.	Write a C program to check entered number is positive or negative using conditional operators.

#include<stdio.h>
int main()
{
  int n;
  
  printf("Enter a positive integer :");
  scanf("%d", &n);

  if (n > 0)
  {
    printf("%d is positive\n",n);
  }
  else
  {
    printf("%d is Negative\n",n);
  }
  return 0;
}