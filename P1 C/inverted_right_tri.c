/* Program to print the following pattern

*****
****
***
**
*
*/
#include <stdio.h>

int main()
{
	int n;
	char ch;

	printf("Enter the number of rows: ");
	scanf("%d",&n);

	printf("Enter the character to be printed: ");
	scanf(" %c", &ch);

	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
}