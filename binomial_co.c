// Program to compute the binomial coefficient
#include<stdio.h>
int main()
{
	int n,r,ncr;
	int factn=1, factr=1,factnminusr=1;
	
	printf("Enter value of n :");
	scanf("%d",&n);

	printf("Enter value of r :");
	scanf("%d",&r);
	// To compute factorial of n	
	for (int i=1;i<=n;i++)
	{
		factn *=  i;         // fact = fact * i
	}
	// To compute factorial of r	
	for (int i=1;i<=r;i++)
	{
		factr = factr * i;
	}
	// To compute factorial of (n-r)	
	for (int i=1;i<=(n-r);i++)
	{
		factnminusr *= i;
	}

	ncr = factn / (factr * factnminusr);

	printf("%d\n",ncr);

	return 0;
}