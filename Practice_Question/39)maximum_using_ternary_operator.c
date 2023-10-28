/*
operator : two perform some specific operations between  two operands 

is called operator 


1) Arithmetic :  + - * / % 
2) Assignment : = to assign something
3) Relational operatrs : > < >= <= == !=
4) Logical operators : && || !
5) bitwise operator : which perform on bit
6) unary operator(increment - decrement ) : ++  --
7) conditional operator : ? :
8) special operator : sizeof()  , comma operator ,

*/

#include<stdio.h>
main()
{
	// conditional operator:
	// syntax : exp1 ? exp2 : exp3 ;
	
	
	int n1,n2,max;
	
	printf("Enter Number 1: ");
	scanf("%d",&n1);
		printf("Enter Number 2: ");
	scanf("%d",&n2);
	
	max = n1>n2 ? n1 : n2;
	
	printf("\n max=%d",max);
	
}
