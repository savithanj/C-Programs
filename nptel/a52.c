#include<stdio.h>
int main()
{
	if (( 0 && 1) || (1 && -1))
	{
		printf("True");
		break;
	}
	else
	{
		printf("False");
	}
	return 0;
}