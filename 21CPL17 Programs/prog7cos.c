/* Program 7:
 * Develop a Program to compute cos(x) using Taylor series approximation.
 * Compare your result with the built-in Library function. Print both 
 * the results with appropriate messages.
 *
 * Taylor Series: Cos (x) = 1 - x2 / 2! + x4 / 4! - x6 /6! ...
 * 
 */
 
 #include<stdio.h>
 #include<math.h>
 
 #define PI 3.142857
 
 int main()
 {
 	float x,degree,nume,deno,sum,term;
 	int i;
 	
 	/* Accept value of x in degree */
 	printf("Enter degree:");
 	scanf("%f",&degree);
 	
 	// Convert degree into radians
 	x=degree*(PI/180.0);			
 	
 	// Initialize values of sum, nume, deno and i variables
 	sum=0;
 	nume=x;
 	deno=1;
 	i=0;
	term = 1;
 	
 	do
 	{
 		// Add term value to sum
 		sum = sum + term;

		i = i + 2;
 		// compute next numerator and denominator values
 		nume = -nume * x;

 		deno=deno * i * (i-1);
 		// compute term
 		term = nume / deno;
 	} while ( fabs ( term ) >= 0.00001);
 	
 	printf("Computed value of cos(%.2f)=%.2f\n",degree,sum);
 	
 	printf("Value from library function is cos(%.2f) = %.2f\n",degree,cos(x));
 	
 	return 0;
 }
 	
 	
/*
Sample Output:
cc prog7cos.c -lm
./a.out
Enter degree:0
Computed value of cos(0.00)=1.00
Value from library function is cos(0.00) = 1.00
./a.out
Enter degree:30
Computed value of cos(30.00)=0.87
Value from library function is cos(30.00) = 0.87
./a.out
Enter degree:45
Computed value of cos(45.00)=0.71
Value from library function is cos(45.00) = 0.71
./a.out
Enter degree:60
Computed value of cos(60.00)=0.50
Value from library function is cos(60.00) = 0.50
*/
