#include<stdio.h>
void reverse();

int main()
{
	reverse();
	return 0;
}

void reverse()
{
	char ch;
	while (ch != EOF)
	{
		ch = getchar();
		reverse();
		putchar(ch);
	}
}