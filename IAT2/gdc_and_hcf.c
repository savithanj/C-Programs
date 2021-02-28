// Program to find the GCD and LCM of two numbers

#include<stdio.h>
int main()
{
	int a,b,r,temp,hcf,lcm,aorg,borg;
	printf("Enter two positive numbers :");
	scanf("%d%d", &a, &b);
	if (a < 0 || b< 0)
	{
		printf("Invalid input\n");
		return 1;
	}
	// a must be greater than b. 
	// if b is greater than a, then swap a and b
	if(b > a)
	{
		temp = a;
		a = b;
		b = temp;
	}
	// save the values of a in aorg and b in borg
	aorg = a;
	borg = b;
	do
	{
		r = a % b;
		a = b;
		b = r;
	} while (r != 0);

	hcf = a;
	lcm = (aorg * borg) / hcf;
	printf("HCF(%d,%d) = %d\n",aorg,borg,hcf);
	printf("LCM(%d,%d) = %d\n",aorg,borg,lcm);
	return 0;
}

/* a = 96 b = 404
   after swapping
   a = 404 b=96
   Iteration 1: 404 % 96 = 20
                a=96, b=20
   Iteration 2: 96 % 20 = 16
                a=20, b=16 
   Iteration 3: 20 % 16 = 4
                a=16, b=4
   Iteration 4: 16 % 4 = 0
                a=4, b=0
   HCF = a

	1. a = 4052 b=12576 hcf = 4
	2. 96 and 404 hcf = 4
	3. 26 and 91 hcf =13
	4. 510 and 92 hcf = 2
	5. 336 and 54 hcf = 6
*/



	
