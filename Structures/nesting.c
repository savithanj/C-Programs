// Program to illustrate nesting of structures
#include<stdio.h>
int main()
{
	struct employee
	{
		char ename[30];
		char eid[30];
		float salary;
		struct date
		{
			int date;
			int month;
			int year;
		}doj; 
	};
	
	typedef struct employee EMP;

    EMP e1 = {
		   "Kumar",
		   "2001a001",
		   150000,
		   {
			   1,
			   1,
			   2021
		   }
	};

	printf("Employee name = %s\n",e1.ename);
	printf("Employee ID = %s\n",e1.eid);
	printf("Employee Salary = %f\n",e1.salary);
	printf("Employee doj = %d/%d/%d\n",e1.doj.date, e1.doj.month,e1.doj.year);

	return 0;
}