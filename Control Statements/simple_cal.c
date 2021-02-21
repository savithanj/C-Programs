// Program to simulate simple calculator
#include<stdio.h>

int main()
{
  // Variable declaration
  int num1, num2, res;
  char op;

  // Read two operands
  printf("Enter two integers : ");
  scanf("%d%d", &num1, &num2);

  // Read opreator
  printf("Enter the operator :");
  scanf(" %c", &op);

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
    if (num2 == 0)
    {
      printf("Divide by zero Error. Denominator cannot be zero in division operation\n");
      return 1;
    }
    else
    {
      res = num1 / num2;
    }
  }
  else if (op == '%')
  {
    if (num2 == 0)
    {
      printf("Divide by zero Error. Denominator cannot be zero in modulus opration\n");
      return 2;
    }
    else
    {
      res = num1 % num2;
    }
  }
  else
  {
      printf("Invalid operator\n");
      return 3;
  }

  // print the output
  printf("result = %d\n", res);
  return 0;
}