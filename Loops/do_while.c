// Program to illustrate do while loop

#include<stdio.h>
int main()
{
	int n;

	n=1;
	do
	{
		printf("%d\n",n);
		n++;
	}
	while (n<=5);

	printf("out of do while loop\n");
	return 0;
}