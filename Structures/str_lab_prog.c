/* Program 13:
 * Implement structures to read, write, compute average marks and the 
 * students scoring above and below the average marks for a class 
 * of N students.
 */
  #include<stdio.h>
  int main()
  {
 	struct student
 	{
 		int  id;
 		char name[20];
 		float marks[6];
 		float avg;
 	};
  	int i,n;
  	// Accept the number of records/students
 	printf("Enter the number of Students :");
 	scanf("%d",&n);
	struct student s[n];   // array of n structures
  	// Accept data for all the fields/members of each record
 	printf("Enter %d student details...\n",n);
  	for(i=0;i<n;i++)
 	{
 		printf("\n\nEnter student ID :");	// Student ID
 		scanf("%d",&s[i].id);
 		
 		printf("Enter student name :");	// Studet Name
 		scanf("%s",s[i].name);
 		
		printf("Enter Marks of 6 subjects :");
		for (int j=0; j<6; j++)
		{
			scanf("%f",&s[i].marks[j]);
		}
 	}
  	// Compute the average of each student
 	for(i=0;i<n;i++)
 	{
		 float sum = 0;
		 for(int j=0; j<6;j++)
		 {
			 sum = sum + s[i].marks[j];
		 }
		 s[i].avg = sum/6.0;
	 }

	// Display information about all students
	printf("\n\nID\tName\tAverage\n");
	printf("---------------------------------\n\n");
  	for(i=0;i<n;i++)
 	{
 		printf("%d\t%s\t%.2f\n",s[i].id,s[i].name,s[i].avg);
 	}
	printf("---------------------------------\n\n");

  	// Display student ID, name and average of all students 
 	// who have scored above average marks
 	printf("Students scoring above the average marks....\n");
 	printf("\nID\tName\tAverage\n");
  	for(i=0;i<n;i++)
 	{
 		if(s[i].avg>=35.0)
 		printf("%4d\t%15s\t%5.2f\n",s[i].id,s[i].name,s[i].avg);
 	}
   	// Display student ID, name and average of all students 
 	// who have scored below average marks
   	printf("\n\nStudents scoring below the average marks....\n");
 	printf("\nID\tName\tAverage\n");
  	for(i=0;i<n;i++)
 	{
 		if(s[i].avg<35.0)
 		printf("%-4d%-15s%-5.2f\n",s[i].id,s[i].name,s[i].avg);
 	}
 	return 0;
 }






