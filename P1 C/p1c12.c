// 12.	Write a C program to accept length and width of a rectangle from user and find the area of rectangle and display.

#include<stdio.h>

int main()
{
	float l,w,a;

	printf("Enter length and width :");
	scanf("%f%f",&l,&w);

	a = l * w;

	printf("Area = %f\n",a);
	
	return 0;
}