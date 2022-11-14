#include <stdio.h>
void main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	
	switch(num>0)
	{
		case 1:
		printf("positive");
		break;
		
		case 0:
			switch(num<0)
			{
			case 1:
				printf("negative");
				break;
				case 0:
					printf("zero");
					break;
			}
	}
}
