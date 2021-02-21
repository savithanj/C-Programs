// Program to initialize a two dimensional array and display its contents

#include<stdio.h>
int main()
{
	int r1,c1,r2,c2;

	printf("Enter the size of first matrix :");
	scanf("%d%d",&r1,&c1);

	printf("Enter the size of second matrix :");
	scanf("%d%d",&r2,&c2);

	if (r1!=r2 && c1!=c2)
	{
		printf("Addition not possible\n");
		return 1;
	}
	int mat1[r1][c1],mat2[r2][c2],sum[r1][c2];

	int i, j;

	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("Enter a number :");
			scanf("%d", &array[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}