#include<stdio.h>
void main()
{
	int x=10;
	int y=20;
	int temp=0;
	temp=x;
	x=y;
	y=temp;
	printf("%d%d",x,y);
	
}
