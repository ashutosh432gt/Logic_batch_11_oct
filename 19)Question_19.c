#include<stdio.h>
main()
{
	// STRING
	
	char fname[20];
	char lname[20];
	char sname[20];
	
	
	printf("Enter A First Name:");
	scanf("%s",fname);
	printf("Enter A Last Name:");
	scanf("%s",lname);
	printf("Enter A Surname:");
	scanf("%s",sname);
	
	
	printf("\n%s %s %s ",fname,lname,sname);
	printf("\n%c. %c. %s ",fname[0],lname[0],sname);
}
