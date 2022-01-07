#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct polynomial
{
	int coeff, x, y, z;
	struct polynomial *link;
};
typedef struct polynomial * POLYNOMIAL;
/*Function definition to allocate memory.*/
POLYNOMIAL create()
{
	POLYNOMIAL getnode;
	getnode = ( POLYNOMIAL ) malloc ( sizeof ( struct polynomial ) );
	if ( getnode == NULL )
	{
		printf ( "\nMemory couldnt be allocated!!!" );
		return NULL;
	}
	return ( getnode );
}
/*Function definition to insert a polynomial in a singly circular linked list with header
node.*/
POLYNOMIAL insert ( POLYNOMIAL head, int c, int px, int py, int pz )
{
	POLYNOMIAL node, temp;
	node = create();
	node->coeff = c;
	node->x = px;
	node->y = py;
	node->z = pz;
	node->link = NULL;
	temp = head->link;
	while ( temp->link != head ) /*Traverse till the end of the list.*/
	{
		temp = temp->link;
	}
	temp->link = node; /*Attach the node to the end of the list.*/
	node->link = head; /*Assign the address of the head to node's link.*/
	return ( head );
}
/*Function definition to read the polynomial.*/
POLYNOMIAL input_polynomial ( POLYNOMIAL head )
{
	int n,i, c, px, py, pz;
	printf("Enter the number of terms :");
	scanf("%d", &n);
	for ( i = 0 ;i < n; i++ )
	{
		printf ( "\nEnter the coefficient %d: ", i );
		scanf ( "%d", &c );
		printf ( "\nEnter the power of x: " );
		scanf ( "%d", &px );
		printf ( "\nEnter the power of y: " );
		scanf ( "%d", &py );
		printf ( "\nEnter the power of z: " );
		scanf ( "%d", &pz );
		head = insert ( head, c, px, py, pz );
	}
	return ( head );
}
/*Function definition to display the list.*/
void display ( POLYNOMIAL head )
{
	POLYNOMIAL temp;
	if ( head->link == head )
	{
		printf ( "\nPolynomial doesnt exist!!!" );
		return;
	}
	temp = head->link;
	while ( temp != head )
	{
		printf ( "%dx^%dy^%dz^%d ", temp->coeff, temp->x, temp->y, temp->z );
		temp = temp->link;
	}
}
/*Function definition to evalulate the polynomial.*/
int evaluate_polynomial ( POLYNOMIAL head )
{
	int vx, vy, vz, sum = 0;
	POLYNOMIAL temp;
	printf ( "\n\nEnter the value of x, y and z: " );
	scanf ( "%d%d%d", &vx, &vy, &vz );
	temp = head->link;
	while ( temp != head )
	{
		sum = sum + ( temp->coeff * pow ( vx, temp->x ) * pow ( vy, temp->y ) * pow ( vz,
		temp->z ) );
		temp = temp->link;
	}
	return ( sum );
}
int main()
{
	POLYNOMIAL head;
	int res;
	/*Create a header node whose link field points to the address of itself intially.*/
	head = create();
	head->link = head;
	printf ( "\nEnter the polynomial to be evaluated: " );
	head = input_polynomial ( head );
	printf ( "\nThe given polynomial is: " );
	display ( head );
	res = evaluate_polynomial ( head );
	printf ( "\nThe result after evaluation is: %d", res );
	return ( 0 );
}