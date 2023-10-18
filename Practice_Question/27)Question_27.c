/*
F= C * (9/5) +32

*/

#include<stdio.h>
main()
{
	float f,c;
	
	printf("Enter celcius :");
	scanf("%f",&c);
	
	f=  ((c*9)/5)+32;
	
	printf("\n c to f= %f",f);
}
