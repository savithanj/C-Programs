// Program to demonstrate the usage of structure
#include <stdio.h>
struct student
	{
		char name [30];    // member of the structure
		char id[30];       // member of the structure
		char section;      // member of the structure
		float total;       // member of the structure
	};
int main()
{
	// Declaring a variable s1 of type struct student
	
	int n;
	printf("Enter the number of student :");
	scanf("%d", &n);

	struct student s[n];

	for (int i=0;i<n;i++)
	{
		printf("Enter name: ");
		scanf("%s",s[i].name);

		printf("Enter id : ");
		scanf("%s",s[i].id);

		printf("Enter section : ");
		scanf(" %c", &s[i].section);

		printf("Enter total :");
		scanf("%f", &s[i].total);
	}
	printf("\nNAME\tID\tSECTION\tTOTAL\n");
	printf("--------------------------------\n");
	for(int i =0;i<n;i++)
	{
		printf("%s\t",s[i].name);
		printf("%s\t",s[i].id);
		printf("%c\t", s[i].section);
		printf("%f\n", s[i].total);
	}
	
	return 0;
}
/*
s1[0].name
s1[0].id
s1[0].section
s1[0].total

s1[1].name
s1[1].id
s1[1].section
s1[1].total

s1[2].name
s1[2].id
s1[2].section
s1[2].total

*/

