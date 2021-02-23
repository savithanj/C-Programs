#include<stdio.h>
int main()
{
		char str[50];
		int i;
		
		printf("Enter a string :");
		scanf("%[^\n]s",str);

		for (i=0;str[i] != '\0'; i++);
		
		printf("Length of %s is %d\n", str,i);
		return 0;

}