#include<stdio.h>

int main()
{
	struct student
	{
		char name[30];
		float subject[3];
	};

	struct student s[3] = {
							{"xxxx", {98,99,100}},
							{"yyyy", {80,88,89}},
							{"zzzz", {70,77,79}}
							
						  };
	for(int i=0;i<3;i++)
	{
		printf("%s\t",s[i].name);
		for(int j=0;j<3;j++)
		{
			printf("%f\t",s[i].subject[j]);
		}
		printf("\n");
	}
	return 0;
}