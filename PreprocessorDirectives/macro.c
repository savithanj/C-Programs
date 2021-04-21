#include <stdio.h>
#include "macro.h"


int main()
{
	int a=10;
	printf("Square of %d is %d\n",a,square(a));
	printf("Cube of %d is %d\n",a,cube(a));
	printf("Cube of 5+5 is %d\n", cube(5+5));
	return 0;
}

//5+5*5+5*5+5