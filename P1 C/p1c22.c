// 22.	Write a C program to calculate the distance between the two points.

#include <stdio.h>
#include <math.h>

int main()
{
	float x1, y1, x2, y2, distance;

	printf("Enter coordinates of first point :");
	scanf("%f%f", &x1,&y1);

	printf("Enter coordinates of second point :");
	scanf("%f%f", &x2,&y2);

	// d=√((x_2-x_1)²+(y_2-y_1)²)
	distance = sqrt( pow( (x2-x1),2) + pow((y2-y1),2) );

	printf("Distance = %f\n", distance);

	return 0;
}