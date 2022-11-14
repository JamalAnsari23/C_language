#include<stdio.h>
#include<string.h>
void main()
{
	char a1[30];
	char a2[30];
	printf("Enter first string\n");
	gets(a1);
	printf("Enter second string\n");
	gets(a2);
	printf("The string a1 is friend of string a2 : %s",strcat(a1,a2));
	
}
