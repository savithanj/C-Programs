/* Design, Develop and Implement a Program in C for the following operations on Strings
a. Read a main String (STR), a Pattern String (PAT) and a Replace String (REP)
b. Perform Pattern Matching Operation: 
Find and Replace all occurrences of PAT in STR with REP if PAT exists in STR. Report suitable messages in case PAT does not exist in STR Support the program with functions for each of the above operations. Don’t use Built-in functions.
*/

#include <stdio.h>
# define MAX 50

char str[MAX], pat[MAX], rep[MAX],res[MAX];

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
	int i,j,k,l,m,count,found;

	i=j=k=l=m=count=found=0;

	while(str[i] != '\0')
	{
		if(str[j] == pat[k])  // matching
		{
			j++;
			k++;
			if (pat[k] == '\0')   // pattern found
			{
				found = 1;
				count ++;
				for(l=0;rep[l] != '\0'; l++,m++)  //copy replace string in res string
				{
					res[m] = rep[l];
				}
				k=0;
				i=j;
			}
		}
		else
		{
			res[m]= str[i];
			m++;
			i++;
			j=i;
			k=0;
		}
	}
	res[m] = '\0';
		
	if (count != 0)
	{
		printf("The pattern %s is found %d times.\n", pat, count);
		printf("The string after replacing is %s\n", res);
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

