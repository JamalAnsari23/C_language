#include <stdio.h>
void main()
{
	int a;
	printf("Enter a numbers\n",a);
	scanf("%d",&a);
	
	if(a % 5==0)
	{
		printf("number is divisible by 5");
		
	}
	else
	{
		printf("not divisible by 5");
	}
}
