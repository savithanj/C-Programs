#include <stdio.h>
int length_str(char[]);
int main ()
{
	int i;
	char str[100];
	printf("enter the string\n");
	scanf("%s",str);
	i=length_str(str);
	printf("\n length of the string=%d\n",i);
	return 0;
}
int length_str (char s[100])
{
	int i;
	for (i=0;s[i]!='\0';i++);
	return i;
}