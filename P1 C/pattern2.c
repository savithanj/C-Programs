// example program to illustrate nested loops

#include <stdio.h>
int main()
{
	int n=5;
	int i,j;

	for(i=5;i>=1;i--)
	{
		for (j=1;j<=i;j++)
		{
			printf("%c ",'a');
		}
		printf("\n");
	}                       
	return 0;
}