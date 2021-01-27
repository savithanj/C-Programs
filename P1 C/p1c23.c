// 23.	Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

#include<stdio.h>
int main()
{
	int seconds, hours, minutes,s;

	printf("Enter number of seconds :");
	scanf("%d", &seconds);

	s = seconds; // store seconds in s for later use
	hours = seconds / 3600;
	seconds = seconds % 3600;

	minutes = seconds / 60;
	seconds = seconds % 60;

	printf("%d seconds = %d hours %d minutes %d seconds\n",s,hours, minutes,seconds);
	
	return 0;
}