#include <stdio.h>
 double cube(double num);
 
 {
 	result =0;
 }
 

void main()
{
	int num;
	 double c;
	printf("Enter any number is %d",num);
	scanf("%d",&num);
	
	c=cube(num);
	
	printf("cube of number is %d",num,c);
	
	
}

double cube(double num)
{
	return (num*num*num);
}
