#include<stdio.h>
#include<math.h>
#define MAX 100
/*Initially top of the stack will be -1.*/
int top = -1; /*Points to top of the stack.*/
double s [ MAX ];
/*Function definition to push elements onto stack.*/
void push ( double elem )
{
	if ( top == MAX - 1 )
	{
		printf ( "\nStack Overflow!!!" );
	}
	else
	{
		top = top + 1; /*Increment top of the stack.*/
		s [ top ] = elem; /*Insert element on top of the stack.*/
	}
}
/*Function definition to delete elements from stack.*/
double pop ( )
{
	double del;
	if ( top == -1 )
	{
		printf ( "\nStack Underflow!!!" );
	}
	else
	{
		del = s [ top ]; /*Delete the topmost element from the stack.*/
		top = top - 1; /*Decrement top of the stack.*/
		return ( del );
	}
}
/*Function definition to evaluate.*/
double evaluate ( char op, double op1, double op2 )
{
	switch ( op )
	{
		case '+': return ( op1 + op2 );
		case '-': return ( op1 - op2 );
		case '*': return ( op1 * op2 );
		case '/': return ( op1 / op2 );
		case '%': return ( fmod ( op1 , op2 ) );
		case '^': return ( pow ( op1, op2 ) );
		default: printf ( "\nInvalid Operator!!!" );
	}
}
int main()
{
	char suffix [ 50 ];
	int i; /*Index to access Suffix Expression.*/
	double op1, op2, res;
	printf ( "\nEnter the Suffix Expression: " );
	scanf ( "%s", suffix );
	for ( i = 0 ; suffix [ i ] != '\0' ; i++ )
	{
		if ( isdigit ( suffix [ i ] ) ) /*Check if the current character is digit.*/
			push ( suffix [ i ] - '0' ); /*Push it onto stack. '0'- ASCII value of 0 is 48.*/
		else
		{
			op2 = pop(); /*Get the second operand from the stack.*/
			op1 = pop(); /*Get the first operand from the stack.*/
			res = evaluate ( suffix [ i ], op1, op2 );
			push ( res ); /*Push the partial result onto the stack.*/
		}
	}
	res = pop(); /*Pop the final result.*/
	printf ( "\nThe result is %lf", res );
	return ( 0 );
}
