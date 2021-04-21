#include<stdio.h>
#include "macro.h"
#define MAX 10
#ifdef MAX
		printf("The constant MAX is defined\n");
	#else 
		printf("The constant MAX is not defined\n");
	#endif
int main()
{
	 

	#ifndef MIN
		#define MIN 0
		printf("Defined MIN\n");
	#else 
		printf("MIN is defined\n");
	#endif 

	#if (MAX == 10)
		printf("Max is set to 10\n");
	#else
		printf("MAX is not set to 10\n");
	#endif

	#ifdef MAX
		#undef MAX
		#define MAX 100
	#endif
	printf("Value of MAX changed to 100\n"); 
}
