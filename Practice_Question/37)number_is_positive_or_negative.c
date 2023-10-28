#include<stdio.h>
main()
{
	int n;
	printf("Enter  a number:");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("number is positive");
	}
	else if(n<0)
	{
		printf("number is nagetive");
	}
	
	else
	{
		printf("number is static");
	}
}
