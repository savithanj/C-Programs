// Program to print the pascal triangle of 10 rows
#include<stdio.h>
#define MAX 10

int main()
{
	int m,x,binom,space;

	space = MAX*2;    
	for(m=0; m <= MAX; m++)
	{
		// Print spaces
		for (int i=0;i<space;i++)
		{
			printf(" ");
		}
		binom=1;
		for (x=0; x <= m; x++)
		{
			if (m == 0 || x == 0)
			{
				printf("%4d",binom);
			}
			else
			{
				binom = binom * (m-x+1)/x;
				printf("%4d", binom);
			}
		} // inner for loop ends here
		printf("\n");
		space -= 2;
	}	// outer for loop ends here
	return 0;
}