#include <stdio.h>
void main()
{
	char ch;
	printf("Enter a character\n");
	scanf("%c", &ch);
	
	if(ch>='a'&&ch<='z')
	{
		printf("alphabet");
	}
	else
	{
		printf("Not alphabet");
	}
}
