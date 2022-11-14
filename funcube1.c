#include<stdio.h>
void cubiccalc(int x)
{
	printf("%d Cube of your number=",(x*x*x));	
}
void main()
{
	int x;
	printf("Enter your number",x);
	scanf("%d",&x);
	cubiccalc(x);
}
