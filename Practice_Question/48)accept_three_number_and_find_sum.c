#include<stdio.h>
main()
{
	int  n,sum=0;
	

	int a;
	for(n=1;n<=3;n++)
	{
		printf("Enter A Number:");
		scanf("%d",&a);
		sum=sum+a;	
	}
	
	printf("Sum = %d",sum);
	
	
}
