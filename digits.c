#include<stdio.h>
int main()
{
	int i = 1200,rem;
	int count = 0;
	while (i!=0)
	{
		rem=i%10;
		if (rem != 0 || rem != 1)
		{
			break;
		}
		i = i /10;
		count++;
	}

	for (int k=0;k<count;k++)

	printf("Count = %d\n",count);
	return 0;
}