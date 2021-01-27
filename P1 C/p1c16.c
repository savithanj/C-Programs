// 16.	Write a C program to accept base and height from user and find the area of triangle and display.

#include<stdio.h>

int main()
{
	float base, height, area;

	printf("Enter base and height of a Triangle ");
	scanf("%f%f", &base, &height);

	area = 0.5 * base * height;

	// Take half as 0.5 and not as 1/2
	// as result of 1/2 is zero and area = 0

	printf("Area = %f\n", area);
	return 0;
}