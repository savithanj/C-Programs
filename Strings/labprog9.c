/* Program 9
 * Write functions to implement string operations such as compare, 
 * concatenate, string length. Convince the parameter passing techniques.
 */
 
 #include <stdio.h>
  
 // Prototypes for the user defined functions
 int str_length(char []); 
 int str_compare(char [], char []);
 void str_concat(char [], char []);
 
 int main()
 {
 	// Declare the variables
 	char str[50];
 	char str1[50], str2[50];
 	char str_des[100], str_src[50];
 	
 	int length, comp_res;
 	
 	// Accept the string from the user to find the length 
 	printf("\nEnter a string :");
 	gets(str);
 	
 	// Invoke the function to find the length of the string
 	length = str_length(str);
 	
 	// Print the length of the string
 	printf("The length of %s is %d\n",str,length);
 	
 	// Accept two strings to compare
 	printf("\nEnter two strings for string compare :");
 	gets(str1);
 	gets(str2);
 	
  	// Invoke string compare function to compare the str1 and str2 strings
 	comp_res=str_compare(str1,str2);
 	
 	if (comp_res < 0)
 	{
 		printf("String \"%s\" is less than string \"%s\"\n",str1,str2);
 	}
 	else if (comp_res == 0)
 	{
 		printf("String \"%s\" is same as string \"%s\"\n",str1,str2);
 	}
 	else
 	{
 		printf("String \"%s\" is greater than string \"%s\"\n", str1,str2);
 	}
 	
 	// Accept two strings for string concatenation
 	printf("\nEnter two strings for string concatenation :");
 	gets(str_des);
 	gets(str_src);
 
 	// Invoke string concatenation function 
 	str_concat(str_des,str_src);
 	
 	// Print the concatenated string
 	printf("The string after concatenation is \"%s\"\n", str_des);
 	return 1;
 }
 
 int str_length(char s[])
 {
 	int i;
 	for(i=0;s[i]!='\0';i++)
		{
			// empty body
		}
 	return i;
 }
 
 int str_compare(char s1[], char s2[])
 {
 	int i;
 	for(i=0;s1[i] != '\0' && s2[i] != '\0';i++)
 	{
 		if (s1[i] != s2[i])
 		{
 			return (s1[i] - s2[i]);
 		}
 	}
 	
 	return (s1[i] - s2[i]);
 }
 
 void str_concat(char des[], char src[])
 {
 	int i,j;
 	for(i=0;des[i] != '\0';i++)
		{
			
		}
 	
 	for(j=0;src[j] != '\0';i++,j++)
 	{
 		des[i] = src[j];
 	}
 	des[i] = '\0';
 }

/* Sample Output:
1.
$ cc prog10.c
$ ./a.out

Enter a string :rainbow
The length of rainbow is 7

Enter two strings for string compare :rain
rainbow
String "rain" is less than string "rainbow"

Enter two strings for string concatenation :rain
bow
The string after concatenation is "rainbow"

2.
$ ./a.out

Enter a string :thinkpad
The length of thinkpad is 8

Enter two strings for string compare :thinkpad
think
String "thinkpad" is greater than string "think"

Enter two strings for string concatenation :think
pad
The string after concatenation is "thinkpad"
*/

 