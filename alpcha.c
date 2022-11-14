#include <stdio.h>
void main()
{
	char ch;
	printf("Enter a alphabet\n");
	scanf("%c",&ch);
	
	else if((ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'))
	{
		printf(" Alphabet");
	}
	else if(ch>='0'&&ch<='9')
	{
		printf(" digit");
	}
	else
	{
		printf("special character");
	}
}
