/* Program 7:
 * Develop a Program to compute Sin(x) using Taylor series approximation.
 * Compare your result with the built-in Library function. Print both 
 * the results with appropriate messages.
 *
 * Taylor Series:
 * Sin(x) = x - x3 / 3! + x5 / 5! - x7 / 7! + x9 / 9! - ......
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
 	deno=1.0;
 	i=1;
 	
 	do
 	{
 		// compute term
 		term = nume / deno;

 		// Add term value to sum
 		sum = sum + term;

 		i = i + 2;
 		// compute next numerator and denominator values
 		nume = -nume * x * x;

 		deno=deno * i * (i-1);
 		// printf("Term=%f\n",term);
 	} while ( fabs ( term ) >= 0.00001);
 	
 	printf("Computed value of Sin(%f)=%f\n",degree,sum);
 	
 	printf("Value from library function is sin(%f) = %f\n",degree,sin(x));
 	
 	return 0;
 }
 	
 	
/*
Sample Output:
1.
$cc prog7.c -lm
$./a.out
Enter degree:60
Computed value of Sin(60.000000)=0.866236
Value from library function is sin(60.000000) = 0.866236

2.
$ ./a.out
Enter degree:30
Computed value of Sin(30.000000)=0.500182
Value from library function is sin(30.000000) = 0.500182
	
3.
$ ./a.out
Enter degree:90
Computed value of Sin(90.000000)=1.000000
Value from library function is sin(90.000000) = 1.000000

4.
$ ./a.out
Enter degree:45
Computed value of Sin(45.000000)=0.707330
Value from library function is sin(45.000000) = 0.707330

5.
$ ./a.out
Enter degree:0
Computed value of Sin(0.000000)=0.000000
Value from library function is sin(0.000000) = 0.000000
*/
