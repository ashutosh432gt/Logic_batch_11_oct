#include<stdio.h>
main()
{
//	 find  area of circle

//formula :  pi * r*r

//formula: 2 *pi *r
	float pi=3.14;
	int r;
	int area;
	printf("Enter radius:");
	scanf("%d",&r);
	 area= pi * r*r;	
	printf("\n area = %d",area);
}
