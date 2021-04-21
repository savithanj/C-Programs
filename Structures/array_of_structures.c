#include<stdio.h>

struct student
	{
		char name[30];
		int marks;
	};

void read(struct student[],int);
void display(struct student[],int);

int main()
{
	int n;
	printf("Enter number of students :");
	scanf("%d", &n);

	struct student s[n];

	read(s,n);
	display(s,n);
	return 0;
}

void read (struct student stu[], int num)
{
	for (int i=0;i<num;i++)
	{
		printf("Enter name and marks :");
		scanf("%s%d",stu[i].name, &stu[i].marks);
	}
}

void display(struct student stu[],int num)
{
	for (int i=0;i<num;i++)
	{
		printf("%s\t%d\n",stu[i].name, stu[i].marks);
	}
}