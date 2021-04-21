#include<stdio.h>
void sum(int);
int a=10;
//void print();

int main()
{
	
	sum(10);
	sum(20);
	sum(30);
	//print(a);
	return 0;
}

void sum(int a)
{
	int register x=0;

	x=x+a;

	printf("x= %d\n",x);

}