#include<stdio.h>
#include<string.h>

int main()
{
		char s1[50],s2[50]; 
		int n;   
		
		printf("Enter a source string :");
		scanf("%s",s1);

		printf("Enter a destination string :");
		scanf("%s",s2);

		n = strcmp(s1,s2);

		printf("n=%d\n",n);
		if (n == 0)
			printf("s1 = s2");
		else if (n > 0)
			printf("s1 > s2");
		else
			printf("s1 < s2");

		return 0;
}