// Program to find the diameter, area and circumference of the circle#in
#include<stdio.h>

int main()
{
  float area, radius, circum, diameter;

  printf("Enter radius :");
  scanf("%f", &radius);

  diameter = radius * 2;
  area = 3.14 * radius * radius;
  circum = 2 * 3.14 * radius;

  printf("Diameter = %f\n",diameter);
  printf("Area = %f\n", area);
  printf("Circumference = %f\n",circum);

  return 0;
}
