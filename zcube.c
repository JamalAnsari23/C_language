#include<stdio.h>
void cube(int x)
{
	printf("yout cube is %d\n",x*x*x);
}
void main()
{
	int x;
	printf("Enter your number\n",x);
	scanf("%d",&x);
	cube(x);
	
}
