// Program for Task 3
#include <stdio.h>
void ArrangeZigZag(int *values,int size){
  int a[size],j=1;
  a[0]=values[size/2];
 for(int i=1;i<=size/2;i++){
   a[j++]=values[size/2-i];
   a[j++]=values[size/2+i];
 }
 for(int i=0;i<j;i++)
 values[i]=a[i];
}
int main()
{
	int numbers[7] = { -3, -2, -1, 0, 1, 2, 3 };
	ArrangeZigZag(numbers, 7);
	for (int i=0;i<7;i++)
	{
		printf("%d ", numbers[i]);
	}
}