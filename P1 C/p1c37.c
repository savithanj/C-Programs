// 37.	Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number :");
	scanf("%d", &n);

	if (n < 0)
	{
		printf("The number - %d is negative\n",n);
	}
	else if (n == 0)
	{
		printf("The number is zero\n");
	}
	else
	{
		printf("The number - %d is negative\n",n);
	}
	return 0;
}