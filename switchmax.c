#include <stdio.h>
void main()
{
	int num1,num2;
	printf("Enter a two numbers to find maximum\n");
	scanf("%d%d",&num1,&num2);
	
	switch(num1>num2)
	{
		case 0:
			printf("%d is a maximum", num2);
			break;
			
			case 1:
				printf("%d is a maximum",num1);
				break;
	}
}
