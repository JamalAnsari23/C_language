#include<stdio.h>
void main()
{
	int x=10;
	int y=20;
	int *p;
	int *q;
	*p=&x;
	*q=&y;
	*q=y-x;
	*p=*q+x;
	printf("value of x =%d",x);
	printf("\n")
//	printf("value of y=%d",y);
	
}
