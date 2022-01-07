// Simulation of simple calculator
// Example program for if else if ladder
// Arithmetic operators -> +, -, *, /, and %
#include<stdio.h>
int main()
{
  int num1, num2, result;
  char op;
  
  printf("Enter two integers: ");
  scanf("%d%d", &num1, &num2);

  printf("Enter an arithmetic operator :");
  scanf(" %c", &op);

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
  else if (op == '/')
  {
	  if (num2 == 0)
	  {
		  printf("Divide by zero error\n");
		  return 1;
	  }
	  else
	  {
		  result = num1 / num2;
	  }
  } // End of else if
  else if (op == '%')
  {
    if (num2 == 0)
	  {
		  printf("Divide by zero error\n");
		  return 1;
	  }
	  else
	  {
		  result = num1 % num2;
	  }
  } // End of else if
  else
  {
    printf("Invalid operator\n");
    return 1;
  }
  printf("%d %c %d = %d\n", num1, op, num2, result);
  return 0;
}  // End of main function