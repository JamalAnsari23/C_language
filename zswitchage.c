#include<stdio.h>
void main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	switch(age)
	{
		case 4:
			printf("The age is 4\n");
//			break;
			case 24:
				printf("The age is 24\n");
//				break;
				case 44:
				printf("The age is 44\n");
//				break;
				default:
					printf("The age is not 4, 24, 44");
	}
}
