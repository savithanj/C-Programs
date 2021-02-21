// Program to add two matrices
#include <stdio.h>
int main()
{
	int i,j;
	int m,n,p,q;

	printf("Enter order of matrix 1 :");
	scanf("%d%d",&m,&n);

	printf("Enter order of matrix 2 :");
	scanf("%d%d",&p,&q);

	if (m != p || n != q)
	{
		printf("Order mismatch..\n");
		return 1;
	}

	int mat1[m][n], mat2[p][q], sum_mat[m][n];

	printf("Enter data into matrix 1 :");
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("Matrix 1 is - \n");
	for (i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	printf("Enter data into matrix 2 :");
	for (i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}

	printf("Matrix 2 is - \n");
	for (i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ", mat2[i][j]);
		}
		printf("\n");
	}

	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum_mat[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	printf("The sum of mat1 and mat2 is - \n");
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ", sum_mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
