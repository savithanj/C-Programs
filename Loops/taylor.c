/*
Develop a program to compute sin(x) using Taylor series approximation. Compare your result with the built-in library function. Print both the results with appropriate messages.
Name:
USN:
*/
#include<stdio.h>
#include<math.h>
#define PI 3.14285
int main()
{
	float deg,x,term,nume,deno,sum,i;
	printf("Enter Degree :");
	scanf("%f", &deg);
	// convert degree to radians
	x = deg * (PI /180.0);
	nume = x;
	deno = 1;
	sum = 0;
	i = 1;
	do
	{
		term = nume / deno;
		sum = sum + term;
		i = i + 2;
		nume = -nume * x * x;
		deno = deno * i * (i-1);
	} while (fabs(term) > 0.00001);
	printf( "Using Taylor Series computed value of sin(%.3f) = %.3f\n",deg,sum);
	printf( "Using Library functon value of sin(%.3f) = %.3f\n",deg,sin(x));
	return 0;
}