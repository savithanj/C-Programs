#include<stdio.h>
void strconcat(char[], char []);
int main()
{
		char des[100],src[50];  

		printf("Enter a source string :");
		scanf("%s",src);

		gets(src); 
		printf("Enter a destination string :");
		gets(des); 
		strconcat(des,src);  // des and src are actual parameters 
		printf("Concatenated String is %s\n",des);
		printf("source string is = %s\n",src);
		return 0;
}
void strconcat(char d[], char s[])  // d and s are formal parameters 
{
	int i,j;
	for(i=0;d[i] != '\0';i++);
	for(j=0;s[j] != '\0'; j++, i++)
	{
		d[i] = s[j];
	}
	d[i] = '\0';
}