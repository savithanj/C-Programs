/* Program 5:
 * Introduce 1 D Array manipulation and implement 
 * binary search
 */
 
 #include <stdio.h>
 int main()
 {
 	// Define variables
 	int a[20];
 	int n,i,j,temp,key;
 	int first,mid,last;
 	
 	// Accept the size of the array
 	printf("Enter the size of the array :");
 	scanf("%d",&n);
 	
 	// Accept elements into the array
 	printf("Enter %d elements :",n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
 	}
 	
 	// Print the elements of the array before sorting
 	printf("The elements of the array before sorting is ----\n");
 	for(i=0;i<n;i++)
 	{
 		printf("%d\t",a[i]);
 	}
 	
 	/* Sort the array as the data
 	   must be sorted for binary search
 	 */
	 	 
 	for(i=0;i<n-1;i++)
 	{
 		for(j=0;j<n-1-i;j++)
 		{
 			if(a[j]>a[j+1])
 			{
 				temp=a[j];
 				a[j]=a[j+1];
 				a[j+1]=temp;
 			}
 		}
 	}
 	
 	// Display the sorted elements of the array
 	printf("\n\nThe sorted array is ---\n");
 	for(i=0;i<n;i++)
 	{
 		printf("%d\t",a[i]);
 	}
 	
 	// Accept the element to be searched
 	printf("\n\nEnter the element to be searched :");
 	scanf("%d",&key);
 	
 	// search for the element in the sorted array 
 	first=0;
 	last=n-1;
 	
 	while(first <= last)
 	{
 		mid=(first+last)/2;
 		if(key==a[mid])
 		{
 			printf("\nThe element %d is found at location %d\n",key,mid+1);
 			return (0);
 		}
 		else if (key < a[mid])
 		{
 			last = mid-1;
 		}
 		else
 		{
 			first = mid+1;
 		
 		}
 	}
 	
 	printf("\nThe element %d is not found in the array\n",key);
 	return (1);
 }
 
 /* Sample Output:
Sample Output 1: Search for the first element in the array

$ ./a.out
Enter the size of the array :5
Enter 5 elements :87
0
4
2
3
The elements of the array before sorting is ----
87	0	4	2	3	

The sorted array is ---
0	2	3	4	87	

Enter the element to be searched :0

The element 0 is found at location 1

Sample Output 2: Search for the middle element in the array

$ cc prog6.c
$ ./a.out
Enter the size of the array :5
Enter 5 elements :2
3
4
87
0
The elements of the array before sorting is ----
2	3	4	87	0	

The sorted array is ---
0	2	3	4	87	

Enter the element to be searched :4

The element 4 is found at location 4

Sample Output 3: Search for middle element in the array

$ ./a.out
Enter the size of the array :5
Enter 5 elements :2
0
4
3
87
The elements of the array before sorting is ----
2	0	4	3	87	

The sorted array is ---
0	2	3	4	87	

Enter the element to be searched :3

The element 3 is found at location 3


Sample Output 4: Search for the last element in the list

$ ./a.out
Enter the size of the array :5
Enter 5 elements :3
2
4
0
87
The elements of the array before sorting is ----
3	2	4	0	87	

The sorted array is ---
0	2	3	4	87	

Enter the element to be searched :87

The element 87 is found at location 5
*/
