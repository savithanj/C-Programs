// Example program to illustrate goto statement

#include <stdio.h>
int main()
{
	int a=1;

LOOP:
			if (a!=6)
			{
				printf("a=%d\n",a);
				a++;
				goto LOOP;
			}
	printf("Bye");
	return 0;
}