#include<stdio.h>
#include<string.h>

int main()
{
	char s[50];
	strncpy(s, "CMRIT BANGALORE", 7);
	printf("%s",s);
	return 0;
}


	
	
	/*
	char str1[50]= "CMRIT ";
	char str2[50] = " BANGALORE";
	strcat(str1,str2);
	printf("%s\n", str1);




	char s[]= "CMRIT BANGALORE";
	printf("length of s = %lu\n", strlen(s));

	strcpy(s, "C Program");
	printf("%s", s);

	printf("%s\n", strcat("CMRIT", "BANGALORE")); 
	return 0; 
}*/






















	/* Strings are array of characters terminated by a null character ('\0').
	The syntax for declaring a string:
	char variable_name[size];
	Eg: char s[50];

	Initializing strings:
	char s[50] = "CMRIT";  or    
	char s[] = "CMRIT";
	declaration of string;
	char s[50];
	The five string manipulation functions are
	1. strlen()
	2. strcpy()
	3. strcat()
	4. strcmp()
	5. strncpy()


	1. strlen(): 
	The function strlen returns the length of the string. 
	Syntax:
	int strlen (string);

	Eg:

	int len;
	len = strlen("CMRIT");
	printf("len = %d\n", len);

	output:
	len = 5

	or
	char s[]= "CMRIT BANGALORE";
	printf("length of s = %d\n", strlen(s));
    output:
	length of s = 15

    2. strcpy():  
	The function strcpy will copy contents of one string to another.

	Syntax: strcpy(destination_string, source_string);

	the contents of source_string will be copied to destination_string.

	Eg. strcpy(str, "CMRIT");
	printf("%s", str);
	output: CMRIT

	3. strcat():
	This function concatenates one stirng to another.

	syntax:
	strcat(string1, string2);

	Eg:
	printf("%s\n", strcat("CMRIT", "BANGALORE");

	4. strcmp()
	This function compares two strings.
	it returns 0 if both both string are equal
	it returns a positive number if string 1 > string 2
	it returns a negative number it string1 < string2.

	Syntax: 
	int strcmp(string1, string2);

	Eg:
	int res;
	res = strcmp("CMRIT", "cmrit");

	if (res == 0)
	{
		printf("Both strings are equal\n");
	}
	else if (res > 0)
	{
		printf("Both string1 > string2\n");
	}
	else
	{
		printf("string1 < string2\n");
	}
	














*/