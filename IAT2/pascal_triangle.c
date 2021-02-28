// Program to print the pascal triangle of n rows
#include<stdio.h>

int main()
{
	int n,m,x,binom,space;

	printf("Enter the number of rows :");
	scanf("%d", &n);

	space = n*2;    
	for(m=0; m <= n; m++)
	{
		// Print spaces
		for (int i=0;i<space;i++)
		{
			printf(" ");
		}
		
		for (x=0; x <= m; x++)
		{
			if (m == 0 || x == 0)
			{
				binom = 1;
			}
			else
			{
				binom = binom * (m-x+1)/x;
			}
			printf("%4d", binom);
		} // inner for loop ends here
		printf("\n");
		space -= 2;
	}	// outer for loop ends here
	return 0;
}