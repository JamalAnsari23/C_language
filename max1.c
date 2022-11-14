#include <stdio.h>
void main()
{
	int x=40;
	int y=20;
	int c=10;
	int result=x>y&&y>c;
	printf("%d", result);
	
	if(result==1)
	{
		printf("maximum");
		
	}
	else
	{
		printf("minimum");
	}
	
}
