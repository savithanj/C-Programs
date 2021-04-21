#include<stdio.h>
#include<math.h>
int main()
{
	float sum,mean,sd,var;
	float *p;
	int i,n;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	printf("enter the elements in the array:\n");
	float a[n];
	p=a;
	for(i=0;i<n;i++)
	{
		scanf("%f",p);
		p++;
	}
	p=a;
	sum=mean=var=sd=0.0;
	for(i=0;i<n;i++)
	{
		sum=sum+(*p);
		p++;
	} 
	mean=sum/n;
	p=a;
	for(i=0;i<n;i++)
	{
	var=var+pow((*p-mean),2);
	p++;
	}
	var=var/n;
	sd=sqrt(var);
	printf("the sum is:%f\n",sum);
	printf("the var is:%f\n",var);
	printf("the mean is:%f\n",mean);
	printf("the standard deviation is:%f\n",sd);
	return 0;
}