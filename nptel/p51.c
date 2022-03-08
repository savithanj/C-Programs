#include<stdio.h>
int main()
{
	int n, count, temp;
	scanf("%d", &n);

	temp = n;
	count = 0;
	while (temp != 0)
		{
			count++;
			temp = temp % 10;
		}
	printf("count = %d\n", count);
	return 0;
}