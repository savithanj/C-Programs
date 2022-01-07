#include<stdio.h>
int main()
{   int n,i;
	int j=i;
    scanf("%d",&n);//input row number
    int b[n]; 
	scanf("%d",&b[0]);//take 1st value ex:b[0]=5
    for( i=1;i<n;i++)
    b[i]=b[i-1]*2;//doubles the next value ex:b[0]=5 so b[1]=10
	int a[n][n];
	int k=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(j==n-1-i)
				a[i][j] = b[k++];
			else
				a[i][j] = 0;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}