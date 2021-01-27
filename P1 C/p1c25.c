// 25.	Write a C program to input the weight and quantity of products A and B and calculate the average weight.

#include<stdio.h>

int main()
{
	float w1,w2,q1,q2,avgwt;

	printf("Enter Weight and quantity of Product A : ");
	scanf("%f%f",&w1, &q1);

	printf("Enter Weight and quantity of Product B : ");
	scanf("%f%f",&w2, &q2);

	avgwt = (w1 * q1 + w2 * q2) / (q1 + q2);

	printf("Average Weight = %f\n", avgwt);

	return 0;
}