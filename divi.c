#include <stdio.h>
void main()
{
	int a=15;
	int b=20;
	int result=a&&b/5;
	printf("%d", result);
	
	if(result==1)
	{
		printf("divisible by 5");
		
	}
	else
	{
		printf("not divisible by 5");
	}
}
