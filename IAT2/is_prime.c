// Program to check if the given number is prime or not
#include <stdio.h>
#define TRUE 1
#define FALSE 0
int main()
{
	int n,i,flag;
	printf("Enter a positive number :");
	scanf("%d", &n);
	flag = TRUE;
	for (i=2;i<=n/2;i++)           
	{                        
		if (n%i == 0)    
		{
			flag = FALSE;
			break;
		}
	}
	if (flag == TRUE)
	{
		printf("%d is a prime number\n",n);
	}
	else
	{
		printf("%d is not a prime number\n",n);
	}
	return 0;
}
 