// 13.	Write a C program to enter lower case character and shift it to upper case and backwards.

#include<stdio.h>

int main()
{
	char ch;

	printf("Enter a lower case character :");
	scanf("%c", &ch);

	ch = ch - 32;  
	// ASCII value of 'a' is 97 and 'A' is 65
	// Therefore subtract from 97 - 65 = 32

	printf("upper case character = %c\n",ch);
	return 0;
}