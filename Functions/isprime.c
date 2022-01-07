#include <stdio.h>

int isprime (int);  // Function declaration

int main()
{
	int num, res;
	printf("Enter a number :");
	scanf("%d", &num);

	if (num <1)
	{
		printf("Invalid Input\n");
		return 1;
	}
	else if (num == 1)
	{
		printf("1 is neither a prime nor a composite number\n");
		return 1;
	}
	res = isprime(num);

	if (res == 1)  // Function invokation
	{
		printf("%d is a prime number\n", num);
	}
	else
	{
		printf("%d is not a prime number\n", num);
	}
	return 0;
}

int isprime(int n)       // Function definition
{
	for (int i=2;i<=n/2; i++)
	{
		if (n%i == 0)
		{
			return 0;     // n is not a prime number 
		}
	}
	return 1;
}