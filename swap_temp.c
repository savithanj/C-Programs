// Program to swap two numbers using temporary variable
#include<stdio.h>
int main()
{
  int x = 10, y =200;
  int temp;

  printf("Before swapping x = %d and y = %d\n", x,y);
  
  temp = x;
  x=y;
  y=temp;

  printf("After swapping x = %d and y = %d\n", x,y);

  return 0;
}