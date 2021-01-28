// 35.	Write a C program to check input is Alphabet or not using nested conditional operators.

#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c", &ch);

	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
	{
		printf("%c is an alphabet\n",ch);
	}
	else
	{
		printf("%c is not an alphabet\n",ch);
	}
}