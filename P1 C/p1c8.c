// 8.	Write a C program to print the average of 5 numbers.

#include<stdio.h>
int main()
{
	float n1,n2,n3,n4,n5, sum;
  	float avg;

  	printf("Enter 5 integers :");
  	scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);
  
  	sum = n1 + n2 + n3 + n4 + n5;
 	avg = sum / 5.0;

  	printf("Average = %f\n",avg);

	return 0;
}