#include<stdio.h>
main()
{
	int n1,n2,min;
	
	printf("Enter Number 1: ");
	scanf("%d",&n1);
	printf("Enter Number 2: ");
	scanf("%d",&n2);
	
	min = n1<n2 ? n1 : n2;
	
	printf("\n min=%d",min);
	
}
