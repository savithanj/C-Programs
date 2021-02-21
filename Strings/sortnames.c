// Program to sort an array of integers using bubble sort algorithm
#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,n;
	
	printf("Enter the number of names :");
	scanf("%d",&n);

	char a[n][30],temp[30];


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
		printf("%s\n", a[i]);
	}
	return 0;
}