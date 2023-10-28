#include<stdio.h>
main()
{
	int n1,n2,n3;
	
	printf("Enter Number 1: ");
	scanf("%d",&n1);
	printf("Enter Number 2: ");
	scanf("%d",&n2);
	printf("Enter Number 3: ");
	scanf("%d",&n3);
	
	n1>n2 ? n1>n3 ? printf("n1 is greater") : printf("n3 is Greater") : n2>n3 ?   printf("n2 is Greater" ) : printf("n3 is Greater");
	
	
}
