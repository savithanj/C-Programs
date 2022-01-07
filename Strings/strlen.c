#include<stdio.h>

int stringlen(char []);  // Function Declaration

int main()
{
		char str[5];
		int len;
		printf("Enter a string :");
		
		scanf("%[^\n]s",str);

		len = stringlen(str);   // Function invokation or function call
		printf("Length of %s is %d\n", str,len);
		return 0;
}
int stringlen(char s[])
{
	int i;
	for (i=0;s[i] != '\0';i++); 
	return i;
}