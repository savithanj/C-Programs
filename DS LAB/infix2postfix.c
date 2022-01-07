#include<stdio.h>
#include<ctype.h>
#define MAX 50
/*Initially top of the stack will be -1.*/
int top = -1; /*Points to top of the stack.*/
char stack [ MAX ];
/*Function definition to push elements onto stack.*/
void push ( char ele )
{
	if ( top == MAX - 1 )
	{
		printf ( "\nStack Overflow!!!" );
	}
	else
	{
		top = top + 1; /*Increment top of the stack.*/
		stack [ top ] = ele; /*Insert element on top of the stack.*/
	}
}
/*Function definition to delete elements from stack.*/
char pop()
{
	char del;
	if ( top == -1 )
	{
		printf ( "\nStack Underflow!!!" );
	}
	else
	{
		del = stack [ top ]; /*Delete the topmost element from the stack.*/
		top = top - 1; /*Decrement top of the stack.*/
		return ( del );
	}
}
/*Function definition that defines priority of operators.*/
int priority ( char c )
{
	if ( c == '#' )
		return ( 0 );
	else if ( c == '(' )
		return ( 1 );
	else if ( c == '+' || c == '-' )
		return ( 2 );
	else if ( c == '*' || c == '/' || c == '%' )
		return ( 3 );
	else if ( c == '^' )
		return ( 4 );
}
int main()
{
	char infix [ MAX ], postfix [ MAX ];
	int i; /*Index to access infix expression.*/
	int j = 0; /*Index to access postfix expression.*/
	printf ( "\nEnter the Infix Expression: " );
	scanf ( "%s", infix );
	push ( '#' ); /*Push '#' symbol on to the stack.*/
	for ( i = 0 ; infix [ i ] != '\0' ; i++ )
	{
		/*Check if the character in the infix expression is alphanumeric.*/
		if ( isalnum ( infix [ i ] ) )
			postfix [ j++ ] = infix [ i ]; /*Place the character in postfix expression.*/
		/*Check if the character in the infix expression is '('.*/
		else if ( infix [ i ] == '(' )

			push ( infix [ i ] ); /*Push the character on to the stack.*/
		/*Check if the character in the infix expression is ')'.*/

		else if ( infix [ i ] == ')' )
		{
			while ( stack [ top ] != '(' ) /*Until top o stack is not '('.*/
			{
				postfix [ j++ ] = pop(); /*Pop the characters from the stack and
			/*place it in the postfix expression.*/

			}
			top--; /*Removes '('.*/
		}
		else
		{

			/*Check the priority of character on the stack and input character. If its higher then pop the character from the stack and place it in the postfix expression.*/

			while ( priority ( stack [ top ] ) >= priority ( infix [ i ] ) )
			{
				postfix [ j++ ] = pop();
			}
			push ( infix [ i ] ); /*Push the infix character onto the stack.*/
		}
	}
	/*Pop the remaining characters from the stack and place it in the postfix expression until '#' is encountered.*/
	while ( stack [ top ] != '#' )
		postfix [ j++ ] = pop();
	postfix [ j ] = '\0'; /*Append NULL character at the end of postfix expression.*/
	printf ( "\nThe Postfix Expression is %s", postfix );
	return ( 0 );
}