#include <stdio.h>
void main()
{
	int a=37;
	int b=35;
	int c=36;
	int res=a>b&&a>c;
	printf("%d",res);
	
	if(a>b&&a>c)
	{
		printf("maximum");
	}
	else
	{
		printf("minimum");
	}
}
