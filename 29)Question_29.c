/*
C= ((F-32)*5)/9

*/

#include<stdio.h>
main()
{
	int days,month;
	
	printf("Enter days :");
	scanf("%d",&days);
	
	month=days/30;
	
	printf("\n days to month= %d",month);
}
