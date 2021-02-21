#include <stdio.h>
int main()
{
	int i,j;
	int r,c;

	printf("Enter the row size :");
	scanf("%d",&r);

	printf("Enter the column size :");
	scanf("%d",&c);

	int mat1[r][c], mat2[r][c], sum_mat[r][c];

	printf("Enter data into matrix 1 :");
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("Enter data into matrix 1 :");
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}

	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum_mat[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	printf("The resultant matrix is - \n");
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", sum_mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/*
i=0; j=0;  mat[0][0] , 
     j=1;  mat[0][1] , 
	 j=2;  mat[0][2]

i=1; j=0   mat[1][0]
     j=1   mat[1][1]
	 j=2   mat[1][2]

i=2; j=0   mat [2][0]
     j=1   mat [2][1]
	 j=2   mat [2][2]
	*/