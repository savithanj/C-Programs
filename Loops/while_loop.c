// Program to illustrate while loop

#include<stdio.h>
int main()
{
	int n,i;

	printf("Enter a number :");
	scanf("%d", &n);

	i=1;
	while (i<=10)
	{
		printf("%d * %d = %d\n",n, i, n*i);
		i++;
	}
	printf("Out of while loop\n");
	return 0;
}