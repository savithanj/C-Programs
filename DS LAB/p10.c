#include<stdio.h>
#include<stdlib.h>
struct BST
{
	struct BST *l;
	int data;
	struct BST *r;
} node;
struct BST *ptr,*root;


int menu()
{
	int c;
	printf("\n1. Create\n2. inorder\n3. preorder\n4. postorder\n5. searching\n6. deletion\n7. exit\n");
	printf("Enter Choice :");
	scanf("%d",&c);
	return c;
}

void create()
{
	ptr=(struct BST *) (malloc(sizeof(struct BST)));
	ptr->r=NULL;
	ptr->l=NULL;
	printf("Enter number:");
	scanf("%d",&ptr->data);
}

void insert(struct BST *temp)
{
	int x;
	x=ptr->data;
	if(x>temp->data)
	{
		if(temp->r==NULL)
			temp->r=ptr;
		else
			insert(temp->r);
	}
	else
	{
		if(temp->l==NULL)
			temp->l=ptr;
		else
			insert(temp->l);
	}
}
void inorder(struct BST *temp)
{
	if(temp!=NULL)
	{
		inorder(temp->l);
		printf("\t%d",temp->data);
		inorder(temp->r);
	}
}

void preorder(struct BST *temp)
{
	if(temp!=NULL)
	{
		printf("\t%d",temp->data);
		preorder(temp->l);
		preorder(temp->r);
	}
}

void postorder(struct BST *temp)
{
	if(temp!=NULL)
	{
		postorder(temp->l);
		postorder(temp->r);
		printf("\t%d",temp->data);
	}
}

void search(struct BST *temp,int key)
{
	if(temp==NULL)
	{
		printf("Empty tree!!");
		return;
	}
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			printf("key found");
			return;
		}
		else if(key>temp->data)
			temp=temp->r;
		else if(key<temp->data)
			temp=temp->l;
	}
	printf("key not found");
}
void delete(struct BST *temp,int key)
{
	struct BST *t,*parent,*succ;
	if(temp==NULL)
	{
		printf("Empty tree!!");
		return ;
	}
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			if(temp->l==NULL && temp->r==NULL)
			{
				if(temp==t->l)
					t->l=NULL;
				else
					t->r=NULL;
			}
			else if(temp->l!=NULL && temp->r==NULL)
			{
				if(temp==t->l)
					t->l=temp->l;
				else
					t->r=temp->l;
			}
			else if(temp->l==NULL && temp->r!=NULL)
			{
				if(temp==t->l)
					t->l=temp->r;
				else
					t->r=temp->r;
			}
			else if(temp->l!=NULL && temp->r!=NULL)//with two child
			{
				parent=temp->r;
				succ=parent->l;
				while(succ->l!=NULL)
				{
					parent=succ;
					succ=succ->l;
				}
				temp->data=succ->data;
				parent->l=NULL;
			}
			return;
		} //key if
		else if(key>temp->data)
		{
			t=temp;
			temp=temp->r;
		}
		else if(key<temp->data)
		{
			t=temp;
			temp=temp->l;
		}
	}//while
	printf("key is not in BST");
}

int main()
{
	int ca,key,d;
	printf("\n**************Binary Search Tree Operations**************\n");
	do
	{
		ca=menu();
		
		switch(ca)
		{
			case 1:
					create();
					if(root==NULL)
						root=ptr;
					else
						insert(root);
					break;
			case 2:
					printf("Inorder:\t");
					inorder(root);
					break;
			case 3:
					printf("preorder:\t");
					preorder(root);
					break;
			case 4:
					printf("postorder:\t");
					postorder(root);
					break;
			case 5:
					printf("\nenter key to be search:\t");
					scanf("%d",&key);
					search(root,key);
					break;
			case 6:
					printf("\nenter key to be delete:\t");
					scanf("%d",&d);
					delete(root,d);
					break;
			case 7: break;
			default: break;
		}
	}while(ca!=7);
}