#include<stdio.h>
main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	
	if(n>64 && n<91)
	{
	 	printf("%c",n);
	}
	else if (n>96 && n<123)
	{
		printf("%c",n);
	}
	else
	{
		printf("Logic not added in code");
	}
}


