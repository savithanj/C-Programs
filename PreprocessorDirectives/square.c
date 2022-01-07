/* Define  pre processor directives. Write a C Program that finds addition of two squared numbers by defining macro for square(X) */
#include<stdio.h>
#define square(x)  ((x)*(x))
int main()
{
	int a=10, b=20;
	int res;
	res = square(a) + square(b);
	printf("res = %d\n", res);
	return 0;
}