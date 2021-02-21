// Program to sort an array of integers using bubble sort algorithm
#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,n;
	
	printf("Enter the number of names :");
	scanf("%d",&n);

	char a[n][30],temp[30], key[30];

	printf("Enter %d names :", n);
	for(i=0;i<n;i++)
	{
		scanf("%s", a[i]);
	}

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(strcmp(a[j],a[j+1]) > 0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
	printf("The sorted array is  - \n");
	for(i=0;i<n;i++)
	{
		printf(" %d --> %s\n", (i+1), a[i]);
	}

	printf("Enter the name to be searched : ");
	scanf("%s",key);
	int f=0;
	int l=n-1;
	int m;

	while (f <=l)
	{
		m = (f+l)/2;
		if (strcmp(key,a[m]) == 0)   // if (key = a[m])
		{
			printf("The name %s is found at location %d\n", key, m+1);
			return 0;
		}
		else if (strcmp(key,a[m]) > 0)   // if (key > a[m]))
		{
			f = m + 1;
		}
		else
		{
			l = m - 1;
		}
	} // end of while loop

	printf ("The name %s is not found in the list\n", key);
	return 1;
}