/*
C= ((F-32)*5)/9

*/

#include<stdio.h>
main()
{
	float f,c;
	
	printf("Enter fahrenhit :");
	scanf("%f",&f);
	
	c = ((f-32)*5)/9;
	
	printf("\n f to c= %f",c);
}
