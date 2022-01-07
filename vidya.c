#include <stdio.h>
void temp(void)
{
	int ch;
	char fav;
	float cl,fh;
	do
	{
		printf("1:celcius to fahreneit\n");
		printf("2:fehreneit to celsius\n");
		printf("enter ur choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter the temp in fah:");
				scanf("%f",&cl);
				fh=((9/5)*cl)+32;
				printf("%fC=%fF\n",cl,fh);
				break;
			case 2:printf("enter the temp in cel:");
				scanf("%f",&fh);
				cl=((fh-32)*5)/9;
					printf("%fF=%fC\n",fh,cl);
					break;
			default:printf("invalid choice\n");
		}
		printf("Do u Wish to Continue (Y for Yes, N for No:");
		scanf(" %c",&fav);
	} while (fav == 'Y' || fav == 'y');
	
}
void volume(void)
{
	int choice;
	float mc,cc;
	printf("1:metercube to centimetercube\n");
	printf("2:centimetercube to metercube\n");
	printf("enter ur choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("enter volume in metercube:");
		       scanf("%f",&mc);
		       cc=1000000*mc;
		       printf("%fm^3=%fcm^3\n",mc,cc);
		       break;
		case 2:printf("enter volume in centimetercube:");
		      scanf("%f",&cc);
		       mc=0.000001*cc;
		       printf("%fcm^3=%fm^3\n",cc,mc);
		       break;
		default:printf("invalid choice\n");
		
	}
}
void dis(void)
{
	int choice;
	float km,m;
	printf("1:kilometer to meter:\n");
	printf("2:meter to kilometer:\n");
	printf("enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("enter the distance in km:");
		       scanf("%f",&km);
		      m=1000*km;
		      printf("%fkm=%fm\n",km,m);
		      break;
		case 2:printf("enter the distance in m:");
		       scanf("%f",&m);
		       km=0.001*m;
		      printf("%fm=%fkm\n",m,km);
		       break;
		default:printf("invalid choice\n");
		
	}
}
	
int main()
{
	int choice;
	char fav;
	do
	{
		printf("\nUNIT CONVERSION - MAIN MENU\n");
		printf("===========================\n\n");
		printf("\t1:Temperture\n");
		printf("\t2:Volume\n");
		printf("\t3:Distance\n");
		printf("\t4:Exit\n");
		printf("\tEnter Your Choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:temp();
				break;
			case 2:volume();
				break;
			case 3:dis();
				break;
			case 4:return 0;
			default:printf("wrong choice\n");
		}
	}while(choice != 4);
}
	
