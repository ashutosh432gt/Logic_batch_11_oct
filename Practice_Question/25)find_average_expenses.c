//accept 5 expences from user and find average of expense

#include<stdio.h>
main()
{
	int e1,e2,e3,e4,e5,Total;
	char n1[20],n2[20],n3[20],n4[20],n5[20];
//	printf("Enter Expence 1  Name:");
//	scanf("%s",&n1);
	printf("Enter Expence 1  :");
	scanf("%d",&e1);
//	printf("Enter Employee 2  Name:");
//	scanf("%s",&n2);
	printf("Enter Expence 2 :");
	scanf("%d",&e2);
//	printf("Enter Employee 3  Name:");
//	scanf("%s",&n3);
	printf("Enter Expence 3 :");
	scanf("%d",&e3);
//	printf("Enter Employee 4  Name:");
//	scanf("%s",&n4);
	printf("Enter Expence 4 :");
	scanf("%d",&e4);
//	printf("Enter Employee 5  Name:");
//	scanf("%s",&n5);
	printf("Enter Expence 5 :");
	scanf("%d",&e5);
	
	Total=e1+e2+e3+e4+e5;
	
	printf("Total=%d\n",Total);
	
	float average=(Total*100)/500;
	
	printf("average=%f ",average);
	
	
}
