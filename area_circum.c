#include<stdio.h>

int main()
{
  float area, radius, circum;

  printf("Enter radius :");
  scanf("%f", &radius);

  area = 3.14 * radius * radius;

  circum = 2 * 3.14 * radius;

  printf("Area = %f\n", area);
  printf("Circumference = %f\n",circum);

  return 0;
}

