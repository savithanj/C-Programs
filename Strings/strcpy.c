#include<stdio.h>
void strcopy(char[], char []);

int main()
{
		char des[50],src[50];       
		
		printf("Enter a string :");
		scanf("%[^\n]s",src);

		strcopy(des,src);

		printf("des = %s\n",des);
		return 0;
}

void strcopy(char d[], char s[])
{	
	int i;
	for (i=0;s[i] != '\0'; i++)
	{
		d[i] = s[i];
	}
	d[i] = '\0';
}
