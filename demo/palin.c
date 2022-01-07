#include <stdio.h>
int main()
{
	int num, rev, rem, temp;
	printf("Enter a number: ");
	scanf("%d", &num);
	if (num < 0)
	{
		printf("Please enter a positive integer...\n");
		return 1;
	}
	rev = 0;
	temp = num;
	while (temp != 0)
	{
		rem = temp % 10;
		rev = rev * 10 + rem;
		temp = temp / 10;
	}
	printf("The reversed number is %d\n", rev);
	if (rev == num)
	{
		printf("%d is a palindrome\n", num );
	}
	else
	{
		printf("%d is not a palindrome\n", num);
	}
	return 0;
}