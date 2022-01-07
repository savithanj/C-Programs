#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d", &num);
	if (num != 100)
	{
		main();
	}
	return 0;
}