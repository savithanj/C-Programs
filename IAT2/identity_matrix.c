// Program to check if the given matrix is an identity matrix or not
// An identity matrix is a square matrix having 1s on the main diagonal, and 0s everywhere else.
#include<stdio.h>
#define TRUE 1
#define FALSE 0

int main()
{
	int m,n,i,j,flag;
	
	printf("Enter the size of the matrix :");
	scanf("%d%d",&m,&n);

	if (m!=n)
	{
		printf("For identity matrix rows = columns\n");
		return 1;
	}

	int a[m][n];

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

	// check if the given matrix is an identity matrix or not
	flag = TRUE;
	for(i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i == j && a[i][j] != 1)
			{
				flag = FALSE;
				break;
			}
			else if (i != j && a[i][j] != 0)
			{
				flag = FALSE;
				break;
			}
		}
	}

	if (flag == TRUE)
	{
		printf("The matrix entered is an identity matrix\n");
	}
	else
	{
		printf("The matrix entered is not an identity matrix\n");
	}
	
	return 0;
}


