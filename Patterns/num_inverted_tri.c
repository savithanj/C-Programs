// Programs to print numbers in inverted right triangle pattern

#include<stdio.h>
int main()
{
	for(int i=5;i>=1;i--)
	{
		for(int j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}