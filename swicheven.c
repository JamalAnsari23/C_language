#include <stdio.h>
void main()
{
	int num;
	printf("Enter a Integers\n");
	scanf("%d", &num);
	
	switch(num%2)
	{
		case 0:
			printf("Even");
			break;
			
			case 1:
				printf("Odd");
				break;
	}
}
