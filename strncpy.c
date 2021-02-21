#include<stdio.h>
#include<string.h>

int main()
{
		char des[50];
		char src[50]="information";       

		//printf("Enter a string :");
		//scanf("%[^\n]s",src);
		strncpy(des,src,100);

		printf("des = %s\n",des);
		printf("src = %s\n",src);

		return 0;
}