// 34.	Write a C program to flip all bits of a number using bitwise operator and print result.

/* To flip all bits of a binary number C language has given bitwise complement ~ operator.

Bitwise complement ~ evaluates complement of the operand bit. It evaluate to 1 if corresponding bit of the operand is 0 otherwise evaluate to 0.

Therefore to flip all bits of a number say num, you can use ~num.
*/
#include <stdio.h>

int main()
{
    int num, flippedNumber;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    flippedNumber = ~num;

    printf("Original number = %d (in decimal)\n", num);
    printf("Number after bits are flipped = %d (in decimal)", flippedNumber);

    return 0;
}