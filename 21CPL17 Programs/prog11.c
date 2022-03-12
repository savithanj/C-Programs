/*
 * Program 11
 * Develop a program using pointers to compute the sum, mean
 * Standard Deviation of all elements stored in an array of n
 * real numbers.
 */
 
 #include <stdio.h>
 #include <math.h>
 
 int main()
 {
 	int i, n;
 	float a[10],sum,mean,var,sd;
 	float *p;       // p is a pointer to float data
 	
 	// Accept number of elements - n
 	printf("Enter Number of elements:");
 	scanf("%d", &n);
 	
 	// Accept n real numbers
 	printf("Enter %d numbers :",n);
 	p = a;		// pointer p points to first element of a
 	for (i=0;i<n;i++)
 	{
 		scanf("%f",p);
 		p++;	// pointer p points to the next element of a
 	}
 	
 	// Compute Sum of array elements
 	sum = mean = var = sd = 0.0;
 	p = a;		// pointer p points to the first element of a
 	for(i=0;i<n;i++)
 	{
 		sum = sum + (*p);
 		p++;

		
 	}
 	
 	// Compute mean
 	mean = sum / (float) n;
 	
 	// Compute Variance
 	p = a;
 	for(i=0;i<n;i++)
 	{
 		var = var + pow( (*p - mean),2);
 		p++;
 	}
 	var = var / (float) n;
 	
 	// Compute Standard Deviation
 	sd = sqrt(var);
 	
 	// print sum, mean and standard deviation
 	printf("Sum = %f\n", sum);
 	printf("Mean = %f\n", mean);
 	printf("Standard Deviation = %f\n", sd);
 	
 	return 0;
 }
 
 /*
 Sample Output 1:
 $ cc prog11.c -lm
 $ ./a.out
Enter Number of elements:5   
Enter 5 numbers :1
2
3
4
5
Sum = 15.000000
Mean = 3.000000
Standard Deviation = 1.414214
Sample Output 2:
$ ./a.out
Enter Number of elements:3
Enter 3 numbers :55
88
22
Sum = 165.000000
Mean = 55.000000
Standard Deviation = 26.944387
$
*/  
