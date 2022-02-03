/* Lab Program 5
 * An electricity board charges the following rates for the use of electricity: 
 * for the first 200 units 80 paise per unit: 
 * for the next 100 units 90 paise per unit: 
 * beyond 300 units Rs 1 per unit. 
 * All users are charged a minimum of Rs. 100 as meter charge. 
 * If the total amount is more than Rs 400, then an additional surcharge 
 * of 15% of the total amount is charged. Write a program to read the name
 * of the user, number of units consumed and print out the charges.
 */
 
#include <stdio.h>
#define METER_CHARGE 100    // Syntax: #define <constant_name_in_CAPS> <value> 
int main()
 {
 	float units,total;
 	char name[20];
 	
 	// Accept Customer's name
 	printf("Enter the name : ");
	scanf("%s",name);
	// Accept No. of units consumed
	printf("Enter the units : ");
	scanf("%f",&units);	
	if (units < 0)
	{
		printf("Invalid Input\n");
		printf("Retry with valid input....\n");
		return 1;
	}	
	if(units <= 200)		// Charge 80 paise per unit for the first 200 units
	{
		total = (0.8 * units) + METER_CHARGE;
	}
	else if(units <= 300)	// Charge 80 paise per unit for the first 200 units and 
	{				// 90 paise per unit for the next 100 units 
		total = (0.8 * 200) + 0.9*(units-200) + METER_CHARGE;
	}
	else 				//Charge 80 paise per unit for the first 200 units, 
	{				// 90 paise per unit for the next 100 units and
					// one rupee per unit for all units above 300
		total = (0.8 * 200) + (0.9 * 100) + (1 * (units - 300)) + METER_CHARGE; 
      
	}
	if(total>400)			
	{
		total = total + (total * 0.15);	// Add additional surcharge of 15 percent of total amount
	}
	// Display the electricity bill
	printf("\n\nELECTRICITY BILL\n");
	printf("----------------\n");
	
	printf("\nName : %s\n",name);
	printf("No. of units: %.2f\n",units);
	printf("Total Bill Amount: Rs. %.2f\n",total);
	printf("----------------\n");
	return 0;
}

/* Sample Outputs:
1.
$ cc prog5.c
$ ./a.out
Enter the name : Anitha
Enter the units : 0


ELECTRICITY BILL
----------------

Name : Anitha
No. of units: 0.00
Total Bill Amount: Rs. 100.00
----------------

2.
$ ./a.out
Enter the name : Harish
Enter the units : 167


ELECTRICITY BILL
----------------

Name : Harish
No. of units: 167.00
Total Bill Amount: Rs. 233.60
----------------

3.
$ ./a.out
Enter the name : Anuradha
Enter the units : 598


ELECTRICITY BILL
----------------

Name : Anuradha
No. of units: 598.00
Total Bill Amount: Rs. 745.20
----------------

4.
$ ./a.out
Enter the name : Rajeev Gupta
Enter the units : 876


ELECTRICITY BILL
----------------

Name : Rajeev Gupta
No. of units: 876.00
Total Bill Amount: Rs. 1064.90
----------------

*/
