// Program to reverse a string and check if the string is a palindrome or not
#include<stdio.h>
#include<string.h>

int main()
{
	char s[50],reverse[50];
	int i,j;

	printf("Enter a string : ");
	// gets(s);
	scanf("%[^\n]s",s);

	for (i=strlen(s)-1,j=0; i >= 0;i--,j++)
	{
		reverse[j] = s[i];
	}
	reverse[j] = '\0';

	printf("The reversed string is %s\n", reverse);

	if (strcmp(s,reverse) == 0)
	{
		printf("%s is a palindrome\n", s);
	}
	else
	{
		printf("%s is not a palindrome\n", s);
	}
	return 0;
}