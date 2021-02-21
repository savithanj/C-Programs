// Program to implement binary search algorithm
#include<stdio.h>
int main()
{
	int i,j,n,temp;
	int key,f,l,m;
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
	printf("The sorted array is  - \n");
	for(i=0;i<n;i++)
	{
		printf("%d --> %d\n", i+1, a[i]);
	}

	printf("Enter the element to be searched :");
	scanf("%d", &key);

	f=0;
	l=n-1;

	while(f <= l)
	{
		// compute mid
		m = (f+l) /2;

		if (key == a[m])
		{
			printf("%d is found at location %d\n",key, m+1);
			return 0;
		}
		else if(key > a[m])
		{
			f = m+1;
		}
		else
		{
			l = m-1;
		}
	}
	printf("%d is not found\n",key);
	return 1;
}