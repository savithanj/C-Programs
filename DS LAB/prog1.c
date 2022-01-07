#include<stdio.h>
#include<stdlib.h>

int n;

/*Function definition for creating an array of n elements.*/
void create ( int a[] )
{
	int i;
	printf ( "\nEnter the number of elements: " );
	scanf ( "%d", &n );
	printf ( "\nEnter the elements: " );
	for ( i = 0 ; i < n ; i++ )
	scanf ( "%d", &a [ i ] );
}

/*Function definition for displaying array elements.*/
void display ( int a[] )
{
	int i;
	if (n==0)
	{
		printf("Warning: The array is empty....\n");
		printf("Press any key to continue....\n");
		char c1,c2; 
		scanf("%c%c", &c1,&c2);
		return;
	} 
	printf ( "\nThe array elements are: " );
	for ( i = 0 ; i < n ; i++ )
	printf ( "\t%d", a [ i ] );
}

/*Function to insert an element at a given position.*/
void insert ( int a[] )
{
	int pos, elem, i;
	if (n==0)
	{
		printf("Warning: The array is not yet created ....\n");
		printf("Press any key to continue....\n");
		char c1,c2; 
		scanf("%c%c", &c1,&c2);
		return;
	} 
	
	printf ( "\nEnter the valid position to insert an element: " );
	scanf ( "%d", &pos );
	printf ( "\nEnter the element that you want to insert: " );
	scanf ( "%d", &elem );
	for ( i = n - 1 ; i >= pos - 1 ; i-- )
	a [ i + 1 ] = a [ i ]; /* Copy the element in ith location to i+1 location.*/
	a [ pos - 1 ] = elem; /*Insert the element.*/
	n++; /*Increment the number of elements in the array.*/
}

/*Function to delete an element at a given position.*/

void delete_elem ( int a[] )
{
	int pos, elem, i;
	if (n==0)
	{
		printf("Warning: The array is empty ....\n");
		printf("Press any key to continue....\n");
		char c1,c2; 
		scanf("%c%c", &c1,&c2);
		return;
	} 

	printf ( "\nEnter the valid position delete an element: " );
	scanf ( "%d", &pos );
	elem = a [ pos - 1 ];
	printf ( "\nThe deleted element is: %d", elem );
	for ( i = pos - 1 ; i < n - 1 ; i++ )
	a [ i ] = a [ i + 1 ]; /*Copy the element in i+1th location to i location.*/
	n--; /*Decrement the number of elements in the array.*/
}


int main()
{
	int ch, a [ 20 ];
	/* Infinite loop.*/
	for ( ; ; )
	{
		printf ( "\n---------------------------------------------" );
		printf ( "\nARRAY OPERATIONS" );
		printf ( "\n1: Create \n2: Display \n3: Insert at a given position \n4: Delete at a given sition \n5: Exit" );
		printf ( "\n---------------------------------------------" );
		printf ( "\nEnter your choice: " );
		scanf ( "%d", &ch );
		switch ( ch )
		{
			case 1: create ( a );
				break;
			case 2: display ( a );
				break;
			case 3: insert ( a );
				break;
			case 4: delete_elem ( a );
				break;
			case 5: return ( 0 );
				default: printf ( "\nInvalid Choice!!!" );
		}
	}
	return ( 0 );
}