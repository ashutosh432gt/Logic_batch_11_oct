#include<stdio.h>
main()
{
	int year;
	printf("Enter a year : ");
	scanf("%d",&year);
	
	if (year%4==0)
	{
		printf("Its a leap year");
	}
	else
	{
		printf("Its not a leap year");
	}
}
