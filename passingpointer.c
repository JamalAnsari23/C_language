#include<stdio.h>
void main()
{
	int x=9;
	int *ptr=x;
	ptrfun(ptr);
}
void ptrfun(int*ptr)

{
	printf("%d",ptr);
}
