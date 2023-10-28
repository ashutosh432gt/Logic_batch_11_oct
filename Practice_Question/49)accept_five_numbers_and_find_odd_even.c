#include<stdio.h>
main()
{
	int a,n;
	for(n=1;n<=5;n++)
	{
		printf("Enter A Number:");
		scanf("%d",&a);
		
		if (a%2==0)
		{
			printf(" %d is even\n",a);
		}
		else
		{
			printf("%d is odd\n",a);
		}
	}
}
