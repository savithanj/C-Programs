#include <stdio.h>

int main()
{
	int num1,num2,result;
	char op;
	printf("enter two integers : ");
	scanf("%d%d",&num1,&num2);
	printf("enter an operater : ");
	scanf(" %c",&op);
	if (op == '+')
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
	else if (op =='/')
	{
	  	if(num2 == 0)
	  	{
			printf("divide by zero error");
			printf("denominator should not be zero");
			printf("retry with a valid input\n");
			return 1;
	  	}
		else
		{
			result = num1 / num2;
		}
	}
	else if (op == '%')
	{
	  	if(num2 == 0)
	  	{
			printf("divide by zero error");
			printf("denominator should not be zero");
			printf("retry with a valid input\n");
			return 2;
	  	}
		else
		{
			result = num1 % num2;
		}
	}
	else
	{
		printf("invalid operator\n");
		return 3;
	}
	printf("Result = %d\n",result);
	return 0;
}
	  
	  
	  
	  
	  
	  
	
 

	
	
	
	
	

