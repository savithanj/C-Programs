#include<stdio.h>
int g(int x, int y)
{
	switch(x-y)
	{
		case 0: return x;
		case 4: y = y + 1;
				break;
		case 7: x = x - 1;
				break;
		case 9: return x*y;
		case 3: y = x + 9;
		default: return y - x;
	}
	return y;
}

int main()
{
	printf("%d\n",g(9,5));
	return 0;
}