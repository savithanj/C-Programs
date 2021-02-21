// Program to illustrate switch statement
#include<stdio.h>
int main()
{
	char grade;
	printf("Enter Grade (A-E): ");
	scanf("%c", &grade);
	switch (grade)
	{
		case 'a':
		case 'A': printf("Out Standing\n");
		          printf("Your performance is good\n"); 
				  break;  
		case 'b':
		case 'B': printf("Good\n");
		          break;      
		case 'c':		  
		case 'C': printf("Average\n");
		          break;
		case 'd':
	    case 'D': printf("Poor\n");
		          break;
		case 'e':
		case 'E': printf("Fail\n");
		          break;
		default : printf("Invalid Grade\n");
	}
	printf("Your Grade is %c\n",grade);
	return 0;
}