#include <stdio.h>
void temp(void)
{
	int ch;
	float cl,fh;
	char fav;
	do
	{
		printf("1:celcius to fahrenheit\n");
		printf("2:fehrenheit to celsius\n");
		printf("enter ur choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("enter the temp in celsius:");
					scanf("%f",&cl);
					fh=((9/5)*cl)+32;
					printf("%fC=%fF\n",cl,fh);
					break;
			case 2:
					printf("enter the temp in fahrenheit:");
					scanf("%f",&fh);
					cl=((fh-32)*5)/9;
					printf("%fF=%fC\n",fh,cl);
					break;
			default:printf("invalid choice\n");
		}
		printf("Do u wish to continue:(Y is for yes and N for no)");
		scanf(" %c",&fav);
  }while(fav =='Y'|| fav == 'y');
}
void volume(void)
{
	int choice;
	float mc,cc;
	char fav;
	do
	{
		printf("1:metercube to centimetercube\n");
		printf("2:centimetercube to metercube\n");
		printf("enter ur choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	printf("enter volume in metercube:");
					scanf("%f",&mc);
					cc=1000000*mc;
					printf("%fm^3=%fcm^3\n",mc,cc);
					break;
			case 2:	printf("enter volume in centimetercube:");
					scanf("%f",&cc);
					mc=0.000001*cc;
					printf("%fcm^3=%fm^3\n",cc,mc);
					break;
			default:printf("invalid choice\n");
		}
		printf("Do u wish to continue:(Y is for yes nd N for no)");
		scanf(" %c",&fav);
	}while(fav=='Y' || fav == 'y');
}
void dis(void)
{
	int choice;
	float km,m;
	char fav;
	do
	{
		printf("1:kilometer to meter:\n");
		printf("2:meter to kilometer:\n");
		printf("enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					printf("enter the distance in km:");
					scanf("%f",&km);
					m=1000*km;
					printf("%fkm=%fm\n",km,m);
					break;
			case 2:
					printf("enter the distance in m:");
					scanf("%f",&m);
					km=0.001*m;
					printf("%fm=%fkm\n",m,km);
					break;
			default:printf("invalid choice\n");
			}
		printf("Do u wish to continue:(Y is for yes nd N for no)");
		scanf(" %c",&fav);
   }while(fav =='Y'|| fav == 'y');
}
	
int main()
{
	int choice;
	char fav;
	do
	{	
		printf("\nUNIT CONVERTER-MAIN MENU\n");
		printf("\t1:temperature\n");
		printf("\t2:volume\n");
		printf("\t3:distance\n");
		printf("\t4:Exit\n");
		printf("enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					temp();
					break;
			case 2:
					volume();
					break;
			case 3:
					dis();
					break;
			case 4:return 0;
			default:printf("wrong choice....\n");
		}
	}while(choice != 4);
}
	
