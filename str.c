#include<stdio.h>
void strcopy(char [],char[]);
int main()
{
	char des[100],src[100];
	printf("enter a string:");
	//gets(des);
	gets(src);
	strcopy(des,src);
	printf("des=%s",des);
	return 0;
}
void strcopy(char des[],char src[])
{
	int i;
	for(i=0;src[i]!='\0';i++)
	{
		des[i]=src[i];
	}
	des[i]='\0';
}