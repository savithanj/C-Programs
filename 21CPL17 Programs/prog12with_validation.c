/* 
 * Implement recursive functions for binary to decimal conversion
 */
 
 #include<stdio.h>
 #include<stdbool.h>
 
 int btod(int);		// Prototype of btod() function
 bool  validate_bin_input(int);
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
 	
 	if (!validate_bin_input(binary))  // if (validate_bin_input(binary) == false)
 	{
 		printf("Input is not in binary format....\n");
 		return 2;
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
// Function to check if the input is in binary format or not
// if the input is in binary format the function will return true
// else the function will return false

bool  validate_bin_input(int n)
{
	int temp;
	
	while (n != 0)
	{
		temp = n %10;
		if (temp != 0 && temp != 1)
			return false;
		n = n / 10;		
	}
	return true;
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
