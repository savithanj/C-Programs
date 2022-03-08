/* Program 2:
 * Develop a program to compute the roots of a quadratic equation by 
 * accepting the coefficients. Print appropriate messages.
 */
 
 #include<stdio.h>
 #include<math.h>
 
 int main()
 {	// main starts here
 
 	// Declare the variables
 	float a,b,c,desc;
 	float r1,r2;
 	float realpart,imgpart;
 	
 	// Accept the coefficients a, b and c
 	printf("Enter the coefficients - a, b and c :");
 	scanf("%f%f%f",&a,&b,&c);
 	
 	// Check if the equation is Quadratic or Linear
 	if(a==0)   // if equation is Linear
 	{
 		printf("Coefficient of 'a' cannot be zero....\n");
 		printf("Its a linear equation\n");
 		printf("Please retry again with valid inputs....\n");
 		return 1;
 	}
 	
 	// Compute the discriminant
 	desc=(b * b)-(4.0 * a * c);
 	
 	// if descriminant is zero the roots are real and equal
 	if(desc==0)
 	{
 		printf("The roots are real and equal\n");
 		r1=r2=(-b)/(2.0*a);
 		printf("The two roots are r1=r2=%f\n",r1);
 	}
 	else if(desc>0)    // if descriminant greater than zero roots are real and distinct
 	{
 		printf("The roots are real and distinct\n");
 		
 		r1=(-b+sqrt(desc))/(2.0*a);
 		r2=(-b-sqrt(desc))/(2.0*a);
 		
 		printf("The roots are r1=%f and r2=%f\n",r1,r2);
 	}
 	else   // descriminant is less than zero, roots are imaginary
 	{
 		printf("The roots are imaginary\n");
 		
 		realpart=(-b)/(2.0*a);
 		imgpart=sqrt(-desc)/(2.0*a);
 		
 		printf("The roorts are \n");
 		printf("r1 = %f + i %f \n",realpart,imgpart);
 		printf("r2 = %f - i %f \n",realpart,imgpart);
 	}
 	return 0;
 }
  
 
 /* In this program we are including math.h header file.
    We have to link our program externally with math library.
    For this use the command as shown 
    $cc prog2.c -lm
    
    -l stands for link and m stands for math library.
 */
 /* Sample Output:
 1.
$ cc prog2.c -lm
$ ./a.out
Enter the coefficients of a, b and c :1 1 1
The roots are imaginary
The roorts are 
r1=-0.500000 + i 0.866025
r2=-0.500000 - i 0.866025

2.
$ ./a.out
Enter the coefficients of a, b and c :1 2 1
The roots are real and equal
The two roots are r1=r2=-1.000000

3.
$ ./a.out
Enter the coefficients of a, b and c :1 6 5
The roots are real and distinct
The roots are r1=-1.000000 and r2=-5.000000

4.
$ ./a.out
Enter the coefficients of a, b and c :0 5 3
Coefficient of a cannot be zero....
Please try again....

5.
$ ./a.out
Enter the coefficients of a, b and c :1 -1 1
The roots are imaginary
The roorts are 
r1=0.500000 + i 0.866025
r2=0.500000 - i 0.866025

6.
$ ./a.out
Enter the coefficients of a, b and c :1 2 3
The roots are imaginary
The roorts are 
r1=-1.000000 + i 1.414214
r2=-1.000000 - i 1.414214

*/