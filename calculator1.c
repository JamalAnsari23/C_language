#include<stdio.h>
void main()
{
	char ch;
	float num1,num2,result=0.0f;
	printf("Enter a number\n");
	printf("Enter [num1][+ - * /]\n");
	scanf("%f %c %f",&num1, &ch, &num2);
	
	switch(ch)
	{
		case '+':
			result=num1+num2;
				printf("%f",result);
			break;
		
			case '-':
				result=num1-num2;
					printf("%f",result);
				break;
				case '*':
				result=num1*num2;
				printf("%f",result);
				break;
				case'/':
					result=num1/num2;
					printf("%f",result);
					break;
					default:
						printf("Invalid input");
						break;
				
	}
}
