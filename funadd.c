#include<stdio.h>
 void sum()
{
	int x;
	int y;
	printf("Enter the value of x and y\n",x,y);
	scanf("%d%d",&x,&y);
	printf("The sum is %d",x+y);
}
void main()
{
	sum();
}
