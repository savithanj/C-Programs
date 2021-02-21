// Program to compute roots of quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,root1,root2,rpart,ipart;
	printf("Enter coefficients a b and c:");
	scanf("%f%f%f",&a,&b,&c);
	if (a==0)
	{
		printf("Its a linear equation.\n Please enter valid input.\n");
		return 1;
	}
	d = (b*b)-(4.0*a*c);
	if (d == 0) // The roots are real and equal
	{
		root1 = root2 = -b / (2.0 * a);
		printf("The roots are real and equal\n");
		printf("Root1 = %f\n", root1);
		printf("Root2 = %f\n", root2);
	}
	else if (d > 0) // The roots are real and distinct
	{
		root1 = (-b + sqrt(d)) / (2.0 * a);
		root2 = (-b - sqrt(d)) / (2.0 * a);
		printf("The roots are real and distinct\n");
		printf("Root1 = %f\n", root1);
		printf("Root2 = %f\n", root2);
	}
	else // The roots are imaginary
	{
		rpart = -b / (2.0 * a);
		ipart = sqrt(-d) / (2.0 * a);
		printf("The roots are imaginary\n");
		printf("Root1 = %f + i %f\n", rpart, ipart);
		printf("Root2 = %f - i %f\n", rpart, ipart);
	}
	return 0;
}

