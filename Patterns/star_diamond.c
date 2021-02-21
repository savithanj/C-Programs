#include<stdio.h>
int main()
{
	int space;

	space = 5;
	for (int i=1;i<=5;i++)
	{
		for (int s=1;s<=space;s++)
		{
			printf(" ");
		}
	
		for(int j=1;j<=i;j++)
		{
			printf("%c ",'*');
		}
		printf("\n");
		space --;
	}
	space = space + 2;	
	for (int i=4;i>=1;i--)
	{
		for (int s=1;s<=space;s++)
		{
			printf(" ");
		}
		
		for(int j=1;j<=i;j++)
		{
			printf("%c ",'*');
		}
		printf("\n");
		space ++;
	}
	return 0;
}