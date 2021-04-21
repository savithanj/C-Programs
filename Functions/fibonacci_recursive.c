// Program to implement recursive fucntion to find the fibonacci term

#include<stdio.h>
int fibo(int);
int main()
{
	int n;
	printf("Enter no. of terms :");
	scanf("%d", &n);

	for (int i=0; i < n; i++)
	{
		printf("%d ", fibo(i));
	}
	return 0;
}

int fibo(int num)
{
	if (num == 0)
	{
		return 0;
	}
	if(num == 1)
	{
		return 1;
	}
	return fibo(num-1) + fibo (num-2);
}

