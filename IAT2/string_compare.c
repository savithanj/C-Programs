#include<stdio.h>
#include<string.h>

int main()
{
	char s1[50],s2[50];
	int i;

	printf("Enter two strings:");
	gets(s1);
	gets(s2);

	for (i=0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0';i++);

	if (s1[i] == '\0' && s2[i] == '\0')       
	{
		printf("The two strings are equal\n");
	}
	else if ((s1[i] - s2[i]) > 0)
	{
		printf("s1 > s2\n");
	}
	else
	{
		printf("s1<s2\n");
	}

	printf("return value of strcmp() = %d\n",strcmp(s1,s2));
	return 0;
}