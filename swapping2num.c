#include<stdio.h>
void main()
{
	int x=10;
	int y=20;
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("value of x =%d",x);
	printf("\n");
	printf("value of y=%d",y);
}
