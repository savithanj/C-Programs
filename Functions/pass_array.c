// Program to implement a function to find the sum of all the elements of the add_array_elements
#include<stdio.h>
int add_array_elements(int [],int);

int main()
{  // beginning of main()
	int n;
	
	printf("Enter the size of the array :");
	scanf("%d", &n);

	int a[n];
	printf("Enter the elements into the array :");
	for(int i =0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}

	int sum;
	sum = add_array_elements(a,n);

	printf("Sum of all the elements of the array = %d\n",sum);
	return 0;
}  // End of main()

int add_array_elements(int array[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum = sum + array[i];
	}
	return sum;
}
