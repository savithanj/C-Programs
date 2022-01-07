/*
Design and develop a flowchart to find the square root of a given number n. Implement a C program for the same and execute for all possible inputs with appropriate messages. Note: don’t use library function -  sqrt(n).
Name:
USN:
*/
#include <stdio.h>
#include <math.h>
int main()
{
	float i,num;
	// Accept input from the user
	printf("Enter a number : ");
	scanf("%f", &num);
	if(num < 0)
	{
		printf("Invalid input\n");
		return 1;
	}
	for(i=0.00001;i*i < num; i = i + 0.00001 )
	{

	}
	printf("computed value of Square root of %.3f = %.3f\n", num, i);
	printf("Square root from lib function = %.3f\n", sqrt(num));
	return 0;
}





