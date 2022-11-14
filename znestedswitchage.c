#include<stdio.h>
void main()
{
	int age,marks;
	printf("Enter your age\n");
	scanf("%d",&age);
	
	printf("Enter your marks\n");
	scanf("%d",&marks);
	switch(age)
	{
		case 4:
			printf("The age is 4\n");
			switch(marks)
			{
				case 45:
					printf("your marks is 45");
			break;
			default:
				printf("your marks is not 45");
		}
		break;
			case 24:
				printf("The age is 24\n");
					switch(marks)
			{
				case 65:
					printf("your marks is 65");
			break;
			default:
				printf("your marks is not 65");
		}
				break;
				case 44:
				printf("The age is 44/n");
				break;
				default:
					printf("The age is not 4, 24, 44");
	}
}
