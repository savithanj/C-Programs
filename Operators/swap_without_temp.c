// Program to swap two numbers without using temporary variable
#include<stdio.h>
int main()
{
  int x = 10, y =200;


  printf("Before swapping x = %d and y = %d\n", x,y);
  
  x = x+y;  // x = 210  y = 200
  y = x-y;   // y=10 and x = 210
  x = x-y;   // x=200 and y =10

  printf("After swapping x = %d and y = %d\n", x,y);

  return 0;
}
