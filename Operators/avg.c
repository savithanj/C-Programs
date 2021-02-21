// Program to find the sum and Average of 5 numbers
#include <stdio.h>
int main()
{
  int n1,n2,n3,n4,n5, sum;
  float avg;

  printf("Enter 5 integers :");
  scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
  
  sum = n1 + n2 + n3 + n4 + n5;
  avg = sum / 5.0;

  printf("Sum = %d\n",sum);
  printf("Average = %f\n",avg);

  return 0;
}