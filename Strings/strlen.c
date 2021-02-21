#include<stdio.h>
int main()
{
		char str[50];
		int i,len;
		
		printf("Enter a string :");
		scanf("%[^\n]s",str);

		for (i=0;str[i] != '\0'; i++)
		{
			len++;
		}
		
		printf("Length of %s is %d\n", str,len);
		return 0;

}