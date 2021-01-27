// 30.	Write a C program to check entered number is even or odd using conditional operators.
#include<stdio.h>
int main()
{
  int n;
  
  printf("Enter a positive integer :");
  scanf("%d", &n);

  if (n % 2 == 0)
  {
    printf("%d is even\n",n);
  }
  else
  {
    printf("%d is odd\n",n);
  }
  return 0;
}