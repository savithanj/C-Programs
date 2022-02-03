// Program for task1
#include<stdio.h>

double TimeDiffInHours(int minA, int secA, int minB, int secB)
{
	double SecDiff=(minB*60+secB)-(minA*60+secA);
	if (SecDiff>0)
    	return(SecDiff/3600.0);
  	else
    	return(-SecDiff/3600.0);
}

int main()
{
	double res;
	res = TimeDiffInHours(500, 45,46, 468);
	printf("%lf\n", res);
	res = TimeDiffInHours(70, 30,309, 45);
	printf("%lf\n", res);
	res = TimeDiffInHours(20, 0,0, 0);
	printf("%lf\n", res);
	return 0;
}