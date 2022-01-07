 #include<stdio.h>
 int btod(int);		// Prototype of btod() function
  int main()
 {
 	int binary, decimal;
 	 	// Accept input in binary format
 	printf("Enter binary input :");
 	scanf("%d", &binary);
 	 	// Invokd botd() to convert binary to decimal
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
 
 