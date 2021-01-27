// 20.	Write a C program two swap two numbers without a third variable.

#include <stdio.h>
int main()
{
	int x,y;
	
	printf("Enter two integers :");
	scanf ("%d%d", &x,&y);

	printf("Before swapping x = %d and y = %d\n", x,y);
  
  	x = x+y;  
 	y = x-y;   
  	x = x-y;  

  	printf("After swapping x = %d and y = %d\n", x,y);

	return 0;
}