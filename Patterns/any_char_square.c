#include <stdio.h>

int main()
{
	int n;
	char ch;

	printf("Enter a positive number: ");
	scanf("%d",&n);

	printf("Enter the character to be printed: ");
	scanf(" %c", &ch);

	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
}