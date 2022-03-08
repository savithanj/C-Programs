/* 
 * Program 1:
 * Develop a program to solve simple computational problems using 
 * arithmetic expressions and use of each operator leading to 
 * simulation of a commercial calculator. (No built-in math function)
 */

 // Include the required header files
 #include<stdio.h>
 	
 // Define main function
 int main()
 {	// Beginning of main()
 
 	// Declare the variables
 	int num1,num2;
 	
 	int result;
 	char op;

	// Accept the operator first
	printf("Enter an arithmetic operator : ");
 	scanf("%c",&op);	
	 
 	// Accept two integers from the user
 	printf("Enter two integers :");
 	scanf("%d%d", &num1,&num2);

	// compute the arithmetic operation 	
 	if(op == '+')		// if operator is '+'
 	{
 		result = num1 + num2;
 	}
 	else if(op == '-')	// if operator is '-'
 	{
 		result = num1 - num2;
 	}
 	else if(op == '*')	// if operator is '*'
 	{
 		result = num1 * num2;
 	}
 	else if(op == '/')	// if operator is '/'
 	{
 		if (num2 == 0)
 		{
 			printf("Divide by zero error\n");
 			printf("Denominator cannot be zero in division operation\n");
 			return 1;
 		}
 		else
 		{
 			result = num1 / num2;
 		}
 		
 	}
 	else if(op == '%')	// if operator is '%'
 	{
 		if (num2 == 0)
 		{
 			printf("Divide by zero error\n");
 			printf("Denominator cannot be zero in modulus operation\n");
 			return 2;
 		}
 		else	
 		{
 			result = num1 % num2;
 		}
 	}
 	else	// if operator is none of the arithmetic operators
 	{
 		printf("Invalid operator...\n");
 		return 3;
 	}
 	
 	printf("Result: %d %c %d = %d\n",num1, op, num2, result);
 	return 0;
}	// End of main ()