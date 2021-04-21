#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};

	int *p = a,sum;
	sum=0;
	
	for(int i=0;i<5;i++)
	{
		printf("%d ",i[a]);
		//p++;
	}

	//p=a;
	for(int i=0;i<5;i++)
	{
		sum = sum + i[a];
		//p++;
	}

	printf("\nSum of all the elements of the arrray = %d\n",sum);
	return 0;
}