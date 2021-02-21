// Program to print fibonacci series upto n terms
// The fibonacci sereis is 0 1 1 2 3 5 8 13 ...
#include <stdio.h>
int main()
{
	int n,i,fterm,sterm,next_term;

	printf("Enter the number of terms : ");
	scanf("%d", &n);

	fterm = 0;
	sterm = 1;

	if (n <= 0)
	{
		printf("Invalid terms\n");
	}
	else if (n <= 1)
	{
		printf("%d\n", fterm);
	}
	else if (n <= 2)
	{
		printf("%d %d\n", fterm,sterm);
	}
	else 
	{
		printf("%d %d ", fterm,sterm);
		for (i=3;i<=n;i++)
		{
			next_term = fterm + sterm;
			printf("%d ", next_term);
			fterm = sterm;
			sterm = next_term;
		}
		printf("\n");
	}
	return 0;
}