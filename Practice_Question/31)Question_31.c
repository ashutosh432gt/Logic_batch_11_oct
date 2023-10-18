#include<stdio.h>
main()
{
	int days,month,year;
	
	printf("Enter year :");
	scanf("%d",&year);
	
	month=year*12;
	days=365*year;
	
	printf("\n year to days= %d",days);
	printf("\n year to month= %d",month);
}
