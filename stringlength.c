#include<stdio.h>
#include<string.h>
void main()
{
	char leng[20];
	printf("Enter a string\n");
	gets(leng);
	printf("your string is %s",leng);
	printf("length of string is %d",strlen(leng));
}
