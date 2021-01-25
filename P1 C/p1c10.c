// 10.	Write a C program to input datatypes and display their sizes.
#include<stdio.h>
int main()
{
	printf("sizeof char = %ld",sizeof(char));
  	printf("sizeof short int  = %ld\n",sizeof(short int));
  	printf("sizeof unsigned short int = %ld\n",sizeof(unsigned short int));
  	printf("sizeof int = %ld\n",sizeof(int));
  	printf("sizeof unsigned int = %ld\n",sizeof(unsigned int));
  	printf("sizeof long int = %ld\n",sizeof(long int));
  	printf("sizeof unsigned long int = %ld\n",sizeof(unsigned long int));
  	printf("sizeof float = %ld\n",sizeof(float));
  	printf("sizeof double = %ld\n",sizeof(double));
  	printf("sizeof long double = %ld\n",sizeof(long double));

	return 0;
}