#include <stdio.h>
void main()
{
	int percent;
	printf("Enter a percent\n");
	scanf("%d", &percent);
	
	if(percent>=60)
	{
		printf("first division");
	}
	
		if(percent<60&&percent>=40)
		{
			printf("second division");
		}
		if(percent<40)
		{
			printf("Fail");
		}
	
}
