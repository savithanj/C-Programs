#include<stdio.h>
int swap(int *, int*);

int main()
{
	int x=10, y=20;
	int *a= &x;
	int *b= &y;
	printf("Address in a=%p\n",a);
	printf("Addrss in b=%p\n",b);
	printf("before swap a=%d and b=%d\n", *a, *b);
	swap(a,b);
	printf("After swap a=%d and b=%d\n", *a, *b);
	return 0; 
}

int swap (int *p, int *q)
{
	int temp;
	printf("Address in p=%p\n",p);
	printf("Addrss in q=%p\n",q);
	temp = *p;
	*p = *q;
	*q = temp;
}