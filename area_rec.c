// Program to compute the area of the rectangle

#include<stdio.h>
int main()
{
  float length, breadth, area;

  printf("Enter Length and Breadth :");
  scanf("%f%f", &length, &breadth);

  area = length * breadth;

  printf("Area of Rectangle = %f\n",area);

  return 0;
}