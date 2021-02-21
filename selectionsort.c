// Program to sort an array of integers using selection sort algorithm
#include<stdio.h>
int main()
{
	int i,j,n,temp,smallest;
	int a[50];
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter %d elements :", n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		// assume the element at index i is smallest
		smallest = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j] < a[smallest])
			{
				smallest = j;
			}
		}

		// swap a[i] and s[smallest]
		temp = a[i];
		a[i] = a[smallest];
		a[smallest] = temp;
	}
	printf("The sorted array is  - \n");
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}