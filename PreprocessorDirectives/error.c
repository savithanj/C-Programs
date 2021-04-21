#include<stdio.h>
#define t(p1,p2,p3) p1##p2##p3
#define p(s)  #s
#define sum(a) #a
#define MAX 10

int main()
{
	#if (MAX==10)
		printf("MAX=10\n");
	#elif (MAX == 20)
		printf("MAX =20\n");
	#else 
	# error "MAX not define"
	#endif
	int var10=123;
	printf("var10 = %d\n", t(var,1,0));
	char s[]=p(100);
	printf("s = %s\n",s);
	printf("%s\n", sum(10+20));
	return 0;
}

/*4 storage class specifiers are
1. extern
2. static
3. auto
4. register*/


