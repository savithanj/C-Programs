// Program to sort an array of integers using bubble sort algorithm

#include<stdio.h>
int main()
{
	int i,j,n,temp;
	int a[50];

	// Accept the size of the array and initialize the array
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter %d elements :", n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	// sort using bubble sort algorithm
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j] < a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	//Displayed the sorted array
	printf("The sorted array is  - \n");
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}