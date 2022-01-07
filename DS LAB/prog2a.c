/* Design, Develop and Implement a Program in C for the following operations on Strings
a. Read a main String (STR), a Pattern String (PAT) and a Replace String (REP)
b. Perform Pattern Matching Operation: 
Find and Replace all occurrences of PAT in STR with REP if PAT exists in STR. Report suitable messages in case PAT does not exist in STR Support the program with functions for each of the above operations. Don’t use Built-in functions.
*/

#include <stdio.h>
# define MAX 50

char str[MAX], pat[MAX], rep[MAX];

void read()
{
	printf("Enter a string : ");
	scanf("%s", str);

	printf("Enter a string : ");
	scanf("%s", pat);

	printf("Enter a string : ");
	scanf("%s", rep);
}

void pattern_matching()
{
	int i,j,strlen,patlen,count;

	strlen=0;
	patlen=0;
	count=0;

	for (i=0; str[i] != '\0';i++)
	strlen++;

	for (i=0; pat[i] != '\0';i++)
	patlen++;

	for (i=0;i<strlen;i++)
	{
		j=0;
		while(str[i+j]==pat[j] && j < patlen)
		{
			j++;
		}
		if(j == patlen)
		{
			count++;

			for(j=0;j<patlen;j++)
			{
				str[i+j] = rep[j];
			}
			i = i + patlen-1;
		}
	}

	if (count != 0)
	{
		printf("The pattern %s is found %d times.\n", pat, count);
		printf("The string after replacing is %s\n", str);
	}
	else
	{
		printf("The pattern %s is not found in the string %s\n", pat, str);
	}	
}

int main()
{
	read();
	pattern_matching();
	return 0;
}

