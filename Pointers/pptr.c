#include<stdio.h>
int main()
{
	int a[3][3] = { {1,2,3},
	                {4,5,6},
					{7,8,9}
				  };

	int **ptr;

	*ptr = a[0];

	printf("a is pointing to address (address of first row) %p\n", a);
	printf("address of second row = %p\n", a[1]);
	printf("address of third row = %p\n", a[2]);
	return 0;

}