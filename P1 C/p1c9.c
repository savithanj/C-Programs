// 9.	Write a C program to input characters into variables and display them in the reverse order.

#include<stdio.h>
int main()
{
	char a,b,c,d,e;

	printf("Enter three characters :");
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);

	printf("%c%c%c%c%c\n",e,d,c,b,a);

	return 0;
}