#include<stdio.h>
void main()
{
	int x;
	int y;
	int *p;
	int *p1;
	printf("Enter the Number");
	scanf("%d %d",&x,&y);
	p=&x;
	p1=&y;
	printf("\n");
	printf("The sum of two number is = %d",*p+*p1);
}
