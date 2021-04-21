#include<stdio.h>
int main()
{
	int a[3][3] = { {1,2,3},
					{4,5,6},
					{7,8,9}
				  };

	int (*p)[3] = a;
	printf("a= %p\n",a);
	printf("p= %p\n",p);

	printf("a+1 = %p\n",a+1);
	printf("p+1 = %p\n",p+1);

	printf("a+2 = %p\n",a+2);
	printf("p+2 = %p\n",p+2);

	printf("*a = %p\n",*a);
	printf("*p = %p\n",*p);

	printf("*(a+1) = %p\n",*(a+1));
	printf("*(p+1) = %p\n",*(p+1));

	printf("*(a+2) = %p\n",*(a+2));
	printf("*(p+2) = %p\n",*(p+2));
	
	printf("*(*a) = %d\n",*(*a));
	printf("*(*(a+1)) = %d\n",*(*(a+1)));
	printf("*(*(a+2)) = %d\n",*(*(a+2)));

	printf("(*(a+0)+2) = %p",(*(a+0)+2));
	printf("(*(a+1)+1) = %p",(*(a+1)+1));
	printf("(*(a+2)+0) = %p",(*(a+2)+0));


	/*printf("%p",a);
	printf("%p",a);
	printf("%p",a);
	printf("%p",a);
	printf("%p",a);
	printf("%p",a);
	printf("%p",a);
	printf("%p",a);
	printf("%p",a);
	printf("%p",a);
	printf("%p",a);
	printf("%p",a);*/
	return 0;
}