// Program to find the factorial of a number
#include<stdio.h>
int main()
{
	int n,fact;
	printf("Enter a positve number :");
	scanf("%d", &n);

	if (n<0)
	{
		printf("Enter a postive number\n");
		return 1;
	}
	fact = 1;
	for (int i=1;i <= n ;i++)
	{
		fact = fact * i;
	}
	printf("Factorial of %d is %d\n", n, fact);
	return 0;
}
