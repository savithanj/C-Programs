// 26.	Write a C program to read Math, English, Kannada subject marks and find total, average and percentage and print.

#include <stdio.h>

int main()
{
	float maths, english, kannada, tot, avg, percent ;

	printf("Enter marks of math english and kannada (Max:50): ");
	scanf("%f%f%f", &maths,&english, &kannada);

	tot = maths + english + kannada;

	avg = tot / 3.0;

	percent = tot * (2.0/3.0);

	printf("Total = %f\n", tot);
	printf("Average = %f\n", avg);
	printf("percent = %f\n", percent);


	return 0;
}