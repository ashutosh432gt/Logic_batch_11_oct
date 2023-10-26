#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter Number 1 :- ");
	scanf("%d",&a);
	printf("Enter Number 2 :- ");
	scanf("%d",&b);
	printf("Enter Number 3 :- ");
	scanf("%d",&c);
	
	if (a>b && a>c)
	{
		printf("%d is greater than %d and %d",a,b,c);
	}
	else if (b>c && b>a)  
	{
		printf("%d is greater than %d and %d",b,a,c);
	}
	else
	{
		printf("%d is greater than %d and %d",c,a,b);
	}
}
