#include<stdio.h>


int main()
{
	int i = 5;           
	int *j;
	j = &i;
	printf("Address of i = %p\n",&i);
	printf("Address of i = %p\n",j);
	printf("Address of j = %p\n",&j);
	printf("Value of j = %p\n",j);
	printf("Value of i = %d\n",i);
	printf("Value of i = %d\n",*(&i));
	printf("Value of i = %d\n",*j); 
	printf("sizeof of j = %lu\n",sizeof(j));
	  // Prints the value present in address stored in j 
	return 0;

	// *(&i)  = i 
}