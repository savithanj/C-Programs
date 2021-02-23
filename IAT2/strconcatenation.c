#include<stdio.h>
int main()
{
		char des[50],src[50];  
		int i,j;  
		printf("Enter a source string :");
		gets (src);
		printf("Enter a destination string :");
		gets (des);

		for(i=0;des[i]!='\0';i++);    

		for(j=0;src[j] != '\0';j++,i++)
		{
			des[i] = src[j];
		}
		des[i] = '\0';
		printf("concatenated string is  %s\n",des);
		return 0;
}