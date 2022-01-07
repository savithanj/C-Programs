/*  Develop a program to find the square root of a given 
 * number N and execute for all possible inputs with 
 * appropriate messages. Note: Don’t use library
 * function sqrt(n).
Name:
USN:
*/ 
#include<stdio.h>
#include<math.h>

int main()
{
	float i,n;
	printf("Enter a number :");
	scanf("%f", &n);
	if (n < 0)
	{
		printf("Invalid input\n");
		return 1;
	}
	for(i=0.00001;(i*i)< n;i = i+0.00001)
	{

	}	
	printf("Computed Square root of %.3f = %.3f\n", n, i);
	printf("Square root from lib function = %.3f\n", sqrt(n));
	return 0;
}





