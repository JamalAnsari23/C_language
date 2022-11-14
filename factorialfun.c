#include<stdio.h>
int fact(int x)
{
	if(x==1)
	{
		return 1;
	}
	else
	{
		return x*fact(x-1);
	}
}
void main()
{
	int res;
	int x=6;
	res=fact(x);
	printf("%d",res);
}

