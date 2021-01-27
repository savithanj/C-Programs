// 11.	Write a C program to print your age using the current year and asking user to input their Date of Birth.

#include<stdio.h>
int main()
{
	int yob,age; // year of birth

	printf("Enter Year of Birth :");
	scanf("%d", &yob);

	age = 2021 - yob;
	printf("%d",age);

	return 0;
}