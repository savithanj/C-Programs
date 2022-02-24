// Pattern2
#include<stdio.h>
int main()
{
	int n=5;
	int row,col;
	for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			if (col==0 || row == n-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}