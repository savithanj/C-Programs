// Program to implement recursive function to find the factorial of a number.

#include<stdio.h>

int factorial(int);

int main()
{
	int num,fact;
	printf("Enter a number :");
	scanf("%d",&num);

	fact = factorial(num);
	printf("Factorial of %d is %d\n", num, fact);
	return 0;
}

int factorial(int n)
{
	if ( n == 1 || n == 0) 
	{
		return 1;
	}
	else
	{
		return n * factorial (n-1);
	}
}

/*factorial of 5 = 5 * 4 * 3 * 2 * 1

from main  -- factorial (5)
return 5 * factorial (4)
return 5 * 4 * factorial(3)
return 5 * 4 * 3 * factorial (2)
return 5 * 4 * 3 * 2 * Factorial (1)
return 5 * 4 * 3 * 2 * 1


