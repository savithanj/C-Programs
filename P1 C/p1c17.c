// 17.	Write a C program to accept radius of a circle from user and find circumference, diameter and area of a circle and print.

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