#include<stdio.h>
main()
{
	int a,n,e_sum=0,o_sum=0;
	for(n=1;n<=5;n++)
	{
		printf("Enter A Number:");
		scanf("%d",&a);
		
		if (a%2==0)
		{
			printf(" %d is even\n",a);
			e_sum+=a;
		
		}
		else
		{
			printf("%d is odd\n",a);
			o_sum+=a;
			
		}
	}
		printf("Sum=%d\n",e_sum);
		printf("Sum=%d\n",o_sum);
}
