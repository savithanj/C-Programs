#include <stdio.h>

int main ( ){
char inChar = 'A' ;
switch ( inChar ) {
case 'A' : printf ("Choice A\ n") ;
case 'B' :
case 'C' : printf ("Choice B") ;
case 'D':
case 'E':
default : printf ( " No Choice" ) ; }
}