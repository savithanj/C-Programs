// 27.	Write a C program to display the size of datatypes: int, float, char, double.
#include <stdio.h>

int main()
{
	printf("sizeof int = %ld\n",sizeof(int));
	printf("sizeof float = %ld\n",sizeof(float));
  	printf("sizeof char = %ld",sizeof(char));
  	printf("sizeof double = %ld\n",sizeof(double));
  
  return 0;
}
