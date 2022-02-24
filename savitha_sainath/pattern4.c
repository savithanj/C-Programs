// Pattern4
#include<stdio.h>
int main()
{
	int n=5;
	int row,col;
	for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			if (row%2 == 0  || col % 2 == 0)
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