// 19.	Write a C program to enter temperature in Celsius and convert it into Fahrenheit and print.

#include<stdio.h>

int main()
{
	float cel, far;

	printf("Enter temperature in Celsius :");
	scanf("%f", &cel);

	// fahrenheit =  (0°C × 9/5) + 32
	far = (cel * (9.0/5.0)) + 32;
	printf("%f degree celcius = %f degree fahrenheit\n",cel,far);

	return 0;
}