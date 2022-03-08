#include<stdio.h>
int main()
{
	int n, sum = 0;
	printf("Enter odd number: ");
	scanf("%d", &n);
	
	if (n % 2 == 1)
	{
  		for (int i=1;i<=n;i = i + 2)
  		{
    		sum = sum + (i * i);
 		}
	}
	printf("%d", sum);
	return 0;	
}

  