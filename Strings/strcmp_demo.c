#include<stdio.h>
#include<string.h>
int strcompare(char [], char []);  // Function Declaration
// lexicographical comparison 
int main()
{
		char s1[50],s2[50]; 
		int n;   
		printf("Enter string1 :");
		scanf("%s",s1);
		printf("Enter string2 :");
		scanf("%s",s2);
		//n = strcompare(s1,s2);
		n=strcmp(s1,s2);
		printf("n=%d\n",n);
		if (n == 0)
			printf("%s = %s", s1,s2);
		else if (n > 0)
			printf("%s > %s", s1,s2);
		else
			printf("%s < %s", s1,s2);
		return 0;
}
int strcompare(char s1[], char s2[])
{
	int i;
	for (i=0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0';i++);
	return (s1[i] - s2[i]);
}