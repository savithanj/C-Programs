// 14.	Write a C program to input principal, rate and time to calculate Simple Interest.

#include<stdio.h>

int main()
{
	float p,r,t,i;

	printf("Enter Principal, rate of interest and time :");
	scanf("%f%f%f",&p,&r,&t);

	i = (p*t*r)/100.0;

	printf("Interest = %f\n",i);
	return 0;
}