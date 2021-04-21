#include<stdio.h>

void display(int,char,int);   // x is formal parameter

int main()
{
	printf("Invoking the function display\n");
	int i=10,j=20;
	char ch='a';

	display(i,ch,j); // i is the actual parameter  
	printf("Back to main() function\n");
	return 0;
}

// Function definition
void display(char c,int x,int y)   // x is the formal parameter
{ 
	printf("This is being printed in the function display\n");
	printf("x = %d\n",x);
	printf("%c  %d\n",c,y);
} 