// Program to count the set bits in an integer
#include<stdio.h>
int main()
{
  int x,count,temp;

  printf("Enter an integer: ");
  scanf("%d",&x);

  temp = x;
  count = 0;
  while (x != 0)
  {
    count = count + x & 1;
    x = x >> 1;
  }
  printf("No of set bits in %d is %d\n", temp,count);

  return 0;
}