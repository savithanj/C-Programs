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
	struct student s[] = { 
							{"Sai Krishna",
	                     	 "N-34",
						 	 'N',
							 4343.5
						    },
							{"Lakshmi",
	                     	 "N-36",
						 	 'N',
							 999
						    }
						 };
	/*int a[][]={  
		          {1,2,3,4},
				  {5,6,7,8}
				};
	

	//printf("Enter the number of student :");
	//scanf("%d", &n);

	for (int i=0;i<n;i++)
	{
		printf("Enter name: ");
		scanf("%s",s1[i].name);

		printf("Enter id : ");
		scanf("%s",s1[i].id);

		printf("Enter section : ");
		scanf(" %c", &s1[i].section);

		printf("Enter total :");
		scanf("%f", &s1[i].total);
	}*/
	int n=2;
	printf("NAME\tID\tSECTION\tTOTAL\n\n");
	printf("--------------------------------\n");
	for(int i =0;i<n;i++)
	{
		printf("%15s\t",s[i].name);
		printf("%10s\t",s[i].id);
		printf("%4c\t", s[i].section);
		printf("%10f\n", s[i].total);
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

