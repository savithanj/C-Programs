// Program to find the largest and the smallest element of the array.

#include<stdio.h>
int main()
{
	int i,j,n,temp;

	// Accept the size of the array and initialize the array
	printf("Enter the size of the array:");
	scanf("%d",&n);

	int a[n];

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
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	//Display the largest and the smallest element
	printf("The largest element of the array is %d\n",a[n-1]);
	printf("The smallest element of the array is %d\n",a[0]);
	
	return 0;
}