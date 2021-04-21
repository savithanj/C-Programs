#include<stdio.h>
int main()
{
	int n;
	printf("Hello World\n");
	scanf("%d",&n);
	if (n != 999)
	{
		main();
	}
	return 0;
}