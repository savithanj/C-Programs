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