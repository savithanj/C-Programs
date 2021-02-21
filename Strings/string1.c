#include<stdio.h>
int main()
{
	char name[50],ch;

	int i=0;

	while(ch != '\n')
	{
		ch = getchar();
		name[i++] = ch;  
		printf("%d",i);
	}
	name[i]='\0';
	
	return 0;
}
