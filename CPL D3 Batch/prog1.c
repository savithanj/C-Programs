/*
program 1
 Develop a program to solve simple computational problems using arithmetic expressions and use of each operator leading to simulation of a commercial calculator. (No built-in math function)
*/
#include<stdio.h>  // preprocessor command 

int main()
{
	int num1, num2, result;
	char op;

	printf("Enter the operator :");
	scanf("%c",&op);

	printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);

	if(op == '+')
	{
		result = num1 + num2;
	}
	else if (op == '-')
	{
		result = num1 - num2;
	}
	else if (op == '*')
	{
		result = num1 * num2;
	}
	else if(op == '/')
	{
		if (num2 == 0)
		{
			printf("Divide by zero error....\n");
			return 1;
		}
		else
		{
			result = num1 / num2;
		}
		
	}
	else if(op == '%')
	{
		if (num2 == 0)
		{
			printf("Divide by zero error....\n");
			return 2;
		}
		else
		{
			result = num1 % num2;
		}
	}
	else
	{
		printf("Invalid Operator\n");
		return 3;
	}
	printf("Result = %d\n", result);
	return 0;
}
