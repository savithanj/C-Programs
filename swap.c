#include<stdio.h>
void swap(int*,int*);
int main()
{
int a=10;
int b=20;
printf(" befor swap a=%d b=%d\n",a,b);
swap (&a,&b);
printf("after swap a=%d b=%d\n",a,b);
return 0;
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x ;
	*x=*y;
	*y=temp;


}