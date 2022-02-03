// Program for Task 2
#include<stdio.h>
int IsComposite(int number)
{
	for (int i = 2; i <= number / 2; ++i) 
	{
		if (number % i == 0)
	  	{
		  	return 1;
		}
	}
    return 0;
}
int main()
{
	printf("Composite check returned: %d\n",IsComposite(10));
	printf("Composite check returned: %d\n",IsComposite(99));
	printf("Composite check returned: %d\n",IsComposite(127));
}