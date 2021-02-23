// Program to implement strcyp

#include<stdio.h>
int main()
{
		char des[50],src[50];       
		int len,i;

		printf("Enter a string :");
		scanf("%[^\n]s",src);

		for(i=0;src[i] != '\0';i++)
		{
			des[i] = src[i];
		}
		des[i] = '\0';
		printf("The string after copying = %s\n",des);
		return 0;
}