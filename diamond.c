#include<stdio.h>
int main()
{
	int space;
	space = 5;
	for(int i=1;i<=5;i++)
	{
		for(int s=1;s<=space;s++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("%c ",'*');
		}
		printf("\n");
		space--;
	}
	//printf("space = %d\n",space);

	space +=2;
	for(int i=1;i<=4;i++)
	{
		for(int s=1;s<=space;s++)
		{
			printf(" ");
		}
		for(int j=i;j<=4;j++)
		{
			printf("%c ",'*');
		}
		printf("\n");
		space++;
	}
	return 0;
}