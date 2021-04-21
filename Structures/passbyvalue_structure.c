#include<stdio.h>
#include<string.h>

struct student{
		char name[30];
		int roll_no;
	};
void display(struct student);
int main()
{
	struct student s;
	printf("Enter the name and the roll number :");
	scanf("%s%d",s.name,&s.roll_no);
	display(s);
	printf("After function call\n");
	printf("Name: %s\n",s.name);
	printf("Roll No : %d\n",s.roll_no);
	return 0;
}

void display(struct student stu)
{
	printf("In function\n");
	strcpy(stu.name,"cmrit");
	stu.roll_no = 1000;
	printf("Name: %s\n",stu.name);
	printf("Roll No : %d\n",stu.roll_no);
}