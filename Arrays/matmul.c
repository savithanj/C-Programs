// Program to illustrate matrix multiplication

#include <stdio.h>
int main()
{
	int m,n,p,q,i,j,k;

	// Accept the order of Matrix A and Matrix B
	printf("Enter the size of Matrix A :");
	scanf("%d%d",&m,&n);

	printf("Enter the size of Matrix B :");
	scanf("%d%d",&p,&q);

	// Check for condition of matrix multiplication
	if (n != p)
	{
		printf("Matrix Multiplication not possible\n");
		return 1;
	}
	
	// Matrix multiplication is possible
	// Declare arrays
	int a[m][n], b[p][q], c[m][q];

	// Initialize Matrix A
	printf("Enter data into matrix A :");
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	// Display Matrix A
	printf("Matrix A - \n");
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	// Initialize Matrix B
	printf("Enter data into matrix B :");
	for (i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	// Display Matrix B
	printf("Matrix b - \n");
	for (i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	
	// Multiply Matrix A and Matrix B and save the product in Matrix C
	for (i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j] = 0;
			for(k=0;k<n;k++)
			{
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}
	
	// Display the product matrix
	printf("The Product matrix is - \n");
	for (i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	return 0;
} // End of main() 
