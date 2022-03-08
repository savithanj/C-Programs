/* 
 * Program 8:
 * Develop a program to sort the given set of N numbers using Bubble sort.
 */
 
 #include<stdio.h>
 
 int main()
 {
 	int a[20],n,i,j,temp;
 	
 	// Accept array size
 	printf("Enter the number of elements :");
 	scanf("%d",&n);
 	
 	// Accept n elements into the array
 	printf("Enter %d integers :",n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
 	}
 	
 	// Sort the array elements
 	
 	for(i=0;i<n-1;i++)
 	{
 		for(j=0;j<n-1-i;j++)
 		{
 			if(a[j] > a[j+1])
 			{
 				temp=a[j];
 				a[j]=a[j+1];
 				a[j+1]=temp;
 			}
 		}
 	}
 	
 	// print the sorted array
 	printf("The sorted array is ....\n");
 	for(i=0;i<n;i++)
 	{
 		printf("%d\t",a[i]);
 	}
 	
 	printf("\n");
 	return 0;
 }
 
/*  Sample Output:
1.
$ cc prog8.c
$ ./a.out
Enter the number of elements :5
Enter 5 integers :1
3
4
2
5
The sorted array is ....
1	2	3	4	5	

2.
$ ./a.out
Enter the number of elements :6
Enter 6 integers :23
55
10
-10
0
-400
The sorted array is ....
-400	-10	0	10	23	55	


*/
