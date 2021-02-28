// Program to find the smallest element of the array.

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
    int smallest = 0;

	for (i=1;i<n;i++)           
	{
		if (a[i] < a[smallest])
		{
			smallest = i;
		}
	}

	//Display the smallest element
	printf("The smallest element of the array is %d\n",a[smallest]);

	return 0;
}