#include<stdio.h>
main()
{
	int a;
	printf("Enter number");
	scanf("%d",&a);
	
	
	if(a>0)
	{
	 	printf("positive");
	}
	else if (a<0)
	{
		printf("negative");
	}
	else
	{
		printf("Static");
	}
}


