// 18.	Write a C program to enter length in centimeters and convert it into meter and print.

#include<stdio.h>

int main()
{
	float cm,m;

	printf("Enter length in centimeters :");
	scanf("%f", & cm);

	m = cm / 100.0;

	printf("%f cm = %f m\n",cm,m);
	
	return 0;
}