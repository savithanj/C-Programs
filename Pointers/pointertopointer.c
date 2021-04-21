#include<stdio.h>
int main()
{
	int a=10;
	int *ptr = &a;
	int **pptr = &ptr;

	printf("a=%d\n",a);
	printf("*ptr = %d\n",*ptr);
	printf("**pptr= %d\n", **pptr);

	printf("address of a = %p\n", &a);
	printf("value of ptr (same as address of a) = %p\n", ptr);
	
	printf("address of ptr = %p\n", &ptr);
	printf("value of pptr (same as address of ptr) = %p\n", pptr);
	return 0;
}