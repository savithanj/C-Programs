// 21.	Write a C program to convert specified days into years, weeks and days.

#include<stdio.h>

int main()
{
	int days, years, months, weeks,d;

	printf("Enter days :");
	scanf("%d",&days);

	d = days;       // save days value in d for later use

	years = days / 365;  // number of years
	days = days % 365;   // remaining days

	months = days / 30;  // number of months
	days = days % 30;    // remaining days

	weeks = days / 7;    // number of weeks
	days = days % 7;     // remaining days

	printf("%d days = %d years %d months %d weeks %d days\n",d,years,months,weeks,days);

	return 0;
}