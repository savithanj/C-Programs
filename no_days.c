// Program to accept days and convert to months and days
#include <stdio.h>
int main()
{

  int months, days;

  printf("Enter no of days :");
  scanf("%d", &days);

  months = days / 30;
  days = days % 30;

  printf("Months = %d and Days = %d\n", months, days);

  return 0;

  
}