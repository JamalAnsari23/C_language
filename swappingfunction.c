#include<stdio.h>
void swapping(int a, int b);
void main()
{
	int a=9;
	int b=10;
	printf("before swapping a=%d,b=%d\n",a,b);
	swapping(a,b);
}
void swapping(int a, int b)
{
	int change;
	change=a;
	a=b;
	b=change;
	printf("After swapping using function a=%d,b=%d\n",a,b);
	
}
