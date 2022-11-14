#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a alphabets from A to Z\n");
	scanf("%c",&ch);
	while(ch>='A'){
		printf("%c\n",ch);
		ch--;
	}
}
