// Program for Task 5
#include<stdio.h>
void PositionOfMinimum(int *values,int rows,int cols,int *row,int *col)
{
	int min=values[0];
	*row=*col=0;
	for(int i=1;i<rows*cols;i++)
		if(values[i]<min)
		{
			*row=i/cols;
			*col=i%cols;
			min=values[i];
  		}
}
int main()
{
	int minRow, minCol;
	int values[15] = {4, 2, 7, 70, 20, 90, 732, 612, 108, 44, 65,52, 0, 1, 9};
	PositionOfMinimum(values, 5,3, &minRow, &minCol);
	printf("Mininum is at Row %d and Col: %d\n", minRow, minCol);
	return 0;
}