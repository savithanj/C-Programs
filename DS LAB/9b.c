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
POLYNOMIAL insert_end ( POLYNOMIAL head, int c, int px, int py, int pz )
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
	int i, c, px, py, pz,n;
	printf ( "Enter the number of terms :" );
	scanf("%d", &n);
	
	for ( i = 0;i<n; i++ )
	{
		printf ( "\nEnter coefficient %d: ", i+1 );
		scanf ( "%d", &c );
		printf ( "\nEnter the power of x: " );
		scanf ( "%d", &px );
		printf ( "\nEnter the power of y: " );
		scanf ( "%d", &py );
		printf ( "\nEnter the power of z: " );
		scanf ( "%d", &pz );
		head = insert_end ( head, c, px, py, pz );
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
		if(temp != head->link && temp->coeff > 0)
			putchar('+');
		print ( " %d x^%d y^%d z^%d ", temp->coeff, temp->x, temp->y, temp->z );
		temp = temp->link;
	}
}

/*Function definition to sum the two polynomials.*/
POLYNOMIAL sum_polynomial ( POLYNOMIAL head1, POLYNOMIAL head2, POLYNOMIAL head3 )
{
	POLYNOMIAL p1, p2;
	int c, c1, c2, x1, y1, z1, x2, y2, z2, flag;
	p1 = head1->link;
	while ( p1 != head1 )
	{
		c1 = p1->coeff;
		x1 = p1->x;
		y1 = p1->y;
		z1 = p1->z;

		p2 = head2->link;
		flag = 0; /*No matching polynomial.*/
		while ( p2 != head2 )
		{
			c2 = p2->coeff;
			x2 = p2->x;
			y2 = p2->y;
			z2 = p2->z;
			if ( ( x1 == x2 ) && ( y1 == y2 ) && ( z1 == z2 ) ) /*Check if the power of x, y and z of both of the polynomials are equal or not.*/
			{
				head3 = insert_end ( head3, c1+c2, x1, y1, z1 ); /*Sum the coefficients
				and inert into the final polynomial.*/
				p2->coeff = 0; /*Assign 0 to the coeff of polynomial to indicate that we
				have finished evaluating it.*/
				flag = 1; /*Matching polynomial.*/
				break;
			}
			else
				p2 = p2->link;
		}
		if ( flag == 0 ) /*No matching polynomial.*/
			head3 = insert_end ( head3, c1, x1, y1, z1 ); /*Insert polynomial1 into final
			polynomial.*/
		p1 = p1->link;
	}
	p2 = head2->link;
	while ( p2 != head2 )
	{
		if ( p2->coeff != 0 ) /*Check for left out plolynomial's in polynomial2.*/
		head3 = insert_end ( head3, p2->coeff, p2->x, p2->y, p2->z ); /*Insert
		polynomial2 into final polynomial.*/
		p2 = p2->link;
	}
	return head3;
}

int main()
{
	POLYNOMIAL head1, head2, head3;
	/*Create a header node for polynomial1 whose link field points to the address of itself
	intially.*/
	head1 = create();
	head1->link = head1;
	/*Create a header node for polynomial2 whose link field points to the address of itself
	intially.*/
	head2 = create();
	head2->link = head2;
	/*Create a header node for sum of polynomial whose link field points to the address of
	itself intially.*/
	head3 = create();
	head3->link = head3;
	printf ( "\nEnter the first polynomial: " );
	head1 = input_polynomial ( head1 );
	display ( head1 );
	printf ( "\n\nEnter the second polynomial: " );
	head2 = input_polynomial ( head2 );
	display ( head2 );
	head3 = sum_polynomial ( head1, head2, head3 );
	printf ( "\n\nThe sum of two polynomials is: " );
	display ( head3 );
	return ( 0 );
}
