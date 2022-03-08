/* 
 * Implement recursive functions for binary to decimal conversion
 */
 
 #include<stdio.h>
 
 
 int btod(int);		// Prototype of btod() function
 
 int main()
 {
 	int binary, decimal;
 	
 	// Accept input in binary format
 	printf("Enter binary input :");
 	scanf("%d", &binary);
 	
 	if(binary < 0)
 	{
 		printf("Invalid Input. \n");
 		return 1;
 	}
 	
 	
 	// Invoke botd() to convert binary to decimal
 	decimal = btod(binary);
 	
 	// Print the decimal equivalent of binary
 	printf("Decimal equivalent = %d\n", decimal);
 	
 	return 0;
 }
 
 int btod(int bin)
 {
 	if (bin == 0)
 	{
 		return 0;
 	}
 	else
 	{
 		return (bin % 10 + btod(bin/10) * 2);
 	}
 }

 /*
 Sample output:
$cc bin2dec.c
$ ./a.out
Enter binary input :101
Decimal equivalent = 5

$ ./a.out
Enter binary input :10
Decimal equivalent = 2

$ ./a.out
Enter binary input :1010
Decimal equivalent = 10
$ 
*/
