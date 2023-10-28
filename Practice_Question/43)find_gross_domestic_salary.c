#include<stdio.h>
main()
{
	int salary,hra,da;
	printf("Enter Your Salary:");
	scanf("%d",&salary);
	
	if (salary<=10000)
	{
			hra=(salary*20)/100;
			da=(salary*80)/100;
			printf("HRA =%d\n",hra);
			printf("DA=%d\n",da);
			printf("\n Gross Salary is: %d",salary+hra+da);
			printf("\n Annum Salary is: %d",(salary+hra+da)*12);
			
	}
		
	else if(salary<=20000)
	{
		hra=(salary*25)/100;
		da=(salary*90)/100;
		printf("HRA =%d\n",hra);
		printf("DA=%d\n",da);
		printf("\n Gross Salary is: %d",salary+hra+da);
		printf("\n Annum Salary is: %d",(salary+hra+da)*12);
	}
	else if(salary>20000)
	{
		hra=(salary*30)/100;
		da=(salary*95)/100;
		printf("HRA =%d\n",hra);
		printf("DA=%d\n",da);
		printf("\n Gross Salary is: %d",salary+hra+da);
		printf("\n Annum Salary is: %d",(salary+hra+da)*12);
	}
}
