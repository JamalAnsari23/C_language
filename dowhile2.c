#include <stdio.h>
void main()
{
	int num, jamal = 0;
	printf("Enter a number\n");
	scanf("%d", &num);
	do
	{
		printf("%d\n", jamal+1);
		jamal=jamal+1;
	}while(jamal<num);
}
