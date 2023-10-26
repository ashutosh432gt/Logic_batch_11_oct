#include<stdio.h>
main()
{
	char a;
	
	printf("Enter a number :- ");
	scanf("%c",&a);
	
	if (a>=97 && a<=122)
	{
		printf("%c is a lowercase chracter",a);
		
	}
	else if (a>=65 && a<=90)
	{
		printf("%c is a uppercase chracter",a);
	}
	else if(a>=58 && a<=64 || a>=33 && a<=42)
	{
		printf("%c is a special chracter",a);
	}
	else
	{
		printf("It is a digit",a);
	}
	
}
