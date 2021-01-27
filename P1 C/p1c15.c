// 15.	Program to input 2 variables and display sum, difference, product and quotient.

#include<stdio.h>

int main()
{
	int a,b;

	printf("Enter two integers :");
	scanf("%d%d", &a, &b);

	printf("sum = %d\n",a+b);
	printf("Difference = %d\n",a-b);
	printf("Product = %d\n", a*b);
	printf("Quotient = %d\n", a/b);
	
	return 0;
}