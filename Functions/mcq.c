#include<stdio.h>
int main() 
{ 
	int x[]={1, 2, 3, 4, 5, 6, 7, 8}; 
	int i; 

	for(i=2;i<6;i++) 
	x[x[i]]=x[i]; 
	for(i=0; i<8;i++) 
	printf("%d ",x[i]); 
} 
