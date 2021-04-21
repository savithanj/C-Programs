#include<stdio.h>

int main()
{
	int a[50];
	int f,l,m,n,key;

	printf("Enter the size of the array :");
	scanf("%d", &n);

	printf("enter %d integer in ascending order:",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}

	printf("Enter key element :");
	scanf("%d", &key);

	f=0;
	l=n-1;
	while(f<=l)
	{
		m=(f+l)/2;
		if (key == a[m])
		{
			printf("%d is found at location %d\n", key,m+1);
			return 0;
		}
		else if(key > a[m])
		{
			f=m+1;
		}
		else
		{
			l=m-1;
		}
	}
	printf("Key not found\n");
	return 1;
}