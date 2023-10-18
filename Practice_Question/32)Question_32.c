/*

C= ((F-32)*5)/9

*/

#include<stdio.h>
main()
{
	int minutes,seconds,hour;
	
	printf("Enter minutes :");
	scanf("%d",&minutes);
	
	seconds=minutes*60;
	hour=minutes/60;
	
	printf("\n minutes to seconds= %d",seconds);
	printf("\n minutes to hour= %d",hour);
}
