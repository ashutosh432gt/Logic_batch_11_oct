#include<stdio.h>
main()
{
	// STRING
	
	int s;
//	char lname[20];
	
	printf("Enter A Salary :");
	scanf("%d",&s);
	
	int dedc=(s*20)/100;
	
	
	printf("yearly insurance=%d\n",dedc*12);
	printf("Total salary=%d\n",s*12);
	printf("Net Salary=%d",(s-dedc)*12);
	
//	printf("Enter A Last Name:");
//	scanf("%s",lname);
	
	
//	printf("\n coutry name=%c%c%c",name[0],name[1],name[2]);
//	printf("\n last name=%s",lname);
}
