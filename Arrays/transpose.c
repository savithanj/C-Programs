// Program to find the transpose of a matrix
#include<stdio.h>

int main()
{
	int m,n,i,j;
	
	printf("Enter the size of the matrix :");
	scanf("%d%d",&m,&n);

	int a[m][n], t[n][m];

	printf("Enter elements into matrix :");
	for(i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	// Display Matrix A
	printf("Matrix A ---\n");
	for(i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	// Finding the transpose of a matrix
	printf("Transpose Matrix ----\n");
	for(i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			t[j][i] = a[i][j];
		}
	}

	// Display transpose of a matrix
	for(i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}