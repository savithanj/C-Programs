// <datatype of the retrun value of the function>   <function name>  ( parameter list)

#include<stdio.h>

int sum(int x, int y);

int main()
{
	int a=10, b=20;
	int result;
	result = sum(a,b);   // calling the function
	printf("Result = %d\n", result);
	return 0;
}  // function main ends here


// Function definition of sum 
int sum(int x, int y)
{
	int sum;
	sum = x + y;
	return sum;
}
