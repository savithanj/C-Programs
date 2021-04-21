#include<stdio.h>
#include<math.h>
int main()
{
	float A[10],*p,sum=0,mean,var=0,sd;
	int n,i;
	printf("\n enter n");
	scanf("%d",&n);
	printf("\n enter array elements:");
	p=A;
	for(i=0;i<n;i++)
	{
		scanf("%f",p);
		sum=sum+(*p);
		p++;
	}
	mean=sum/n;
	p=A;
	for(i=0;i<n;i++)
	{
		var=var +pow((mean-(*p)),2);
		p++;
	}	
		var=var/n;
		sd=sqrt(var);
		printf("\n sum=%f \n mean=%f \n standard deviation =%f",sum,mean,sd);
}		