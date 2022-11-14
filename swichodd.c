#include <stdio.h>
void main()
{
	int jam;
	printf("Enter a Integers\n");
	scanf("%d", &jam);
	
	switch(jam%2)
	{
		case 0:
			printf("Even");
			break;
			
			case 1:
				printf("Odd");
				break;
	}
}
