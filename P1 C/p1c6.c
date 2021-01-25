// 6.	Write a C program to input a character, integer, decimal (Floating point number) values and print it.

#include<stdio.h>

int main()
{
  char c;
  int i;
  float f;

  printf("Enter a character, integer and a real number: ");
  scanf("%c%d%f", &c, &i, &f);

  printf("c = %c\n",c);
  printf("i = %d\n",i);
  printf("f = %f\n",f); 

  //printf("c = %c\ni = %d \nf = %f\n",c,i,f);

  return 0;
}