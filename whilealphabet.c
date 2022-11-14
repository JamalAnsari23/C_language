#include<stdio.h>
void main()
{
	char ch='A';
	printf("Enter alphabet from A to Z\n");
	scanf("%c", &ch);
	
	while(ch<='Z')
	{
		printf("%c\n", ch);
		ch++;
	}
}
