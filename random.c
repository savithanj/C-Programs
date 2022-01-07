#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int PartA = (rand() % (7 - 2 + 1)) + 2;
	int PartB = (rand() % (15 - 8 + 1)) + 8;
	printf("Part A = %d and Part B = %d\n", PartA, PartB);
}