// simple calculator using if-else-if ladder
#include<stdio.h>
int main()
{
  // Variable declaration
  int num1, num2, res;
  char op;

 // Read opreator first
  printf("Enter the operator :");
  scanf("%c", &op);

 // Read two operands
  printf("Enter two integers : ");
  scanf("%d%d", &num1, &num2);

  if (op == '+')
  {
    	res = num1 + num2;
  }
  else if (op == '-')
  {
    	res = num1 - num2;
  }
  else if (op == '*')
  {
    	res = num1 * num2;
  }
  else if (op == '/')
  {
      	res = num1 / num2;
  }
  else
  {
      printf("Invalid operator\n");
      return 1;
  }
  // print the output
  printf("result = %d\n", res);
  return 0;
}

// Program to simulate simple calculator using switch statement
#include<stdio.h>
int main()
{
	// Variable declaration
  	int num1, num2, res;
  	char op;

 	// Read opreator first
  	printf("Enter the operator :");
  	scanf("%c", &op);

 	// Read two operands
  	printf("Enter two integers : ");
  	scanf("%d%d", &num1, &num2);

	switch (op)
	{
		case '+':
					res = num1 + num2;
					break;
		case '-':
					res = num1 - num2;
					break;
		case '*':
					res = num1 * num2;
					break;
		case '/':
					res = num1 / num2;
					break;
					
		default:	printf("Invalid operator\n");
					return 1;
	}

  // print the output
  printf("result = %d\n", res);
  return 0;
}

