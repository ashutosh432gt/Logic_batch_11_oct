#include<stdio.h>
main()
{
  int marks;
  printf("Enter your marks in % :- ");
  scanf("%d",&marks);
  
  if (marks>=80)
  {
  	printf("A Grade");
  }
  else if (marks>=60 && marks<=79)
  {
  	printf("B Grade");
  }
  else if (marks>=45 && marks<=59)
  {
  	printf("C Grade");
  }
  else
  {
  	printf("Fail");
  }	
}
