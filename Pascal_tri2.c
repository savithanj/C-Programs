// Program to print table of binomial coefficient for m=10

#include<stdio.h>
#define MAX 10

int main()
{
	int i,j,ncr;
	int facti=1,factj=1,facti_j=1;
    
	for(i=0; i <= MAX; i++)
	{
		for (int j=0;j<MAX-i;j++)
		{
			printf(" ");
		}
		for (j=0; j <= i; j++)
		{
			// Print nCr (i,j)
			facti=1,factj=1,facti_j=1;
			for(int k = 1;k <= i; k++)
			{
				facti = facti * k;
			}
			for(int k = 1;k <= j; k++)
			{
				factj = factj * k;
			}
			for(int k = 1;k <= (i-j); k++)
			{
				facti_j = facti_j * k;
			}
			ncr = facti / (factj * facti_j);
			printf("%4d",ncr);
		}
		printf("\n");
	}	
	return 0;
}