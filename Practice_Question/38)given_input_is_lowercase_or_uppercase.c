#include<stdio.h>
main()
{
	// ASCII
	
	int n;
	
	printf("Enter A Number:");
	scanf("%d",&n);
	
	
	printf("\n %c\n",n);
	
	if(64<n && n<91)
	{
		printf("Character In A Uppercase");
	}
	else if(n>31 && n<65)
	{
		printf("It Is A Special Character");
	 } 
	else if (n>0 && n<32)
	{
		printf("It is Nothing");
		
	}
	else
	{
		printf("Character in A Lowercase");	
	}
}
