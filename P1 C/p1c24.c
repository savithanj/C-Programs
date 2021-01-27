// 24.	Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.

#include <stdio.h>
int main()
{
	int amount,twotho, fivehun, twohun, hun, fifty, twenty, ten,a;

	printf("Enter amount :");
	scanf("%d", &amount);

	a = amount;
	twotho = amount / 2000;
	amount = amount % 2000;

	fivehun = amount / 500;
	amount = amount % 500;

	twohun = amount / 200;
	amount = amount % 200;

	hun = amount / 100;
	amount = amount % 100;

	fifty = amount / 50;
	amount = amount % 50;

	twenty = amount / 20;
	amount = amount % 20;

	ten = amount  / 10;
	amount = amount % 10;

	printf("Amount %d = %d 2000's %d 500's %d 200's %d 100's %d 50's %d 20's %d 10's\n", a, twotho, fivehun, twohun, hun, fifty, twenty, ten);

	return 0;
}