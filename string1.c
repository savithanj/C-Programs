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
i=0  name[0] = 'c'
i=1 name [1] = 'm'
i=2 name [2] = 'r'
i=3