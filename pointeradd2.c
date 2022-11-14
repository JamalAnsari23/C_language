#include<stdio.h>
void main()
{
	int x;
	int y;
	int *p;
	int *p3;
	printf("Enter the first number");
	scanf("%d",&x);
	printf("Enter the second number");
	scanf("%d",&y);
	p=&x;
	p3=&y;
	printf("\n");
	printf("The sum of two number is =%d",*p+*p3);
}
