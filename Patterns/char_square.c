// example program to illustrate nested loops

#include <stdio.h>
int main()
{
	int n;
	int i,j;

	printf("Enter a positive number :");
	scanf("%d", &n);

	for(i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			printf("%c ",'a');
		}
		printf("\n");
	}                       
	return 0;
}