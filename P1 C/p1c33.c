// 33.	Write a C program to check Least Significant bit is set or not using bitwise operators and print result.

#include <stdio.h>
int main()
{
	int n;

	printf("Enter an integer:");
	scanf("%d",&n);

	/* Bitwise AND (&) operator is used to check whether a bit is set(1) or not as it evaluates each bit of the resultant value and returns 1 if corresponding bits of both operands are set. To check LSB of a number we need to perform bitwise AND operation. */
	
	if ((n & 1) == 1) //or if (n & 1)
	{
		printf("LSB is set\n");
	}
	else
	{
		printf("LSB is not set\n");
	}
}