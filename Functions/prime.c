// Program to print prime numbers between a given range using isprime function
#include <stdio.h>
int isprime (int);  // Function declaration

int main()
{
	int a,b;
	printf("Enter two numbers :");
	scanf("%d%d", &a,&b);

	for (int i=a+1; i<b;i++)
	{
		if (isprime(i) == 1)  // Function invokation
		{
			printf("%d\t", i);
		}
	}
	return 0;
}
int isprime(int n)       // Function definition
{
	if (n<=1)
	{
		return 0;
	}
	for (int i=2;i<=n/2; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}