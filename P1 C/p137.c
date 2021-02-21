// 37.	Write a C program to check whether a number is negative, positive or zero.

#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);

	if (num < 0)
	{
		printf("The number is negative\n");
	}
	else if (num == 0)
	{
		printf("The number is zero\n");
	}
	else
	{
		printf("The number is positive\n");
	}

	return 0;
}