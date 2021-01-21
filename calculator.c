// Simulation of simple calculator
// Example program for if else if ladder
// Arithmetic operators -> +, -, *, /, and %

#include<stdio.h>

int main()
{
  int num1=0, num2=0, result=0;
  
  char op;

  printf("Enter two integers: ");
  scanf("%d%d", &num1, &num2);

  printf("Enter an arithmetic operator :");
  scanf(" %c", &op);

  if (op == '+')
  {
    result = num1 + num2;
    printf("%d %c %d = %d\n", num1, op, num2, result);
  }
  else if (op == '-')
  {
    result = num1 - num2;
    printf("%d %c %d = %d\n", num1, op, num2, result);
  }
  else if (op == '*')
  {
    result = num1 * num2;
    printf("%d %c %d = %d\n", num1, op, num2, result);
  }
  else if (op == '/')
  {
    result = num1 / num2;
    printf("%d %c %d = %d\n", num1, op, num2, result);
  }
  else if (op == '%')
  {
    result = num1 % num2;
    printf("%d %c %d = %d\n", num1, op, num2, result);
  }
  else
  {
    printf("Invalid operator\n");
    return 1;
  }
  return 0;
}