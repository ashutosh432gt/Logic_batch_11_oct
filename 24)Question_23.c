#include<stdio.h>
main()
{
	int s1,s2,s3,s4,s5,sum;
	
	printf("Enter Subject 1:");
	scanf("%d",&s1);
	printf("Enter Subject 2:");
	scanf("%d",&s2);
	printf("Enter Subject 3:");
	scanf("%d",&s3);
	printf("Enter Subject 4:");
	scanf("%d",&s4);
	printf("Enter Subject 5:");
	scanf("%d",&s5);
	
	sum=s1+s2+s3+s4+s5;
	
	float per=(sum*100)/500;
	
	printf("per=%f ",per);
	
}
