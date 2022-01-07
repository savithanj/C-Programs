#include<stdio.h>
int main()
{
	int r=5,c=5;
	int a[r][c];
	int b[]={5,10,20,40,80};
	int k=0;

	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			if(j==c-1-i)
			{
				a[i][j] = b[k++];
			}
			else
			{
				a[i][j] = 0;
			}

		}
	}

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}