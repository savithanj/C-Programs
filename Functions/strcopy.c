#include<stdio.h>
void strcopy(char [], char[]);

int main()
{
	char s[]="CMRIT";
	char d[50];
	strcopy(d,s);
	printf("d=%s\n",d);
	return 0;
}

void strcopy(char des[],char src[])
{
	int i;
	for(i=0;src[i] != '\0';i++)
	{
		des[i] = src[i];
	}
	des[i] = '\0';
}