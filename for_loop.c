// Program to illustrate for loop

#include<stdio.h>

int main()
{
	int n;
	for (n=0;n<=50;n += 2)
	{
		printf("%d ", n);
	}
	printf("\nOut of for loop\n");
	return 0;
}